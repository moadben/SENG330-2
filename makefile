all: main

main: *.cpp fitplanet.pb.h fitplanet.pb.cc
	g++ *.cpp fitplanet.pb.cc -o output -l protobuf


fitplanet.pb.h:  fitplanet.proto
	protoc --cpp_out=. fitplanet.proto

fitplanet.pb.cc: fitplanet.proto

clean: assign2
