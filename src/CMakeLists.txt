add_executable(hello hello.cpp)
add_executable(sum sum.cpp)
add_executable(lambda lambda)
add_executable(rvalue rvalue)
add_executable(thread thread)
target_link_libraries(thread ${CMAKE_THREAD_LIBS_INIT})
add_executable(future future)
target_link_libraries(future ${CMAKE_THREAD_LIBS_INIT})

