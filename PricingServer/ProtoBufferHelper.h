#pragma once

#include <windows.h>
#include <google/protobuf/stubs/common.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>

#include "..\ProtoBufferFile\cpp\PackageHead.pb.h"
#include "czmq.h"
#include "StringHelper.h"

#include <ostream>
#include <fstream>

using namespace std;
using namespace Proto::Package;
using namespace UtilTool;

class ProtoBufferHelper
{
private:
	ProtoBufferHelper() {};

public:
	static bool ParseToObject(google::protobuf::MessageLite* p, zframe_t* frame)
	{
		return p->ParseFromArray(zframe_data(frame), (int)zframe_size(frame));
	}

	static bool ParseToObject(google::protobuf::MessageLite* p, byte* buf, int size)
	{
		return p->ParseFromArray(buf, size);
	}

	static byte* SerializeToByteArray(google::protobuf::MessageLite* p)
	{
		int size = p->ByteSize();
		byte* buf = new byte[size];
		p->SerializeToArray(buf, size);

		return buf;
	}

	static void FormatProtoHeader(byte** buf, int* size, FunctionCode funcCode, PackageType type, int msgCode, string& msgText)
	{
		PackageHead head;
		head.set_functioncode(funcCode);
		head.set_packagetype(type);
		head.set_messagecode(msgCode);
		head.set_messagetext(StringHelper::AsciiToUtf8String(msgText));
		*buf = SerializeToByteArray(&head);
		*size = head.ByteSize();
	}

	static void SerializeToFile(google::protobuf::MessageLite* p, const string& strFileName)
	{
		fstream f(strFileName, ios::out | ios::trunc | ios::binary);

		byte* b = SerializeToByteArray(p);
		f.write((char*)b, p->ByteSize());
		delete[] b;

		f.close();
		f.clear();
	}

	static void ParseFromFile(google::protobuf::MessageLite* p, const string& strFileName)
	{
		fstream f(strFileName, ios::in | ios::binary);

		if (f.is_open())
		{
			f.seekg(0, ios::end);
			int len = (int)f.tellg();
			f.seekg(0, ios::beg);

			if (len > 0)
			{
				char* buf = new char[len];
				f.read(buf, len);
				ParseToObject(p, (byte*)buf, len);
				delete[] buf;
			}

			f.close();
			f.clear();
		}
	}
};

