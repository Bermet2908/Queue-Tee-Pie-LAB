cmake_minimum_required(VERSION 3.24)

project(queue_tee_pie)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.8.1
)

FetchContent_MakeAvailable(Catch2)

add_executable(puppy_test tests/puppy_test.cpp src/QueueTees.cpp)
add_executable(kitty_test tests/kitty_test.cpp src/QueueTees.cpp)
add_executable(PygmyMarmoset_test tests/PygmyMarmoset_test.cpp src/QueueTees.cpp)
add_executable(QueueTees_test tests/QueueTees_test.cpp src/QueueTees.cpp)
add_executable(main main.cpp src/QueueTees.cpp)

target_link_libraries(puppy_test PRIVATE Catch2::Catch2WithMain)
target_link_libraries(kitty_test PRIVATE Catch2::Catch2WithMain)
target_link_libraries(PygmyMarmoset_test PRIVATE Catch2::Catch2WithMain)
target_link_libraries(QueueTees_test PRIVATE Catch2::Catch2WithMain)

