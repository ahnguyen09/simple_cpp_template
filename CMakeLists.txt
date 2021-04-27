# MAIN/top level CMakeLists

# mainly derived from
# https://gitlab.com/CLIUtils/modern-cmake/-/tree/master/examples/extended-project
# https://github.com/Quick-Turn-Studio/run-test-in-compile-time

# using a high version for modern cmake
cmake_minimum_required (VERSION 3.14)

# set up project so that you only need to change the project name here
set(PROJ_NAME LeetCode_Set2)

project (${PROJ_NAME}
		 LANGUAGES CXX)

# enable use to use up to C++17 feathers
set(CMAKE_CXX_STANDARD 17)

# Let's cmake nicely support folders in IDEs
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# this is where the main function will be
add_subdirectory(app)

# this is where we build the library for both for CPP app and tests
add_subdirectory(src)

# this is where google test is linked and used to do unit testing
add_subdirectory(tests)