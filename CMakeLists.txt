cmake_minimum_required(VERSION 3.17)
project(serialization_demo)

set(CMAKE_CXX_STANDARD 20)

find_package(nlohmann_json CONFIG REQUIRED)
find_package(protobuf CONFIG REQUIRED)

add_subdirectory(protobuf)

add_executable(serialization_demo main.cpp)
target_include_directories(serialization_demo PRIVATE "${CMAKE_SOURCE_DIR}/include")
target_link_libraries(serialization_demo
        PRIVATE
        proto_msg
        nlohmann_json::nlohmann_json
)
