add_library(PidController OBJECT PidController.cpp)
add_executable(shell-app main.cpp PidController)
include_directories(
    ${CMAKE_SOURCE_DIR}/include
)
