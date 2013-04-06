include_directories(${GTEST_INCLUDE_DIRS})

set(test_targets
  hello_test
  )

foreach(target IN LISTS test_targets)
  add_executable("${target}" "${target}.cpp")
  target_link_libraries("${target}" ${GTEST_BOTH_LIBRARIES})
  get_target_property(executable "${target}" LOCATION)
  add_test("${target}" "${executable}")
endforeach(target)
