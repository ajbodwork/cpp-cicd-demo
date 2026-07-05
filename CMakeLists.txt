cmake_minimum_required(VERSION 3.14)
project(CppCiCdDemo LANGUAGES CXX)

# Force C++17 standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable testing capabilities in CMake
include(CTest)

# Automatically download the Catch2 Testing Framework from GitHub
include(FetchContent)
FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v2.13.9 # Using v2 for single-header simplicity
)
FetchContent_MakeAvailable(Catch2)

# Create our test executable from main.cpp
add_executable(my_tests main.cpp)

# Link our executable to the Catch2 framework
target_link_libraries(my_tests PRIVATE Catch2::Catch2)

# Tell CTest that "my_tests" is a test binary it should run
add_test(NAME RunAllTests COMMAND my_tests)