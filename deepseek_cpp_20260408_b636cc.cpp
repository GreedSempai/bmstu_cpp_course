 *  Executing task: C/C++: g++ build active file 

Starting build...
/usr/bin/g++ -fdiagnostics-color=always -g /home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp -o /home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test
In file included from /usr/include/gtest/gtest-printers.h:122,
                 from /usr/include/gtest/gtest-matchers.h:49,
                 from /usr/include/gtest/internal/gtest-death-test-internal.h:47,
                 from /usr/include/gtest/gtest-death-test.h:43,
                 from /usr/include/gtest/gtest.h:65,
                 from /home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:3:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp: In member function ‘virtual void MapTest_IteratorArrowOperator_Test::TestBody()’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:327:31: error: base operand of ‘->’ has non-pointer type ‘bmstu::map<int, std::__cxx11::basic_string<char> >::iterator’
  327 |                 EXPECT_TRUE(it->first == 1 || it->first == 2);
      |                               ^~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:327:49: error: base operand of ‘->’ has non-pointer type ‘bmstu::map<int, std::__cxx11::basic_string<char> >::iterator’
  327 |                 EXPECT_TRUE(it->first == 1 || it->first == 2);
      |                                                 ^~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:328:32: error: base operand of ‘->’ has non-pointer type ‘bmstu::map<int, std::__cxx11::basic_string<char> >::iterator’
  328 |                 EXPECT_FALSE(it->second.empty());
      |                                ^~

Build finished with error(s).

 *  The terminal process terminated with exit code: -1. 
 *  Terminal will be reused by tasks, press any key to close it. 
