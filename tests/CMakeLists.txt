# CMakeList.txt for /tests folder

# Install vcpkg and install google test on using vcpgk
# Download google test for you and make it availiable
# You can download a specific version or HEAD
include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
)

# disable building of google mock
set(BUILD_GMOCK OFF CACHE BOOL "" FORCE)

IF (MSVC)
	# can allow google test to link dynamically
	set(gtest_force_shared_crt ON CACHE BOOL "" FORCE) 
ENDIF()

FetchContent_MakeAvailable(googletest)

# create the test exe from the cpp file
add_executable(${PROJ_NAME}_tests tests.cpp)

# required linking with googletest to use for our test
target_link_libraries(${PROJ_NAME}_tests gtest gtest_main)

# link our library (src) so we can test it
target_link_libraries(${PROJ_NAME}_tests ${PROJ_NAME}_lib)


