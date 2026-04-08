[main] Configuring project: bmstu_cpp_course 
[proc] Executing command: /usr/bin/cmake -DCMAKE_BUILD_TYPE:STRING=Debug -DCMAKE_CXX_STANDARD:STRING=17 -DCMAKE_EXPORT_COMPILE_COMMANDS:BOOL=TRUE -DCMAKE_C_COMPILER:FILEPATH=/usr/bin/gcc -DCMAKE_CXX_COMPILER:FILEPATH=/usr/bin/g++ --no-warn-unused-cli -S /home/greed/yap/bmstu_cpp_course/tasks/bmstu_optional -B /home/greed/yap/bmstu_cpp_course/tasks/task_map/build -G "Unix Makefiles"
[cmake] CMake Warning (dev) in CMakeLists.txt:
[cmake]   No project() command is present.  The top-level CMakeLists.txt file must
[cmake]   contain a literal, direct call to the project() command.  Add a line of
[cmake]   code such as
[cmake] 
[cmake]     project(ProjectName)
[cmake] 
[cmake]   near the top of the file, but after cmake_minimum_required().
[cmake] 
[cmake]   CMake is pretending there is a "project(Project)" command on the first
[cmake]   line.
[cmake] This warning is for project developers.  Use -Wno-dev to suppress it.
[cmake] 
[cmake] CMake Warning (dev) in CMakeLists.txt:
[cmake]   cmake_minimum_required() should be called prior to this top-level project()
[cmake]   call.  Please see the cmake-commands(7) manual for usage documentation of
[cmake]   both commands.
[cmake] This warning is for project developers.  Use -Wno-dev to suppress it.
[cmake] 
[cmake] Not searching for unused variables given on the command line.
[cmake] -- Running tasks/bmstu_list/CMakeLists.txt
[cmake] -- FIND IN: task_optional
[cmake] -- SOURCES: task_optional/bmstu_optional.h;task_optional/bmstu_optional_test.cpp
[cmake] -- Configuring done (0.0s)
[cmake] CMake Warning (dev) in CMakeLists.txt:
[cmake]   No cmake_minimum_required command is present.  A line of code such as
[cmake] 
[cmake]     cmake_minimum_required(VERSION 3.28)
[cmake] 
[cmake]   should be added at the top of the file.  The version specified may be lower
[cmake]   if you wish to support older CMake versions for this project.  For more
[cmake]   information run "cmake --help-policy CMP0000".
[cmake] This warning is for project developers.  Use -Wno-dev to suppress it.
[cmake] 
[cmake] -- Generating done (0.0s)
[cmake] -- Build files have been written to: /home/greed/yap/bmstu_cpp_course/tasks/task_map/build
