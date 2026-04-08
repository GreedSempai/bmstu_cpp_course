 *  Executing task: C/C++: g++ build active file 

Starting build...
/usr/bin/g++ -fdiagnostics-color=always -g /home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp -o /home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test
In file included from /home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:1:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:347:51: error: expected template-name before ‘<’ token
  347 |         struct iterator : public abstract_iterator<iterator,
      |                                                   ^
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:347:51: error: expected ‘{’ before ‘<’ token
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:347:51: error: expected unqualified-id before ‘<’ token
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp: In member function ‘virtual void MapTest_IteratorBasic_Test::TestBody()’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:217:33: error: invalid use of incomplete type ‘struct bmstu::map<int, std::__cxx11::basic_string<char> >::iterator’
  217 |         for (auto it = map.begin(); it != map.end(); ++it)
      |                        ~~~~~~~~~^~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:347:16: note: declaration of ‘struct bmstu::map<int, std::__cxx11::basic_string<char> >::iterator’
  347 |         struct iterator : public abstract_iterator<iterator,
      |                ^~~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:217:50: error: invalid use of incomplete type ‘struct bmstu::map<int, std::__cxx11::basic_string<char> >::iterator’
  217 |         for (auto it = map.begin(); it != map.end(); ++it)
      |                                           ~~~~~~~^~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:347:16: note: declaration of ‘struct bmstu::map<int, std::__cxx11::basic_string<char> >::iterator’
  347 |         struct iterator : public abstract_iterator<iterator,
      |                ^~~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp: In member function ‘virtual void MapTest_RangeBasedFor_Test::TestBody()’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:249:41: error: invalid use of incomplete type ‘struct bmstu::map<std::__cxx11::basic_string<char>, int>::iterator’
  249 |         for (const auto& [key, value] : map)
      |                                         ^~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:347:16: note: declaration of ‘struct bmstu::map<std::__cxx11::basic_string<char>, int>::iterator’
  347 |         struct iterator : public abstract_iterator<iterator,
      |                ^~~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:249:41: error: invalid use of incomplete type ‘struct bmstu::map<std::__cxx11::basic_string<char>, int>::iterator’
  249 |         for (const auto& [key, value] : map)
      |                                         ^~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:347:16: note: declaration of ‘struct bmstu::map<std::__cxx11::basic_string<char>, int>::iterator’
  347 |         struct iterator : public abstract_iterator<iterator,
      |                ^~~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp: In member function ‘virtual void MapTest_EmptyRangeIteration_Test::TestBody()’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:272:41: error: invalid use of incomplete type ‘struct bmstu::map<int, int>::iterator’
  272 |         for (const auto& [key, value] : map)
      |                                         ^~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:347:16: note: declaration of ‘struct bmstu::map<int, int>::iterator’
  347 |         struct iterator : public abstract_iterator<iterator,
      |                ^~~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:272:41: error: invalid use of incomplete type ‘struct bmstu::map<int, int>::iterator’
  272 |         for (const auto& [key, value] : map)
      |                                         ^~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:347:16: note: declaration of ‘struct bmstu::map<int, int>::iterator’
  347 |         struct iterator : public abstract_iterator<iterator,
      |                ^~~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp: In member function ‘virtual void MapTest_SingleElementIteration_Test::TestBody()’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:286:41: error: invalid use of incomplete type ‘struct bmstu::map<int, std::__cxx11::basic_string<char> >::iterator’
  286 |         for (const auto& [key, value] : map)
      |                                         ^~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:347:16: note: declaration of ‘struct bmstu::map<int, std::__cxx11::basic_string<char> >::iterator’
  347 |         struct iterator : public abstract_iterator<iterator,
      |                ^~~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:286:41: error: invalid use of incomplete type ‘struct bmstu::map<int, std::__cxx11::basic_string<char> >::iterator’
  286 |         for (const auto& [key, value] : map)
      |                                         ^~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:347:16: note: declaration of ‘struct bmstu::map<int, std::__cxx11::basic_string<char> >::iterator’
  347 |         struct iterator : public abstract_iterator<iterator,
      |                ^~~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp: In member function ‘virtual void MapTest_IteratorNumericKeys_Test::TestBody()’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:306:41: error: invalid use of incomplete type ‘struct bmstu::map<double, int>::iterator’
  306 |         for (const auto& [key, value] : map)
      |                                         ^~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:347:16: note: declaration of ‘struct bmstu::map<double, int>::iterator’
  347 |         struct iterator : public abstract_iterator<iterator,
      |                ^~~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:306:41: error: invalid use of incomplete type ‘struct bmstu::map<double, int>::iterator’
  306 |         for (const auto& [key, value] : map)
      |                                         ^~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:347:16: note: declaration of ‘struct bmstu::map<double, int>::iterator’
  347 |         struct iterator : public abstract_iterator<iterator,
      |                ^~~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp: In member function ‘virtual void MapTest_IteratorArrowOperator_Test::TestBody()’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:325:33: error: invalid use of incomplete type ‘struct bmstu::map<int, std::__cxx11::basic_string<char> >::iterator’
  325 |         for (auto it = map.begin(); it != map.end(); ++it)
      |                        ~~~~~~~~~^~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:347:16: note: declaration of ‘struct bmstu::map<int, std::__cxx11::basic_string<char> >::iterator’
  347 |         struct iterator : public abstract_iterator<iterator,
      |                ^~~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:325:50: error: invalid use of incomplete type ‘struct bmstu::map<int, std::__cxx11::basic_string<char> >::iterator’
  325 |         for (auto it = map.begin(); it != map.end(); ++it)
      |                                           ~~~~~~~^~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:347:16: note: declaration of ‘struct bmstu::map<int, std::__cxx11::basic_string<char> >::iterator’
  347 |         struct iterator : public abstract_iterator<iterator,
      |                ^~~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp: In member function ‘virtual void MapTest_RangeBasedForDemo_Test::TestBody()’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:343:48: error: invalid use of incomplete type ‘struct bmstu::map<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >::iterator’
  343 |         for (const auto& [product, category] : catalog)
      |                                                ^~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:347:16: note: declaration of ‘struct bmstu::map<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >::iterator’
  347 |         struct iterator : public abstract_iterator<iterator,
      |                ^~~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:343:48: error: invalid use of incomplete type ‘struct bmstu::map<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >::iterator’
  343 |         for (const auto& [product, category] : catalog)
      |                                                ^~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:347:16: note: declaration of ‘struct bmstu::map<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >::iterator’
  347 |         struct iterator : public abstract_iterator<iterator,
      |                ^~~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::iterator bmstu::map<K, V>::begin() [with K = int; V = std::__cxx11::basic_string<char>]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:217:26:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:553:18: error: return type ‘struct bmstu::map<int, std::__cxx11::basic_string<char> >::iterator’ is incomplete
  553 |         iterator begin() { return iterator(tree_.get_root(), false); }
      |                  ^~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:553:35: error: invalid use of incomplete type ‘struct bmstu::map<int, std::__cxx11::basic_string<char> >::iterator’
  553 |         iterator begin() { return iterator(tree_.get_root(), false); }
      |                                   ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:347:16: note: declaration of ‘struct bmstu::map<int, std::__cxx11::basic_string<char> >::iterator’
  347 |         struct iterator : public abstract_iterator<iterator,
      |                ^~~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::iterator bmstu::map<K, V>::end() [with K = int; V = std::__cxx11::basic_string<char>]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:217:43:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:555:18: error: return type ‘struct bmstu::map<int, std::__cxx11::basic_string<char> >::iterator’ is incomplete
  555 |         iterator end() { return iterator(tree_.get_root(), true); }
      |                  ^~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:555:33: error: invalid use of incomplete type ‘struct bmstu::map<int, std::__cxx11::basic_string<char> >::iterator’
  555 |         iterator end() { return iterator(tree_.get_root(), true); }
      |                                 ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:347:16: note: declaration of ‘struct bmstu::map<int, std::__cxx11::basic_string<char> >::iterator’
  347 |         struct iterator : public abstract_iterator<iterator,
      |                ^~~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::iterator bmstu::map<K, V>::begin() [with K = std::__cxx11::basic_string<char>; V = int]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:249:34:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:553:18: error: return type ‘struct bmstu::map<std::__cxx11::basic_string<char>, int>::iterator’ is incomplete
  553 |         iterator begin() { return iterator(tree_.get_root(), false); }
      |                  ^~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:553:35: error: invalid use of incomplete type ‘struct bmstu::map<std::__cxx11::basic_string<char>, int>::iterator’
  553 |         iterator begin() { return iterator(tree_.get_root(), false); }
      |                                   ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:347:16: note: declaration of ‘struct bmstu::map<std::__cxx11::basic_string<char>, int>::iterator’
  347 |         struct iterator : public abstract_iterator<iterator,
      |                ^~~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::iterator bmstu::map<K, V>::end() [with K = std::__cxx11::basic_string<char>; V = int]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:249:34:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:555:18: error: return type ‘struct bmstu::map<std::__cxx11::basic_string<char>, int>::iterator’ is incomplete
  555 |         iterator end() { return iterator(tree_.get_root(), true); }
      |                  ^~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:555:33: error: invalid use of incomplete type ‘struct bmstu::map<std::__cxx11::basic_string<char>, int>::iterator’
  555 |         iterator end() { return iterator(tree_.get_root(), true); }
      |                                 ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:347:16: note: declaration of ‘struct bmstu::map<std::__cxx11::basic_string<char>, int>::iterator’
  347 |         struct iterator : public abstract_iterator<iterator,
      |                ^~~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::iterator bmstu::map<K, V>::begin() [with K = int; V = int]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:272:34:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:553:18: error: return type ‘struct bmstu::map<int, int>::iterator’ is incomplete
  553 |         iterator begin() { return iterator(tree_.get_root(), false); }
      |                  ^~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:553:35: error: invalid use of incomplete type ‘struct bmstu::map<int, int>::iterator’
  553 |         iterator begin() { return iterator(tree_.get_root(), false); }
      |                                   ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:347:16: note: declaration of ‘struct bmstu::map<int, int>::iterator’
  347 |         struct iterator : public abstract_iterator<iterator,
      |                ^~~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::iterator bmstu::map<K, V>::end() [with K = int; V = int]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:272:34:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:555:18: error: return type ‘struct bmstu::map<int, int>::iterator’ is incomplete
  555 |         iterator end() { return iterator(tree_.get_root(), true); }
      |                  ^~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:555:33: error: invalid use of incomplete type ‘struct bmstu::map<int, int>::iterator’
  555 |         iterator end() { return iterator(tree_.get_root(), true); }
      |                                 ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:347:16: note: declaration of ‘struct bmstu::map<int, int>::iterator’
  347 |         struct iterator : public abstract_iterator<iterator,
      |                ^~~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::iterator bmstu::map<K, V>::begin() [with K = double; V = int]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:306:34:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:553:18: error: return type ‘struct bmstu::map<double, int>::iterator’ is incomplete
  553 |         iterator begin() { return iterator(tree_.get_root(), false); }
      |                  ^~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:553:35: error: invalid use of incomplete type ‘struct bmstu::map<double, int>::iterator’
  553 |         iterator begin() { return iterator(tree_.get_root(), false); }
      |                                   ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:347:16: note: declaration of ‘struct bmstu::map<double, int>::iterator’
  347 |         struct iterator : public abstract_iterator<iterator,
      |                ^~~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::iterator bmstu::map<K, V>::end() [with K = double; V = int]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:306:34:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:555:18: error: return type ‘struct bmstu::map<double, int>::iterator’ is incomplete
  555 |         iterator end() { return iterator(tree_.get_root(), true); }
      |                  ^~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:555:33: error: invalid use of incomplete type ‘struct bmstu::map<double, int>::iterator’
  555 |         iterator end() { return iterator(tree_.get_root(), true); }
      |                                 ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:347:16: note: declaration of ‘struct bmstu::map<double, int>::iterator’
  347 |         struct iterator : public abstract_iterator<iterator,
      |                ^~~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::iterator bmstu::map<K, V>::begin() [with K = std::__cxx11::basic_string<char>; V = std::__cxx11::basic_string<char>]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:343:41:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:553:18: error: return type ‘struct bmstu::map<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >::iterator’ is incomplete
  553 |         iterator begin() { return iterator(tree_.get_root(), false); }
      |                  ^~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:553:35: error: invalid use of incomplete type ‘struct bmstu::map<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >::iterator’
  553 |         iterator begin() { return iterator(tree_.get_root(), false); }
      |                                   ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:347:16: note: declaration of ‘struct bmstu::map<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >::iterator’
  347 |         struct iterator : public abstract_iterator<iterator,
      |                ^~~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::iterator bmstu::map<K, V>::end() [with K = std::__cxx11::basic_string<char>; V = std::__cxx11::basic_string<char>]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:343:41:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:555:18: error: return type ‘struct bmstu::map<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >::iterator’ is incomplete
  555 |         iterator end() { return iterator(tree_.get_root(), true); }
      |                  ^~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:555:33: error: invalid use of incomplete type ‘struct bmstu::map<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >::iterator’
  555 |         iterator end() { return iterator(tree_.get_root(), true); }
      |                                 ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:347:16: note: declaration of ‘struct bmstu::map<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >::iterator’
  347 |         struct iterator : public abstract_iterator<iterator,
      |                ^~~~~~~~

Build finished with error(s).

 *  The terminal process terminated with exit code: -1. 
 *  Terminal will be reused by tasks, press any key to close it. 
