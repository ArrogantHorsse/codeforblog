# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/test/freeSpace/codeforblog/03-list/I-listBack

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/test/freeSpace/codeforblog/03-list/I-listBack/buils

# Include any dependencies generated for this target.
include CMakeFiles/ListBack.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ListBack.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ListBack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ListBack.dir/flags.make

CMakeFiles/ListBack.dir/src/main.cpp.o: CMakeFiles/ListBack.dir/flags.make
CMakeFiles/ListBack.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/ListBack.dir/src/main.cpp.o: CMakeFiles/ListBack.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/test/freeSpace/codeforblog/03-list/I-listBack/buils/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ListBack.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ListBack.dir/src/main.cpp.o -MF CMakeFiles/ListBack.dir/src/main.cpp.o.d -o CMakeFiles/ListBack.dir/src/main.cpp.o -c /home/test/freeSpace/codeforblog/03-list/I-listBack/src/main.cpp

CMakeFiles/ListBack.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ListBack.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/test/freeSpace/codeforblog/03-list/I-listBack/src/main.cpp > CMakeFiles/ListBack.dir/src/main.cpp.i

CMakeFiles/ListBack.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ListBack.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/test/freeSpace/codeforblog/03-list/I-listBack/src/main.cpp -o CMakeFiles/ListBack.dir/src/main.cpp.s

# Object files for target ListBack
ListBack_OBJECTS = \
"CMakeFiles/ListBack.dir/src/main.cpp.o"

# External object files for target ListBack
ListBack_EXTERNAL_OBJECTS =

ListBack: CMakeFiles/ListBack.dir/src/main.cpp.o
ListBack: CMakeFiles/ListBack.dir/build.make
ListBack: CMakeFiles/ListBack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/test/freeSpace/codeforblog/03-list/I-listBack/buils/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ListBack"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ListBack.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ListBack.dir/build: ListBack
.PHONY : CMakeFiles/ListBack.dir/build

CMakeFiles/ListBack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ListBack.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ListBack.dir/clean

CMakeFiles/ListBack.dir/depend:
	cd /home/test/freeSpace/codeforblog/03-list/I-listBack/buils && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/test/freeSpace/codeforblog/03-list/I-listBack /home/test/freeSpace/codeforblog/03-list/I-listBack /home/test/freeSpace/codeforblog/03-list/I-listBack/buils /home/test/freeSpace/codeforblog/03-list/I-listBack/buils /home/test/freeSpace/codeforblog/03-list/I-listBack/buils/CMakeFiles/ListBack.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ListBack.dir/depend

