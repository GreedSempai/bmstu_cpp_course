ssignable<_Tp>, std::is_move_assignable<_T2> >::value, std::pair<_T1, _T2>&&, std::__nonesuch&&>) [with _T1 = const int; _T2 = int; std::__conditional_t<std::__and_<std::is_move_assignable<_Tp>, std::is_move_assignable<_T2> >::value, std::pair<_T1, _T2>&&, std::__nonesuch&&> = std::__nonesuch&&]’
  737 |       operator=(__conditional_t<__and_<is_move_assignable<_T1>,
      |       ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:739:55: note:   no known conversion for argument 1 from ‘<brace-enclosed initializer list>’ to ‘std::__conditional_t<false, std::pair<const int, int>&&, std::__nonesuch&&>’ {aka ‘std::__nonesuch&&’}
  737 |       operator=(__conditional_t<__and_<is_move_assignable<_T1>,
      |                 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  738 |                                        is_move_assignable<_T2>>::value,
      |                                        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  739 |                                 pair&&, __nonesuch&&> __p)
      |                                 ~~~~~~~~~~~~~~~~~~~~~~^~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::iterator& bmstu::map<K, V>::iterator::operator++() [with K = double; V = int]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:306:34:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:404:45: error: use of deleted function ‘std::pair<const double, int>& std::pair<const double, int>::operator=(const std::pair<const double, int>&)’
  404 |                                 pair_cache_ = {current_->key, current_->value};
      |                                 ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:187:12: note: ‘std::pair<const double, int>& std::pair<const double, int>::operator=(const std::pair<const double, int>&)’ is implicitly declared as deleted because ‘std::pair<const double, int>’ declares a move constructor or move assignment operator
  187 |     struct pair
      |            ^~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::value_type& bmstu::map<K, V>::iterator::operator*() const [with K = double; V = int; bmstu::map<K, V>::value_type = std::pair<const double, int>]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:306:34:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:388:37: error: no match for ‘operator=’ (operand types are ‘bmstu::map<double, int>::value_type’ {aka ‘std::pair<const double, int>’} and ‘<brace-enclosed initializer list>’)
  388 |                         pair_cache_ = {current_->key, current->value};
      |                         ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:752:9: note: candidate: ‘template<class _U1, class _U2> typename std::enable_if<std::__and_<std::is_assignable<_T1&, const _U1&>, std::is_assignable<_T2&, const _U2&> >::value, std::pair<_T1, _T2>&>::type std::pair<_T1, _T2>::operator=(const std::pair<_U1, _U2>&) [with _U2 = _U1; _T1 = const double; _T2 = int]’
  752 |         operator=(const pair<_U1, _U2>& __p)
      |         ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:752:9: note:   template argument deduction/substitution failed:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:388:37: note:   couldn’t deduce template parameter ‘_U1’
  388 |                         pair_cache_ = {current_->key, current->value};
      |                         ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:763:9: note: candidate: ‘template<class _U1, class _U2> typename std::enable_if<std::__and_<std::is_assignable<_T1&, _U1&&>, std::is_assignable<_T2&, _U2&&> >::value, std::pair<_T1, _T2>&>::type std::pair<_T1, _T2>::operator=(std::pair<_U1, _U2>&&) [with _U2 = _U1; _T1 = const double; _T2 = int]’
  763 |         operator=(pair<_U1, _U2>&& __p)
      |         ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:763:9: note:   template argument deduction/substitution failed:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:388:37: note:   couldn’t deduce template parameter ‘_U1’
  388 |                         pair_cache_ = {current_->key, current->value};
      |                         ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:727:7: note: candidate: ‘std::pair<_T1, _T2>& std::pair<_T1, _T2>::operator=(std::__conditional_t<std::__and_<std::is_copy_assignable<_T1>, std::is_copy_assignable<_T2> >::value, const std::pair<_T1, _T2>&, const std::__nonesuch&>) [with _T1 = const double; _T2 = int; std::__conditional_t<std::__and_<std::is_copy_assignable<_T1>, std::is_copy_assignable<_T2> >::value, const std::pair<_T1, _T2>&, const std::__nonesuch&> = const std::__nonesuch&]’
  727 |       operator=(__conditional_t<__and_<is_copy_assignable<_T1>,
      |       ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:729:65: note:   no known conversion for argument 1 from ‘<brace-enclosed initializer list>’ to ‘std::__conditional_t<false, const std::pair<const double, int>&, const std::__nonesuch&>’ {aka ‘const std::__nonesuch&’}
  727 |       operator=(__conditional_t<__and_<is_copy_assignable<_T1>,
      |                 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  
  728 |                                        is_copy_assignable<_T2>>::value,
      |                                        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  729 |                                 const pair&, const __nonesuch&> __p)
      |                                 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^~~
/usr/include/c++/13/bits/stl_pair.h:737:7: note: candidate: ‘std::pair<_T1, _T2>& std::pair<_T1, _T2>::operator=(std::__conditional_t<std::__and_<std::is_move_assignable<_Tp>, std::is_move_assignable<_T2> >::value, std::pair<_T1, _T2>&&, std::__nonesuch&&>) [with _T1 = const double; _T2 = int; std::__conditional_t<std::__and_<std::is_move_assignable<_Tp>, std::is_move_assignable<_T2> >::value, std::pair<_T1, _T2>&&, std::__nonesuch&&> = std::__nonesuch&&]’
  737 |       operator=(__conditional_t<__and_<is_move_assignable<_T1>,
      |       ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:739:55: note:   no known conversion for argument 1 from ‘<brace-enclosed initializer list>’ to ‘std::__conditional_t<false, std::pair<const double, int>&&, std::__nonesuch&&>’ {aka ‘std::__nonesuch&&’}
  737 |       operator=(__conditional_t<__and_<is_move_assignable<_T1>,
      |                 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  738 |                                        is_move_assignable<_T2>>::value,
      |                                        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  739 |                                 pair&&, __nonesuch&&> __p)
      |                                 ~~~~~~~~~~~~~~~~~~~~~~^~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::value_type* bmstu::map<K, V>::iterator::operator->() const [with K = int; V = std::__cxx11::basic_string<char>; bmstu::map<K, V>::value_type = std::pair<const int, std::__cxx11::basic_string<char> >]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:327:3:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:394:37: error: no match for ‘operator=’ (operand types are ‘bmstu::map<int, std::__cxx11::basic_string<char> >::value_type’ {aka ‘std::pair<const int, std::__cxx11::basic_string<char> >’} and ‘<brace-enclosed initializer list>’)
  394 |                         pair_cache_ = {current_->key, current->value};
      |                         ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:752:9: note: candidate: ‘template<class _U1, class _U2> typename std::enable_if<std::__and_<std::is_assignable<_T1&, const _U1&>, std::is_assignable<_T2&, const _U2&> >::value, std::pair<_T1, _T2>&>::type std::pair<_T1, _T2>::operator=(const std::pair<_U1, _U2>&) [with _U2 = _U1; _T1 = const int; _T2 = std::__cxx11::basic_string<char>]’
  752 |         operator=(const pair<_U1, _U2>& __p)
      |         ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:752:9: note:   template argument deduction/substitution failed:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:394:37: note:   couldn’t deduce template parameter ‘_U1’
  394 |                         pair_cache_ = {current_->key, current->value};
      |                         ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:763:9: note: candidate: ‘template<class _U1, class _U2> typename std::enable_if<std::__and_<std::is_assignable<_T1&, _U1&&>, std::is_assignable<_T2&, _U2&&> >::value, std::pair<_T1, _T2>&>::type std::pair<_T1, _T2>::operator=(std::pair<_U1, _U2>&&) [with _U2 = _U1; _T1 = const int; _T2 = std::__cxx11::basic_string<char>]’
  763 |         operator=(pair<_U1, _U2>&& __p)
      |         ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:763:9: note:   template argument deduction/substitution failed:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:394:37: note:   couldn’t deduce template parameter ‘_U1’
  394 |                         pair_cache_ = {current_->key, current->value};
      |                         ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:727:7: note: candidate: ‘std::pair<_T1, _T2>& std::pair<_T1, _T2>::operator=(std::__conditional_t<std::__and_<std::is_copy_assignable<_T1>, std::is_copy_assignable<_T2> >::value, const std::pair<_T1, _T2>&, const std::__nonesuch&>) [with _T1 = const int; _T2 = std::__cxx11::basic_string<char>; std::__conditional_t<std::__and_<std::is_copy_assignable<_T1>, std::is_copy_assignable<_T2> >::value, const std::pair<_T1, _T2>&, const std::__nonesuch&> = const std::__nonesuch&]’
  727 |       operator=(__conditional_t<__and_<is_copy_assignable<_T1>,
      |       ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:729:65: note:   no known conversion for argument 1 from ‘<brace-enclosed initializer list>’ to ‘std::__conditional_t<false, const std::pair<const int, std::__cxx11::basic_string<char> >&, const std::__nonesuch&>’ {aka ‘const std::__nonesuch&’}
  727 |       operator=(__conditional_t<__and_<is_copy_assignable<_T1>,
      |                 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  
  728 |                                        is_copy_assignable<_T2>>::value,
      |                                        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  729 |                                 const pair&, const __nonesuch&> __p)
      |                                 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^~~
/usr/include/c++/13/bits/stl_pair.h:737:7: note: candidate: ‘std::pair<_T1, _T2>& std::pair<_T1, _T2>::operator=(std::__conditional_t<std::__and_<std::is_move_assignable<_Tp>, std::is_move_assignable<_T2> >::value, std::pair<_T1, _T2>&&, std::__nonesuch&&>) [with _T1 = const int; _T2 = std::__cxx11::basic_string<char>; std::__conditional_t<std::__and_<std::is_move_assignable<_Tp>, std::is_move_assignable<_T2> >::value, std::pair<_T1, _T2>&&, std::__nonesuch&&> = std::__nonesuch&&]’
  737 |       operator=(__conditional_t<__and_<is_move_assignable<_T1>,
      |       ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:739:55: note:   no known conversion for argument 1 from ‘<brace-enclosed initializer list>’ to ‘std::__conditional_t<false, std::pair<const int, std::__cxx11::basic_string<char> >&&, std::__nonesuch&&>’ {aka ‘std::__nonesuch&&’}
  737 |       operator=(__conditional_t<__and_<is_move_assignable<_T1>,
      |                 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  738 |                                        is_move_assignable<_T2>>::value,
      |                                        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  739 |                                 pair&&, __nonesuch&&> __p)
      |                                 ~~~~~~~~~~~~~~~~~~~~~~^~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::iterator& bmstu::map<K, V>::iterator::operator++() [with K = std::__cxx11::basic_string<char>; V = std::__cxx11::basic_string<char>]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:343:41:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:404:45: error: use of deleted function ‘std::pair<const std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >& std::pair<const std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >::operator=(const std::pair<const std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >&)’
  404 |                                 pair_cache_ = {current_->key, current_->value};
      |                                 ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:187:12: note: ‘std::pair<const std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >& std::pair<const std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >::operator=(const std::pair<const std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >&)’ is implicitly declared as deleted because ‘std::pair<const std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >’ declares a move constructor or move assignment operator
  187 |     struct pair
      |            ^~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::value_type& bmstu::map<K, V>::iterator::operator*() const [with K = std::__cxx11::basic_string<char>; V = std::__cxx11::basic_string<char>; bmstu::map<K, V>::value_type = std::pair<const std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:343:41:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:388:37: error: no match for ‘operator=’ (operand types are ‘bmstu::map<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >::value_type’ {aka ‘std::pair<const std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >’} and ‘<brace-enclosed initializer list>’)
  388 |                         pair_cache_ = {current_->key, current->value};
      |                         ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:752:9: note: candidate: ‘template<class _U1, class _U2> typename std::enable_if<std::__and_<std::is_assignable<_T1&, const _U1&>, std::is_assignable<_T2&, const _U2&> >::value, std::pair<_T1, _T2>&>::type std::pair<_T1, _T2>::operator=(const std::pair<_U1, _U2>&) [with _U2 = _U1; _T1 = const std::__cxx11::basic_string<char>; _T2 = std::__cxx11::basic_string<char>]’
  752 |         operator=(const pair<_U1, _U2>& __p)
      |         ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:752:9: note:   template argument deduction/substitution failed:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:388:37: note:   couldn’t deduce template parameter ‘_U1’
  388 |                         pair_cache_ = {current_->key, current->value};
      |                         ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:763:9: note: candidate: ‘template<class _U1, class _U2> typename std::enable_if<std::__and_<std::is_assignable<_T1&, _U1&&>, std::is_assignable<_T2&, _U2&&> >::value, std::pair<_T1, _T2>&>::type std::pair<_T1, _T2>::operator=(std::pair<_U1, _U2>&&) [with _U2 = _U1; _T1 = const std::__cxx11::basic_string<char>; _T2 = std::__cxx11::basic_string<char>]’
  763 |         operator=(pair<_U1, _U2>&& __p)
      |         ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:763:9: note:   template argument deduction/substitution failed:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:388:37: note:   couldn’t deduce template parameter ‘_U1’
  388 |                         pair_cache_ = {current_->key, current->value};
      |                         ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:727:7: note: candidate: ‘std::pair<_T1, _T2>& std::pair<_T1, _T2>::operator=(std::__conditional_t<std::__and_<std::is_copy_assignable<_T1>, std::is_copy_assignable<_T2> >::value, const std::pair<_T1, _T2>&, const std::__nonesuch&>) [with _T1 = const std::__cxx11::basic_string<char>; _T2 = std::__cxx11::basic_string<char>; std::__conditional_t<std::__and_<std::is_copy_assignable<_T1>, std::is_copy_assignable<_T2> >::value, const std::pair<_T1, _T2>&, const std::__nonesuch&> = const std::__nonesuch&]’
  727 |       operator=(__conditional_t<__and_<is_copy_assignable<_T1>,
      |       ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:729:65: note:   no known conversion for argument 1 from ‘<brace-enclosed initializer list>’ to ‘std::__conditional_t<false, const std::pair<const std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >&, const std::__nonesuch&>’ {aka ‘const std::__nonesuch&’}
  727 |       operator=(__conditional_t<__and_<is_copy_assignable<_T1>,
      |                 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  
  728 |                                        is_copy_assignable<_T2>>::value,
      |                                        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  729 |                                 const pair&, const __nonesuch&> __p)
      |                                 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^~~
/usr/include/c++/13/bits/stl_pair.h:737:7: note: candidate: ‘std::pair<_T1, _T2>& std::pair<_T1, _T2>::operator=(std::__conditional_t<std::__and_<std::is_move_assignable<_Tp>, std::is_move_assignable<_T2> >::value, std::pair<_T1, _T2>&&, std::__nonesuch&&>) [with _T1 = const std::__cxx11::basic_string<char>; _T2 = std::__cxx11::basic_string<char>; std::__conditional_t<std::__and_<std::is_move_assignable<_Tp>, std::is_move_assignable<_T2> >::value, std::pair<_T1, _T2>&&, std::__nonesuch&&> = std::__nonesuch&&]’
  737 |       operator=(__conditional_t<__and_<is_move_assignable<_T1>,
      |       ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:739:55: note:   no known conversion for argument 1 from ‘<brace-enclosed initializer list>’ to ‘std::__conditional_t<false, std::pair<const std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >&&, std::__nonesuch&&>’ {aka ‘std::__nonesuch&&’}
  737 |       operator=(__conditional_t<__and_<is_move_assignable<_T1>,
      |                 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  738 |                                        is_move_assignable<_T2>>::value,
      |                                        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  739 |                                 pair&&, __nonesuch&&> __p)
      |                                 ~~~~~~~~~~~~~~~~~~~~~~^~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::iterator::iterator(bmstu::tree_node<K, V>*, bool) [with K = int; V = std::__cxx11::basic_string<char>]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:509:28:   required from ‘bmstu::map<K, V>::iterator bmstu::map<K, V>::begin() [with K = int; V = std::__cxx11::basic_string<char>]’
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:217:26:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:375:45: error: use of deleted function ‘std::pair<const int, std::__cxx11::basic_string<char> >& std::pair<const int, std::__cxx11::basic_string<char> >::operator=(const std::pair<const int, std::__cxx11::basic_string<char> >&)’
  375 |                                 pair_cache_ = {current_->key, current_->value};
      |                                 ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::iterator::iterator(bmstu::tree_node<K, V>*, bool) [with K = std::__cxx11::basic_string<char>; V = int]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:509:28:   required from ‘bmstu::map<K, V>::iterator bmstu::map<K, V>::begin() [with K = std::__cxx11::basic_string<char>; V = int]’
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:249:34:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:375:45: error: use of deleted function ‘std::pair<const std::__cxx11::basic_string<char>, int>& std::pair<const std::__cxx11::basic_string<char>, int>::operator=(const std::pair<const std::__cxx11::basic_string<char>, int>&)’
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::iterator::iterator(bmstu::tree_node<K, V>*, bool) [with K = int; V = int]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:509:28:   required from ‘bmstu::map<K, V>::iterator bmstu::map<K, V>::begin() [with K = int; V = int]’
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:272:34:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:375:45: error: use of deleted function ‘std::pair<const int, int>& std::pair<const int, int>::operator=(const std::pair<const int, int>&)’
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::iterator::iterator(bmstu::tree_node<K, V>*, bool) [with K = double; V = int]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:509:28:   required from ‘bmstu::map<K, V>::iterator bmstu::map<K, V>::begin() [with K = double; V = int]’
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:306:34:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:375:45: error: use of deleted function ‘std::pair<const double, int>& std::pair<const double, int>::operator=(const std::pair<const double, int>&)’
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::iterator::iterator(bmstu::tree_node<K, V>*, bool) [with K = std::__cxx11::basic_string<char>; V = std::__cxx11::basic_string<char>]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:509:28:   required from ‘bmstu::map<K, V>::iterator bmstu::map<K, V>::begin() [with K = std::__cxx11::basic_string<char>; V = std::__cxx11::basic_string<char>]’
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:343:41:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:375:45: error: use of deleted function ‘std::pair<const std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >& std::pair<const std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >::operator=(const std::pair<const std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >&)’

Build finished with error(s).

 *  The terminal process terminated with exit code: -1. 
 *  Terminal will be reused by tasks, press any key to close it. 

 *  Executing task: C/C++: g++ build active file 

Starting build...
/usr/bin/g++ -fdiagnostics-color=always -g /home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp -o /home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test
In file included from /home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:1:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In member function ‘bmstu::map<K, V>::value_type& bmstu::map<K, V>::iterator::operator*() const’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:388:55: error: ‘current’ was not declared in this scope; did you mean ‘current_’?
  388 |                         pair_cache_ = {current_->key, current ->value};
      |                                                       ^~~~~~~
      |                                                       current_
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In member function ‘bmstu::map<K, V>::value_type* bmstu::map<K, V>::iterator::operator->() const’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:394:55: error: ‘current’ was not declared in this scope; did you mean ‘current_’?
  394 |                         pair_cache_ = {current_->key, current ->value};
      |                                                       ^~~~~~~
      |                                                       current_
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::iterator& bmstu::map<K, V>::iterator::operator++() [with K = int; V = std::__cxx11::basic_string<char>]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:217:49:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:404:45: error: use of deleted function ‘std::pair<const int, std::__cxx11::basic_string<char> >& std::pair<const int, std::__cxx11::basic_string<char> >::operator=(const std::pair<const int, std::__cxx11::basic_string<char> >&)’
  404 |                                 pair_cache_ = {current_->key, current_->value};
      |                                 ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
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
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::value_type& bmstu::map<K, V>::iterator::operator*() const [with K = int; V = std::__cxx11::basic_string<char>; bmstu::map<K, V>::value_type = std::pair<const int, std::__cxx11::basic_string<char> >]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:219:20:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:388:37: error: no match for ‘operator=’ (operand types are ‘bmstu::map<int, std::__cxx11::basic_string<char> >::value_type’ {aka ‘std::pair<const int, std::__cxx11::basic_string<char> >’} and ‘<brace-enclosed initializer list>’)
  388 |                         pair_cache_ = {current_->key, current ->value};
      |                         ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:752:9: note: candidate: ‘template<class _U1, class _U2> typename std::enable_if<std::__and_<std::is_assignable<_T1&, const _U1&>, std::is_assignable<_T2&, const _U2&> >::value, std::pair<_T1, _T2>&>::type std::pair<_T1, _T2>::operator=(const std::pair<_U1, _U2>&) [with _U2 = _U1; _T1 = const int; _T2 = std::__cxx11::basic_string<char>]’
  752 |         operator=(const pair<_U1, _U2>& __p)
      |         ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:752:9: note:   template argument deduction/substitution failed:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:388:37: note:   couldn’t deduce template parameter ‘_U1’
  388 |                         pair_cache_ = {current_->key, current ->value};
      |                         ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:763:9: note: candidate: ‘template<class _U1, class _U2> typename std::enable_if<std::__and_<std::is_assignable<_T1&, _U1&&>, std::is_assignable<_T2&, _U2&&> >::value, std::pair<_T1, _T2>&>::type std::pair<_T1, _T2>::operator=(std::pair<_U1, _U2>&&) [with _U2 = _U1; _T1 = const int; _T2 = std::__cxx11::basic_string<char>]’
  763 |         operator=(pair<_U1, _U2>&& __p)
      |         ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:763:9: note:   template argument deduction/substitution failed:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:388:37: note:   couldn’t deduce template parameter ‘_U1’
  388 |                         pair_cache_ = {current_->key, current ->value};
      |                         ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:727:7: note: candidate: ‘std::pair<_T1, _T2>& std::pair<_T1, _T2>::operator=(std::__conditional_t<std::__and_<std::is_copy_assignable<_T1>, std::is_copy_assignable<_T2> >::value, const std::pair<_T1, _T2>&, const std::__nonesuch&>) [with _T1 = const int; _T2 = std::__cxx11::basic_string<char>; std::__conditional_t<std::__and_<std::is_copy_assignable<_T1>, std::is_copy_assignable<_T2> >::value, const std::pair<_T1, _T2>&, const std::__nonesuch&> = const std::__nonesuch&]’
  727 |       operator=(__conditional_t<__and_<is_copy_assignable<_T1>,
      |       ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:729:65: note:   no known conversion for argument 1 from ‘<brace-enclosed initializer list>’ to ‘std::__conditional_t<false, const std::pair<const int, std::__cxx11::basic_string<char> >&, const std::__nonesuch&>’ {aka ‘const std::__nonesuch&’}
  727 |       operator=(__conditional_t<__and_<is_copy_assignable<_T1>,
      |                 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  
  728 |                                        is_copy_assignable<_T2>>::value,
      |                                        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  729 |                                 const pair&, const __nonesuch&> __p)
      |                                 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^~~
/usr/include/c++/13/bits/stl_pair.h:737:7: note: candidate: ‘std::pair<_T1, _T2>& std::pair<_T1, _T2>::operator=(std::__conditional_t<std::__and_<std::is_move_assignable<_Tp>, std::is_move_assignable<_T2> >::value, std::pair<_T1, _T2>&&, std::__nonesuch&&>) [with _T1 = const int; _T2 = std::__cxx11::basic_string<char>; std::__conditional_t<std::__and_<std::is_move_assignable<_Tp>, std::is_move_assignable<_T2> >::value, std::pair<_T1, _T2>&&, std::__nonesuch&&> = std::__nonesuch&&]’
  737 |       operator=(__conditional_t<__and_<is_move_assignable<_T1>,
      |       ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:739:55: note:   no known conversion for argument 1 from ‘<brace-enclosed initializer list>’ to ‘std::__conditional_t<false, std::pair<const int, std::__cxx11::basic_string<char> >&&, std::__nonesuch&&>’ {aka ‘std::__nonesuch&&’}
  737 |       operator=(__conditional_t<__and_<is_move_assignable<_T1>,
      |                 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  738 |                                        is_move_assignable<_T2>>::value,
      |                                        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  739 |                                 pair&&, __nonesuch&&> __p)
      |                                 ~~~~~~~~~~~~~~~~~~~~~~^~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::iterator& bmstu::map<K, V>::iterator::operator++() [with K = std::__cxx11::basic_string<char>; V = int]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:249:34:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:404:45: error: use of deleted function ‘std::pair<const std::__cxx11::basic_string<char>, int>& std::pair<const std::__cxx11::basic_string<char>, int>::operator=(const std::pair<const std::__cxx11::basic_string<char>, int>&)’
  404 |                                 pair_cache_ = {current_->key, current_->value};
      |                                 ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:187:12: note: ‘std::pair<const std::__cxx11::basic_string<char>, int>& std::pair<const std::__cxx11::basic_string<char>, int>::operator=(const std::pair<const std::__cxx11::basic_string<char>, int>&)’ is implicitly declared as deleted because ‘std::pair<const std::__cxx11::basic_string<char>, int>’ declares a move constructor or move assignment operator
  187 |     struct pair
      |            ^~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::value_type& bmstu::map<K, V>::iterator::operator*() const [with K = std::__cxx11::basic_string<char>; V = int; bmstu::map<K, V>::value_type = std::pair<const std::__cxx11::basic_string<char>, int>]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:249:34:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:388:37: error: no match for ‘operator=’ (operand types are ‘bmstu::map<std::__cxx11::basic_string<char>, int>::value_type’ {aka ‘std::pair<const std::__cxx11::basic_string<char>, int>’} and ‘<brace-enclosed initializer list>’)
  388 |                         pair_cache_ = {current_->key, current ->value};
      |                         ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:752:9: note: candidate: ‘template<class _U1, class _U2> typename std::enable_if<std::__and_<std::is_assignable<_T1&, const _U1&>, std::is_assignable<_T2&, const _U2&> >::value, std::pair<_T1, _T2>&>::type std::pair<_T1, _T2>::operator=(const std::pair<_U1, _U2>&) [with _U2 = _U1; _T1 = const std::__cxx11::basic_string<char>; _T2 = int]’
  752 |         operator=(const pair<_U1, _U2>& __p)
      |         ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:752:9: note:   template argument deduction/substitution failed:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:388:37: note:   couldn’t deduce template parameter ‘_U1’
  388 |                         pair_cache_ = {current_->key, current ->value};
      |                         ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:763:9: note: candidate: ‘template<class _U1, class _U2> typename std::enable_if<std::__and_<std::is_assignable<_T1&, _U1&&>, std::is_assignable<_T2&, _U2&&> >::value, std::pair<_T1, _T2>&>::type std::pair<_T1, _T2>::operator=(std::pair<_U1, _U2>&&) [with _U2 = _U1; _T1 = const std::__cxx11::basic_string<char>; _T2 = int]’
  763 |         operator=(pair<_U1, _U2>&& __p)
      |         ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:763:9: note:   template argument deduction/substitution failed:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:388:37: note:   couldn’t deduce template parameter ‘_U1’
  388 |                         pair_cache_ = {current_->key, current ->value};
      |                         ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:727:7: note: candidate: ‘std::pair<_T1, _T2>& std::pair<_T1, _T2>::operator=(std::__conditional_t<std::__and_<std::is_copy_assignable<_T1>, std::is_copy_assignable<_T2> >::value, const std::pair<_T1, _T2>&, const std::__nonesuch&>) [with _T1 = const std::__cxx11::basic_string<char>; _T2 = int; std::__conditional_t<std::__and_<std::is_copy_assignable<_T1>, std::is_copy_assignable<_T2> >::value, const std::pair<_T1, _T2>&, const std::__nonesuch&> = const std::__nonesuch&]’
  727 |       operator=(__conditional_t<__and_<is_copy_assignable<_T1>,
      |       ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:729:65: note:   no known conversion for argument 1 from ‘<brace-enclosed initializer list>’ to ‘std::__conditional_t<false, const std::pair<const std::__cxx11::basic_string<char>, int>&, const std::__nonesuch&>’ {aka ‘const std::__nonesuch&’}
  727 |       operator=(__conditional_t<__and_<is_copy_assignable<_T1>,
      |                 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  
  728 |                                        is_copy_assignable<_T2>>::value,
      |                                        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  729 |                                 const pair&, const __nonesuch&> __p)
      |                                 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^~~
/usr/include/c++/13/bits/stl_pair.h:737:7: note: candidate: ‘std::pair<_T1, _T2>& std::pair<_T1, _T2>::operator=(std::__conditional_t<std::__and_<std::is_move_assignable<_Tp>, std::is_move_assignable<_T2> >::value, std::pair<_T1, _T2>&&, std::__nonesuch&&>) [with _T1 = const std::__cxx11::basic_string<char>; _T2 = int; std::__conditional_t<std::__and_<std::is_move_assignable<_Tp>, std::is_move_assignable<_T2> >::value, std::pair<_T1, _T2>&&, std::__nonesuch&&> = std::__nonesuch&&]’
  737 |       operator=(__conditional_t<__and_<is_move_assignable<_T1>,
      |       ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:739:55: note:   no known conversion for argument 1 from ‘<brace-enclosed initializer list>’ to ‘std::__conditional_t<false, std::pair<const std::__cxx11::basic_string<char>, int>&&, std::__nonesuch&&>’ {aka ‘std::__nonesuch&&’}
  737 |       operator=(__conditional_t<__and_<is_move_assignable<_T1>,
      |                 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  738 |                                        is_move_assignable<_T2>>::value,
      |                                        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  739 |                                 pair&&, __nonesuch&&> __p)
      |                                 ~~~~~~~~~~~~~~~~~~~~~~^~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::iterator& bmstu::map<K, V>::iterator::operator++() [with K = int; V = int]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:272:34:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:404:45: error: use of deleted function ‘std::pair<const int, int>& std::pair<const int, int>::operator=(const std::pair<const int, int>&)’
  404 |                                 pair_cache_ = {current_->key, current_->value};
      |                                 ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:187:12: note: ‘std::pair<const int, int>& std::pair<const int, int>::operator=(const std::pair<const int, int>&)’ is implicitly declared as deleted because ‘std::pair<const int, int>’ declares a move constructor or move assignment operator
  187 |     struct pair
      |            ^~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::value_type& bmstu::map<K, V>::iterator::operator*() const [with K = int; V = int; bmstu::map<K, V>::value_type = std::pair<const int, int>]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:272:34:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:388:37: error: no match for ‘operator=’ (operand types are ‘bmstu::map<int, int>::value_type’ {aka ‘std::pair<const int, int>’} and ‘<brace-enclosed initializer list>’)
  388 |                         pair_cache_ = {current_->key, current ->value};
      |                         ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:752:9: note: candidate: ‘template<class _U1, class _U2> typename std::enable_if<std::__and_<std::is_assignable<_T1&, const _U1&>, std::is_assignable<_T2&, const _U2&> >::value, std::pair<_T1, _T2>&>::type std::pair<_T1, _T2>::operator=(const std::pair<_U1, _U2>&) [with _U2 = _U1; _T1 = const int; _T2 = int]’
  752 |         operator=(const pair<_U1, _U2>& __p)
      |         ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:752:9: note:   template argument deduction/substitution failed:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:388:37: note:   couldn’t deduce template parameter ‘_U1’
  388 |                         pair_cache_ = {current_->key, current ->value};
      |                         ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:763:9: note: candidate: ‘template<class _U1, class _U2> typename std::enable_if<std::__and_<std::is_assignable<_T1&, _U1&&>, std::is_assignable<_T2&, _U2&&> >::value, std::pair<_T1, _T2>&>::type std::pair<_T1, _T2>::operator=(std::pair<_U1, _U2>&&) [with _U2 = _U1; _T1 = const int; _T2 = int]’
  763 |         operator=(pair<_U1, _U2>&& __p)
      |         ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:763:9: note:   template argument deduction/substitution failed:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:388:37: note:   couldn’t deduce template parameter ‘_U1’
  388 |                         pair_cache_ = {current_->key, current ->value};
      |                         ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:727:7: note: candidate: ‘std::pair<_T1, _T2>& std::pair<_T1, _T2>::operator=(std::__conditional_t<std::__and_<std::is_copy_assignable<_T1>, std::is_copy_assignable<_T2> >::value, const std::pair<_T1, _T2>&, const std::__nonesuch&>) [with _T1 = const int; _T2 = int; std::__conditional_t<std::__and_<std::is_copy_assignable<_T1>, std::is_copy_assignable<_T2> >::value, const std::pair<_T1, _T2>&, const std::__nonesuch&> = const std::__nonesuch&]’
  727 |       operator=(__conditional_t<__and_<is_copy_assignable<_T1>,
      |       ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:729:65: note:   no known conversion for argument 1 from ‘<brace-enclosed initializer list>’ to ‘std::__conditional_t<false, const std::pair<const int, int>&, const std::__nonesuch&>’ {aka ‘const std::__nonesuch&’}
  727 |       operator=(__conditional_t<__and_<is_copy_assignable<_T1>,
      |                 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  
  728 |                                        is_copy_assignable<_T2>>::value,
      |                                        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  729 |                                 const pair&, const __nonesuch&> __p)
      |                                 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^~~
/usr/include/c++/13/bits/stl_pair.h:737:7: note: candidate: ‘std::pair<_T1, _T2>& std::pair<_T1, _T2>::operator=(std::__conditional_t<std::__and_<std::is_move_assignable<_Tp>, std::is_move_assignable<_T2> >::value, std::pair<_T1, _T2>&&, std::__nonesuch&&>) [with _T1 = const int; _T2 = int; std::__conditional_t<std::__and_<std::is_move_assignable<_Tp>, std::is_move_assignable<_T2> >::value, std::pair<_T1, _T2>&&, std::__nonesuch&&> = std::__nonesuch&&]’
  737 |       operator=(__conditional_t<__and_<is_move_assignable<_T1>,
      |       ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:739:55: note:   no known conversion for argument 1 from ‘<brace-enclosed initializer list>’ to ‘std::__conditional_t<false, std::pair<const int, int>&&, std::__nonesuch&&>’ {aka ‘std::__nonesuch&&’}
  737 |       operator=(__conditional_t<__and_<is_move_assignable<_T1>,
      |                 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  738 |                                        is_move_assignable<_T2>>::value,
      |                                        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  739 |                                 pair&&, __nonesuch&&> __p)
      |                                 ~~~~~~~~~~~~~~~~~~~~~~^~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::iterator& bmstu::map<K, V>::iterator::operator++() [with K = double; V = int]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:306:34:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:404:45: error: use of deleted function ‘std::pair<const double, int>& std::pair<const double, int>::operator=(const std::pair<const double, int>&)’
  404 |                                 pair_cache_ = {current_->key, current_->value};
      |                                 ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:187:12: note: ‘std::pair<const double, int>& std::pair<const double, int>::operator=(const std::pair<const double, int>&)’ is implicitly declared as deleted because ‘std::pair<const double, int>’ declares a move constructor or move assignment operator
  187 |     struct pair
      |            ^~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::value_type& bmstu::map<K, V>::iterator::operator*() const [with K = double; V = int; bmstu::map<K, V>::value_type = std::pair<const double, int>]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:306:34:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:388:37: error: no match for ‘operator=’ (operand types are ‘bmstu::map<double, int>::value_type’ {aka ‘std::pair<const double, int>’} and ‘<brace-enclosed initializer list>’)
  388 |                         pair_cache_ = {current_->key, current ->value};
      |                         ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:752:9: note: candidate: ‘template<class _U1, class _U2> typename std::enable_if<std::__and_<std::is_assignable<_T1&, const _U1&>, std::is_assignable<_T2&, const _U2&> >::value, std::pair<_T1, _T2>&>::type std::pair<_T1, _T2>::operator=(const std::pair<_U1, _U2>&) [with _U2 = _U1; _T1 = const double; _T2 = int]’
  752 |         operator=(const pair<_U1, _U2>& __p)
      |         ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:752:9: note:   template argument deduction/substitution failed:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:388:37: note:   couldn’t deduce template parameter ‘_U1’
  388 |                         pair_cache_ = {current_->key, current ->value};
      |                         ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:763:9: note: candidate: ‘template<class _U1, class _U2> typename std::enable_if<std::__and_<std::is_assignable<_T1&, _U1&&>, std::is_assignable<_T2&, _U2&&> >::value, std::pair<_T1, _T2>&>::type std::pair<_T1, _T2>::operator=(std::pair<_U1, _U2>&&) [with _U2 = _U1; _T1 = const double; _T2 = int]’
  763 |         operator=(pair<_U1, _U2>&& __p)
      |         ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:763:9: note:   template argument deduction/substitution failed:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:388:37: note:   couldn’t deduce template parameter ‘_U1’
  388 |                         pair_cache_ = {current_->key, current ->value};
      |                         ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:727:7: note: candidate: ‘std::pair<_T1, _T2>& std::pair<_T1, _T2>::operator=(std::__conditional_t<std::__and_<std::is_copy_assignable<_T1>, std::is_copy_assignable<_T2> >::value, const std::pair<_T1, _T2>&, const std::__nonesuch&>) [with _T1 = const double; _T2 = int; std::__conditional_t<std::__and_<std::is_copy_assignable<_T1>, std::is_copy_assignable<_T2> >::value, const std::pair<_T1, _T2>&, const std::__nonesuch&> = const std::__nonesuch&]’
  727 |       operator=(__conditional_t<__and_<is_copy_assignable<_T1>,
      |       ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:729:65: note:   no known conversion for argument 1 from ‘<brace-enclosed initializer list>’ to ‘std::__conditional_t<false, const std::pair<const double, int>&, const std::__nonesuch&>’ {aka ‘const std::__nonesuch&’}
  727 |       operator=(__conditional_t<__and_<is_copy_assignable<_T1>,
      |                 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  
  728 |                                        is_copy_assignable<_T2>>::value,
      |                                        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  729 |                                 const pair&, const __nonesuch&> __p)
      |                                 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^~~
/usr/include/c++/13/bits/stl_pair.h:737:7: note: candidate: ‘std::pair<_T1, _T2>& std::pair<_T1, _T2>::operator=(std::__conditional_t<std::__and_<std::is_move_assignable<_Tp>, std::is_move_assignable<_T2> >::value, std::pair<_T1, _T2>&&, std::__nonesuch&&>) [with _T1 = const double; _T2 = int; std::__conditional_t<std::__and_<std::is_move_assignable<_Tp>, std::is_move_assignable<_T2> >::value, std::pair<_T1, _T2>&&, std::__nonesuch&&> = std::__nonesuch&&]’
  737 |       operator=(__conditional_t<__and_<is_move_assignable<_T1>,
      |       ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:739:55: note:   no known conversion for argument 1 from ‘<brace-enclosed initializer list>’ to ‘std::__conditional_t<false, std::pair<const double, int>&&, std::__nonesuch&&>’ {aka ‘std::__nonesuch&&’}
  737 |       operator=(__conditional_t<__and_<is_move_assignable<_T1>,
      |                 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  738 |                                        is_move_assignable<_T2>>::value,
      |                                        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  739 |                                 pair&&, __nonesuch&&> __p)
      |                                 ~~~~~~~~~~~~~~~~~~~~~~^~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::value_type* bmstu::map<K, V>::iterator::operator->() const [with K = int; V = std::__cxx11::basic_string<char>; bmstu::map<K, V>::value_type = std::pair<const int, std::__cxx11::basic_string<char> >]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:327:3:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:394:37: error: no match for ‘operator=’ (operand types are ‘bmstu::map<int, std::__cxx11::basic_string<char> >::value_type’ {aka ‘std::pair<const int, std::__cxx11::basic_string<char> >’} and ‘<brace-enclosed initializer list>’)
  394 |                         pair_cache_ = {current_->key, current ->value};
      |                         ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:752:9: note: candidate: ‘template<class _U1, class _U2> typename std::enable_if<std::__and_<std::is_assignable<_T1&, const _U1&>, std::is_assignable<_T2&, const _U2&> >::value, std::pair<_T1, _T2>&>::type std::pair<_T1, _T2>::operator=(const std::pair<_U1, _U2>&) [with _U2 = _U1; _T1 = const int; _T2 = std::__cxx11::basic_string<char>]’
  752 |         operator=(const pair<_U1, _U2>& __p)
      |         ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:752:9: note:   template argument deduction/substitution failed:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:394:37: note:   couldn’t deduce template parameter ‘_U1’
  394 |                         pair_cache_ = {current_->key, current ->value};
      |                         ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:763:9: note: candidate: ‘template<class _U1, class _U2> typename std::enable_if<std::__and_<std::is_assignable<_T1&, _U1&&>, std::is_assignable<_T2&, _U2&&> >::value, std::pair<_T1, _T2>&>::type std::pair<_T1, _T2>::operator=(std::pair<_U1, _U2>&&) [with _U2 = _U1; _T1 = const int; _T2 = std::__cxx11::basic_string<char>]’
  763 |         operator=(pair<_U1, _U2>&& __p)
      |         ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:763:9: note:   template argument deduction/substitution failed:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:394:37: note:   couldn’t deduce template parameter ‘_U1’
  394 |                         pair_cache_ = {current_->key, current ->value};
      |                         ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:727:7: note: candidate: ‘std::pair<_T1, _T2>& std::pair<_T1, _T2>::operator=(std::__conditional_t<std::__and_<std::is_copy_assignable<_T1>, std::is_copy_assignable<_T2> >::value, const std::pair<_T1, _T2>&, const std::__nonesuch&>) [with _T1 = const int; _T2 = std::__cxx11::basic_string<char>; std::__conditional_t<std::__and_<std::is_copy_assignable<_T1>, std::is_copy_assignable<_T2> >::value, const std::pair<_T1, _T2>&, const std::__nonesuch&> = const std::__nonesuch&]’
  727 |       operator=(__conditional_t<__and_<is_copy_assignable<_T1>,
      |       ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:729:65: note:   no known conversion for argument 1 from ‘<brace-enclosed initializer list>’ to ‘std::__conditional_t<false, const std::pair<const int, std::__cxx11::basic_string<char> >&, const std::__nonesuch&>’ {aka ‘const std::__nonesuch&’}
  727 |       operator=(__conditional_t<__and_<is_copy_assignable<_T1>,
      |                 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  
  728 |                                        is_copy_assignable<_T2>>::value,
      |                                        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  729 |                                 const pair&, const __nonesuch&> __p)
      |                                 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^~~
/usr/include/c++/13/bits/stl_pair.h:737:7: note: candidate: ‘std::pair<_T1, _T2>& std::pair<_T1, _T2>::operator=(std::__conditional_t<std::__and_<std::is_move_assignable<_Tp>, std::is_move_assignable<_T2> >::value, std::pair<_T1, _T2>&&, std::__nonesuch&&>) [with _T1 = const int; _T2 = std::__cxx11::basic_string<char>; std::__conditional_t<std::__and_<std::is_move_assignable<_Tp>, std::is_move_assignable<_T2> >::value, std::pair<_T1, _T2>&&, std::__nonesuch&&> = std::__nonesuch&&]’
  737 |       operator=(__conditional_t<__and_<is_move_assignable<_T1>,
      |       ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:739:55: note:   no known conversion for argument 1 from ‘<brace-enclosed initializer list>’ to ‘std::__conditional_t<false, std::pair<const int, std::__cxx11::basic_string<char> >&&, std::__nonesuch&&>’ {aka ‘std::__nonesuch&&’}
  737 |       operator=(__conditional_t<__and_<is_move_assignable<_T1>,
      |                 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  738 |                                        is_move_assignable<_T2>>::value,
      |                                        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  739 |                                 pair&&, __nonesuch&&> __p)
      |                                 ~~~~~~~~~~~~~~~~~~~~~~^~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::iterator& bmstu::map<K, V>::iterator::operator++() [with K = std::__cxx11::basic_string<char>; V = std::__cxx11::basic_string<char>]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:343:41:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:404:45: error: use of deleted function ‘std::pair<const std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >& std::pair<const std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >::operator=(const std::pair<const std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >&)’
  404 |                                 pair_cache_ = {current_->key, current_->value};
      |                                 ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:187:12: note: ‘std::pair<const std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >& std::pair<const std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >::operator=(const std::pair<const std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >&)’ is implicitly declared as deleted because ‘std::pair<const std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >’ declares a move constructor or move assignment operator
  187 |     struct pair
      |            ^~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::value_type& bmstu::map<K, V>::iterator::operator*() const [with K = std::__cxx11::basic_string<char>; V = std::__cxx11::basic_string<char>; bmstu::map<K, V>::value_type = std::pair<const std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:343:41:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:388:37: error: no match for ‘operator=’ (operand types are ‘bmstu::map<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >::value_type’ {aka ‘std::pair<const std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >’} and ‘<brace-enclosed initializer list>’)
  388 |                         pair_cache_ = {current_->key, current ->value};
      |                         ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:752:9: note: candidate: ‘template<class _U1, class _U2> typename std::enable_if<std::__and_<std::is_assignable<_T1&, const _U1&>, std::is_assignable<_T2&, const _U2&> >::value, std::pair<_T1, _T2>&>::type std::pair<_T1, _T2>::operator=(const std::pair<_U1, _U2>&) [with _U2 = _U1; _T1 = const std::__cxx11::basic_string<char>; _T2 = std::__cxx11::basic_string<char>]’
  752 |         operator=(const pair<_U1, _U2>& __p)
      |         ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:752:9: note:   template argument deduction/substitution failed:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:388:37: note:   couldn’t deduce template parameter ‘_U1’
  388 |                         pair_cache_ = {current_->key, current ->value};
      |                         ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:763:9: note: candidate: ‘template<class _U1, class _U2> typename std::enable_if<std::__and_<std::is_assignable<_T1&, _U1&&>, std::is_assignable<_T2&, _U2&&> >::value, std::pair<_T1, _T2>&>::type std::pair<_T1, _T2>::operator=(std::pair<_U1, _U2>&&) [with _U2 = _U1; _T1 = const std::__cxx11::basic_string<char>; _T2 = std::__cxx11::basic_string<char>]’
  763 |         operator=(pair<_U1, _U2>&& __p)
      |         ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:763:9: note:   template argument deduction/substitution failed:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:388:37: note:   couldn’t deduce template parameter ‘_U1’
  388 |                         pair_cache_ = {current_->key, current ->value};
      |                         ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:727:7: note: candidate: ‘std::pair<_T1, _T2>& std::pair<_T1, _T2>::operator=(std::__conditional_t<std::__and_<std::is_copy_assignable<_T1>, std::is_copy_assignable<_T2> >::value, const std::pair<_T1, _T2>&, const std::__nonesuch&>) [with _T1 = const std::__cxx11::basic_string<char>; _T2 = std::__cxx11::basic_string<char>; std::__conditional_t<std::__and_<std::is_copy_assignable<_T1>, std::is_copy_assignable<_T2> >::value, const std::pair<_T1, _T2>&, const std::__nonesuch&> = const std::__nonesuch&]’
  727 |       operator=(__conditional_t<__and_<is_copy_assignable<_T1>,
      |       ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:729:65: note:   no known conversion for argument 1 from ‘<brace-enclosed initializer list>’ to ‘std::__conditional_t<false, const std::pair<const std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >&, const std::__nonesuch&>’ {aka ‘const std::__nonesuch&’}
  727 |       operator=(__conditional_t<__and_<is_copy_assignable<_T1>,
      |                 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  
  728 |                                        is_copy_assignable<_T2>>::value,
      |                                        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  729 |                                 const pair&, const __nonesuch&> __p)
      |                                 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^~~
/usr/include/c++/13/bits/stl_pair.h:737:7: note: candidate: ‘std::pair<_T1, _T2>& std::pair<_T1, _T2>::operator=(std::__conditional_t<std::__and_<std::is_move_assignable<_Tp>, std::is_move_assignable<_T2> >::value, std::pair<_T1, _T2>&&, std::__nonesuch&&>) [with _T1 = const std::__cxx11::basic_string<char>; _T2 = std::__cxx11::basic_string<char>; std::__conditional_t<std::__and_<std::is_move_assignable<_Tp>, std::is_move_assignable<_T2> >::value, std::pair<_T1, _T2>&&, std::__nonesuch&&> = std::__nonesuch&&]’
  737 |       operator=(__conditional_t<__and_<is_move_assignable<_T1>,
      |       ^~~~~~~~
/usr/include/c++/13/bits/stl_pair.h:739:55: note:   no known conversion for argument 1 from ‘<brace-enclosed initializer list>’ to ‘std::__conditional_t<false, std::pair<const std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >&&, std::__nonesuch&&>’ {aka ‘std::__nonesuch&&’}
  737 |       operator=(__conditional_t<__and_<is_move_assignable<_T1>,
      |                 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  738 |                                        is_move_assignable<_T2>>::value,
      |                                        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  739 |                                 pair&&, __nonesuch&&> __p)
      |                                 ~~~~~~~~~~~~~~~~~~~~~~^~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::iterator::iterator(bmstu::tree_node<K, V>*, bool) [with K = int; V = std::__cxx11::basic_string<char>]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:509:28:   required from ‘bmstu::map<K, V>::iterator bmstu::map<K, V>::begin() [with K = int; V = std::__cxx11::basic_string<char>]’
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:217:26:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:375:45: error: use of deleted function ‘std::pair<const int, std::__cxx11::basic_string<char> >& std::pair<const int, std::__cxx11::basic_string<char> >::operator=(const std::pair<const int, std::__cxx11::basic_string<char> >&)’
  375 |                                 pair_cache_ = {current_->key, current_->value};
      |                                 ~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::iterator::iterator(bmstu::tree_node<K, V>*, bool) [with K = std::__cxx11::basic_string<char>; V = int]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:509:28:   required from ‘bmstu::map<K, V>::iterator bmstu::map<K, V>::begin() [with K = std::__cxx11::basic_string<char>; V = int]’
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:249:34:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:375:45: error: use of deleted function ‘std::pair<const std::__cxx11::basic_string<char>, int>& std::pair<const std::__cxx11::basic_string<char>, int>::operator=(const std::pair<const std::__cxx11::basic_string<char>, int>&)’
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::iterator::iterator(bmstu::tree_node<K, V>*, bool) [with K = int; V = int]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:509:28:   required from ‘bmstu::map<K, V>::iterator bmstu::map<K, V>::begin() [with K = int; V = int]’
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:272:34:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:375:45: error: use of deleted function ‘std::pair<const int, int>& std::pair<const int, int>::operator=(const std::pair<const int, int>&)’
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::iterator::iterator(bmstu::tree_node<K, V>*, bool) [with K = double; V = int]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:509:28:   required from ‘bmstu::map<K, V>::iterator bmstu::map<K, V>::begin() [with K = double; V = int]’
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:306:34:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:375:45: error: use of deleted function ‘std::pair<const double, int>& std::pair<const double, int>::operator=(const std::pair<const double, int>&)’
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h: In instantiation of ‘bmstu::map<K, V>::iterator::iterator(bmstu::tree_node<K, V>*, bool) [with K = std::__cxx11::basic_string<char>; V = std::__cxx11::basic_string<char>]’:
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:509:28:   required from ‘bmstu::map<K, V>::iterator bmstu::map<K, V>::begin() [with K = std::__cxx11::basic_string<char>; V = std::__cxx11::basic_string<char>]’
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map_test.cpp:343:41:   required from here
/home/greed/yap/bmstu_cpp_course/tasks/bmstu_map/task_map/bmstu_map.h:375:45: error: use of deleted function ‘std::pair<const std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >& std::pair<const std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >::operator=(const std::pair<const std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> >&)’

Build finished with error(s).

 *  The terminal process terminated with exit code: -1. 
 *  Terminal will be reused by tasks, press any key to close it. 
