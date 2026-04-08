 *  Executing task: C/C++: g++ build active file 

Starting build...
/usr/bin/g++ -fdiagnostics-color=always -g /home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp -o /home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test
In file included from /home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:1:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::value_type& bmstu::map<K, V>::iterator::operator*() const [with K = int; V = std::__cxx11::basic_string<char>; bmstu::map<K, V>::value_type = std::pair<const int, std::__cxx11::basic_string<char> >]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:219:20:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:387:37: error: use of deleted function ‘std::pair<const int, std::__cxx11::basic_string<char> >& std::pair<const int, std::__cxx11::basic_string<char> >::operator=(const std::pair<const int, std::__cxx11::basic_string<char> >&)’
  387 |                         pair_cache_ = value_type(current_->key, current_->value);
      |                         ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /usr/include/c++/13/bits/stl_algobase.h:64,
                 from /usr/include/c++/13/string:51,
                 from /usr/include/c++/13/bits/locale_classes.h:40,
                 from /usr/include/c++/13/bits/ios_base.h:41,
                 from /usr/include/c++/13/ios:44,
                 from /usr/include/c++/13/ostream:40,
                 from /usr/include/c++/13/iostream:41,
                 from /home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:40:
/usr/include/c++/13/bits/stl_pair.h:187:12: note: ‘std::pair<const int, std::__cxx11::basic_string<char> >& std::pair<const int, std::__cxx11::basic_string<char> >::operator=(const std::pair<const int, std::__cxx11::basic_string<char> >&)’ is implicitly declared as deleted because ‘std::pair<const int, std::__cxx11::basic_string<char> >’ declares a move constructor or move assignment operator
  187 |     struct pair
      |            ^~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::value_type& bmstu::map<K, V>::iterator::operator*() const [with K = std::__cxx11::basic_string<char>; V = int; bmstu::map<K, V>::value_type = std::pair<const std::__cxx11::basic_string<char>, int>]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:249:34:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:387:37: error: use of deleted function ‘std::pair<const std::__cxx11::basic_string<char>, int>& std::pair<const std::__cxx11::basic_string<char>, int>::operator=(const std::pair<const std::__cxx11::basic_string<char>, int>&)’
  387 |                         pair_cache_ = value_type(current_->key, current_->value);
      |                         ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:187:12: note: ‘std::pair<const std::__cxx11::basic_string<char>, int>& std::pair<const std::__cxx11::basic_string<char>, int>::operator=(const std::pair<const std::__cxx11::basic_string<char>, int>&)’ is implicitly declared as deleted because ‘std::pair<const std::__cxx11::basic_string<char>, int>’ declares a move constructor or move assignment operator
  187 |     struct pair
      |            ^~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::value_type& bmstu::map<K, V>::iterator::operator*() const [with K = int; V = int; bmstu::map<K, V>::value_type = std::pair<const int, int>]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:272:34:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:387:37: error: use of deleted function ‘std::pair<const int, int>& std::pair<const int, int>::operator=(const std::pair<const int, int>&)’
  387 |                         pair_cache_ = value_type(current_->key, current_->value);
      |                         ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:187:12: note: ‘std::pair<const int, int>& std::pair<const int, int>::operator=(const std::pair<const int, int>&)’ is implicitly declared as deleted because ‘std::pair<const int, int>’ declares a move constructor or move assignment operator
  187 |     struct pair
      |            ^~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::value_type& bmstu::map<K, V>::iterator::operator*() const [with K = double; V = int; bmstu::map<K, V>::value_type = std::pair<const double, int>]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:306:34:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:387:37: error: use of deleted function ‘std::pair<const double, int>& std::pair<const double, int>::operator=(const std::pair<const double, int>&)’
  387 |                         pair_cache_ = value_type(current_->key, current_->value);
      |                         ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:187:12: note: ‘std::pair<const double, int>& std::pair<const double, int>::operator=(const std::pair<const double, int>&)’ is implicitly declared as deleted because ‘std::pair<const double, int>’ declares a move constructor or move assignment operator
  187 |     struct pair
      |            ^~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::value_type* bmstu::map<K, V>::iterator::operator->() const [with K = int; V = std::__cxx11::basic_string<char>; bmstu::map<K, V>::value_type = std::pair<const int, std::__cxx11::basic_string<char> >]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:327:3:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:393:37: error: use of deleted function ‘std::pair<const int, std::__cxx11::basic_string<char> >& std::pair<const int, std::__cxx11::basic_string<char> >::operator=(const std::pair<const int, std::__cxx11::basic_string<char> >&)’
  393 |                         pair_cache_ = value_type(current_->key, current_->value);
      |                         ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::value_type& bmstu::map<K, V>::iterator::operator*() const [with K = std::__cxx11::basic_string<char>; V = std::__cxx11::basic_string<char>; bmstu::map<K, V>::value_type = std::pair<const std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:343:41:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:387:37: error: use of deleted function ‘std::pair<const std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >& std::pair<const std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >::operator=(const std::pair<const std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >&)’
  387 |                         pair_cache_ = value_type(current_->key, current_->value);
      |                         ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:187:12: note: ‘std::pair<const std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >& std::pair<const std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >::operator=(const std::pair<const std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >&)’ is implicitly declared as deleted because ‘std::pair<const std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >’ declares a move constructor or move assignment operator
  187 |     struct pair
      |            ^~~~

Build finished with error(s).

 *  The terminal process terminated with exit code: -1. 
 *  Terminal will be reused by tasks, press any key to close it. 
