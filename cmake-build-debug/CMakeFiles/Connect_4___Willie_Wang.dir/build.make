# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\C++\Connect 4 - Willie Wang"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\C++\Connect 4 - Willie Wang\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Connect_4___Willie_Wang.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Connect_4___Willie_Wang.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Connect_4___Willie_Wang.dir/flags.make

CMakeFiles/Connect_4___Willie_Wang.dir/main.cpp.obj: CMakeFiles/Connect_4___Willie_Wang.dir/flags.make
CMakeFiles/Connect_4___Willie_Wang.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\C++\Connect 4 - Willie Wang\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Connect_4___Willie_Wang.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Connect_4___Willie_Wang.dir\main.cpp.obj -c "D:\C++\Connect 4 - Willie Wang\main.cpp"

CMakeFiles/Connect_4___Willie_Wang.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Connect_4___Willie_Wang.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\C++\Connect 4 - Willie Wang\main.cpp" > CMakeFiles\Connect_4___Willie_Wang.dir\main.cpp.i

CMakeFiles/Connect_4___Willie_Wang.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Connect_4___Willie_Wang.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\C++\Connect 4 - Willie Wang\main.cpp" -o CMakeFiles\Connect_4___Willie_Wang.dir\main.cpp.s

# Object files for target Connect_4___Willie_Wang
Connect_4___Willie_Wang_OBJECTS = \
"CMakeFiles/Connect_4___Willie_Wang.dir/main.cpp.obj"

# External object files for target Connect_4___Willie_Wang
Connect_4___Willie_Wang_EXTERNAL_OBJECTS =

Connect_4___Willie_Wang.exe: CMakeFiles/Connect_4___Willie_Wang.dir/main.cpp.obj
Connect_4___Willie_Wang.exe: CMakeFiles/Connect_4___Willie_Wang.dir/build.make
Connect_4___Willie_Wang.exe: CMakeFiles/Connect_4___Willie_Wang.dir/linklibs.rsp
Connect_4___Willie_Wang.exe: CMakeFiles/Connect_4___Willie_Wang.dir/objects1.rsp
Connect_4___Willie_Wang.exe: CMakeFiles/Connect_4___Willie_Wang.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\C++\Connect 4 - Willie Wang\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Connect_4___Willie_Wang.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Connect_4___Willie_Wang.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Connect_4___Willie_Wang.dir/build: Connect_4___Willie_Wang.exe

.PHONY : CMakeFiles/Connect_4___Willie_Wang.dir/build

CMakeFiles/Connect_4___Willie_Wang.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Connect_4___Willie_Wang.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Connect_4___Willie_Wang.dir/clean

CMakeFiles/Connect_4___Willie_Wang.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\C++\Connect 4 - Willie Wang" "D:\C++\Connect 4 - Willie Wang" "D:\C++\Connect 4 - Willie Wang\cmake-build-debug" "D:\C++\Connect 4 - Willie Wang\cmake-build-debug" "D:\C++\Connect 4 - Willie Wang\cmake-build-debug\CMakeFiles\Connect_4___Willie_Wang.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Connect_4___Willie_Wang.dir/depend

