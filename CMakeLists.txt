#Specify the version being used aswell as the language
cmake_minimum_required(VERSION 2.6)
#Name your project here
project(fitplanet)


find_package(Protobuf REQUIRED)
include_directories(${PROTOBUF_INCLUDE_DIRS})
include_directories(${CMAKE_CURRENT_BINARY_DIR})
file( GLOB LIB_SOURCES *.cpp )
file( GLOB LIB_HEADERS *.h )
file( GLOB LIB_PROTO *.proto )
PROTOBUF_GENERATE_CPP(ProtoSources ProtoHeaders ${LIB_PROTO})
add_library( YourLib ${LIB_SOURCES} ${LIB_HEADERS} )


#add_definitions(-l fitplanet.pb.cc protobuf)
add_executable(fitplanet fitplanet.cpp ${ProtoSources} ${ProtoHeaders})
target_link_libraries(fitplanet ${PROTOBUF_LIBRARIES} YourLib)
