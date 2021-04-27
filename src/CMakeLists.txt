# CMakeList for the src folder, for library to be used for app and tests

add_library(${PROJ_NAME}_lib STATIC "project_lib.cpp" "project_lib.h")

# target_include_directories(${(PROJ_NAME}_lib INTERFACE .)

# We need this directory, and users of our library will need it too
target_include_directories(${PROJ_NAME}_lib PUBLIC ../src)

# All users of this library will need at least C++17
target_compile_features(${PROJ_NAME}_lib PUBLIC cxx_std_17)
