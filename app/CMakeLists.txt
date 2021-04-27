# CMakeList for the app folder

# Add source to this project's executable.
add_executable (${PROJ_NAME}_app app.cpp)

# link our library(in src) so our app exe can use it
target_link_libraries(${PROJ_NAME}_app ${PROJ_NAME}_lib)
