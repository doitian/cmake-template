add_executable(hello hello.cpp)
add_executable(sum sum.cpp)
add_executable(lambda lambda)
add_executable(rvalue rvalue)
add_executable(thread thread)
target_link_libraries(thread ${CMAKE_THREAD_LIBS_INIT})

