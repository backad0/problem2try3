add_test([=[RingBuffer.RBTest]=]  [==[C:/Users/alesh/CLionProjects/c++ programing university/problem2try3/cmake-build-debug/main.exe]==] [==[--gtest_filter=RingBuffer.RBTest]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[RingBuffer.RBTest]=]  PROPERTIES WORKING_DIRECTORY [==[C:/Users/alesh/CLionProjects/c++ programing university/problem2try3/cmake-build-debug]==] SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[RingBuffer.iteratorTest]=]  [==[C:/Users/alesh/CLionProjects/c++ programing university/problem2try3/cmake-build-debug/main.exe]==] [==[--gtest_filter=RingBuffer.iteratorTest]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[RingBuffer.iteratorTest]=]  PROPERTIES WORKING_DIRECTORY [==[C:/Users/alesh/CLionProjects/c++ programing university/problem2try3/cmake-build-debug]==] SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[RingBuffer.iteratorTest1]=]  [==[C:/Users/alesh/CLionProjects/c++ programing university/problem2try3/cmake-build-debug/main.exe]==] [==[--gtest_filter=RingBuffer.iteratorTest1]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[RingBuffer.iteratorTest1]=]  PROPERTIES WORKING_DIRECTORY [==[C:/Users/alesh/CLionProjects/c++ programing university/problem2try3/cmake-build-debug]==] SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  main_TESTS RingBuffer.RBTest RingBuffer.iteratorTest RingBuffer.iteratorTest1)
