JPKG=com/cc/protobuf/

PBC=protoc
PBC_CSharp=./ProtoGen/protogen.exe

%s.java:	CFLAGS=--java_out=./

%.pb.cc:	CFLAGS=-I=./ --cpp_out=./cpp/

%_pb2.py:	CFLAGS:=-I=./ --python_out=./py/

%.cs:	CFLAGS:=-I=./ -o=./csharp/

vpath %.java $(JPKG)
vpath %.pb.cc cpp

vpath %_pb2.py py

vpath %.cs csharp

#Sources:=$(shell dir *.proto)
Sources:=$(wildcard *.proto)

JavaTargets:=$(Sources:.proto=s.java)
CppTargets:=$(Sources:.proto=.pb.cc)
PyTargets:=$(Sources:.proto=_pb2.py)
CSharpTargets:=$(Sources:.proto=.cs)

all:	java cpp py csharp

.PHONY:	all java cpp py csharp clean cleanjava cleancpp cleanpy cleancsharp

java:	$(JavaTargets)

cpp:	$(CppTargets)

py:  $(PyTargets)

csharp:  $(CSharpTargets)

$(JavaTargets):	%s.java:	%.proto
	$(PBC) $(CFLAGS)   $<

$(CppTargets):	%.pb.cc:	%.proto
	$(PBC) $(CFLAGS)   $<

$(PyTargets):	%_pb2.py:	%.proto
	$(PBC) $(CFLAGS)   $<
	
$(CSharpTargets):	%.cs:	%.proto
	$(PBC_CSharp) -i:$< -o:./csharp/$@ -p:detectMissing

clean:	cleanjava cleancpp cleanpy cleancsharp

cleanjava:
	$(RM) $(JPKG)*.java

cleancpp:
	$(RM) cpp/*.pb.cc cpp/*.pb.h
	
cleanpy:
	$(RM) py/*.py
	
cleancsharp:
	$(RM) csharp/*.cs
