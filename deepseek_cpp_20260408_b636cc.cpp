[main] Building folder: /home/greed/yap/bmstu_cpp_course/tasks/task_map/build 
[build] Starting build
[proc] Executing command: /usr/bin/cmake --build /home/greed/yap/bmstu_cpp_course/tasks/task_map/build --config Debug --target all -j 2 --
[build] [ 50%] Building CXX object CMakeFiles/bmstu_optional.dir/task_optional/bmstu_optional_test.o
[build] In file included from /home/greed/yap/bmstu_cpp_course/tasks/bmstu_optional/task_optional/bmstu_optional_test.cpp:1:
[build] /home/greed/yap/bmstu_cpp_course/tasks/bmstu_optional/task_optional/bmstu_optional.h: In instantiation of ‘bmstu::optional<T>& bmstu::optional<T>::operator=(U&&) [with U = int&; <template-parameter-2-2> = void; T = int]’:
[build] /home/greed/yap/bmstu_cpp_course/tasks/bmstu_optional/task_optional/bmstu_optional_test.cpp:151:6:   required from here
[build] /home/greed/yap/bmstu_cpp_course/tasks/bmstu_optional/task_optional/bmstu_optional.h:132:18: error: expression cannot be used as a function
[build]   132 |             value() = T(std::forward<U>(value));
[build]       |             ~~~~~^~
[build] /home/greed/yap/bmstu_cpp_course/tasks/bmstu_optional/task_optional/bmstu_optional.h: In instantiation of ‘bmstu::optional<T>& bmstu::optional<T>::operator=(U&&) [with U = std::__cxx11::basic_string<char>&; <template-parameter-2-2> = void; T = std::__cxx11::basic_string<char>]’:
[build] /home/greed/yap/bmstu_cpp_course/tasks/bmstu_optional/task_optional/bmstu_optional_test.cpp:161:6:   required from here
[build] /home/greed/yap/bmstu_cpp_course/tasks/bmstu_optional/task_optional/bmstu_optional.h:132:18: error: no match for call to ‘(std::__cxx11::basic_string<char>) ()’
[build] /home/greed/yap/bmstu_cpp_course/tasks/bmstu_optional/task_optional/bmstu_optional.h: In instantiation of ‘bmstu::optional<T>& bmstu::optional<T>::operator=(U&&) [with U = Tracker&; <template-parameter-2-2> = void; T = Tracker]’:
[build] /home/greed/yap/bmstu_cpp_course/tasks/bmstu_optional/task_optional/bmstu_optional_test.cpp:320:9:   required from here
[build] /home/greed/yap/bmstu_cpp_course/tasks/bmstu_optional/task_optional/bmstu_optional.h:132:18: error: no match for call to ‘(Tracker) ()’
[build] /home/greed/yap/bmstu_cpp_course/tasks/bmstu_optional/task_optional/bmstu_optional.h: In instantiation of ‘bmstu::optional<T>& bmstu::optional<T>::operator=(U&&) [with U = const char (&)[5]; <template-parameter-2-2> = void; T = std::__cxx11::basic_string<char>]’:
[build] /home/greed/yap/bmstu_cpp_course/tasks/bmstu_optional/task_optional/bmstu_optional_test.cpp:681:8:   required from here
[build] /home/greed/yap/bmstu_cpp_course/tasks/bmstu_optional/task_optional/bmstu_optional.h:132:18: error: expression cannot be used as a function
[build] gmake[2]: *** [CMakeFiles/bmstu_optional.dir/build.make:76: CMakeFiles/bmstu_optional.dir/task_optional/bmstu_optional_test.o] Error 1
[build] gmake[1]: *** [CMakeFiles/Makefile2:83: CMakeFiles/bmstu_optional.dir/all] Error 2
[build] gmake: *** [Makefile:91: all] Error 2
[proc] The command: /usr/bin/cmake --build /home/greed/yap/bmstu_cpp_course/tasks/task_map/build --config Debug --target all -j 2 -- exited with code: 2
[driver] Build completed: 00:00:01.315
[build] Build finished with exit code 2
