# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ProtoData.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='ProtoData.proto',
  package='Proto.Data',
  syntax='proto2',
  serialized_options=None,
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n\x0fProtoData.proto\x12\nProto.Data\"\x17\n\x07\x44\x61taRow\x12\x0c\n\x04Rows\x18\x01 \x03(\x01\"1\n\nDataMatrix\x12#\n\x06Matrix\x18\x01 \x03(\x0b\x32\x13.Proto.Data.DataRow'
)




_DATAROW = _descriptor.Descriptor(
  name='DataRow',
  full_name='Proto.Data.DataRow',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='Rows', full_name='Proto.Data.DataRow.Rows', index=0,
      number=1, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=31,
  serialized_end=54,
)


_DATAMATRIX = _descriptor.Descriptor(
  name='DataMatrix',
  full_name='Proto.Data.DataMatrix',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='Matrix', full_name='Proto.Data.DataMatrix.Matrix', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=56,
  serialized_end=105,
)

_DATAMATRIX.fields_by_name['Matrix'].message_type = _DATAROW
DESCRIPTOR.message_types_by_name['DataRow'] = _DATAROW
DESCRIPTOR.message_types_by_name['DataMatrix'] = _DATAMATRIX
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

DataRow = _reflection.GeneratedProtocolMessageType('DataRow', (_message.Message,), {
  'DESCRIPTOR' : _DATAROW,
  '__module__' : 'ProtoData_pb2'
  # @@protoc_insertion_point(class_scope:Proto.Data.DataRow)
  })
_sym_db.RegisterMessage(DataRow)

DataMatrix = _reflection.GeneratedProtocolMessageType('DataMatrix', (_message.Message,), {
  'DESCRIPTOR' : _DATAMATRIX,
  '__module__' : 'ProtoData_pb2'
  # @@protoc_insertion_point(class_scope:Proto.Data.DataMatrix)
  })
_sym_db.RegisterMessage(DataMatrix)


# @@protoc_insertion_point(module_scope)
