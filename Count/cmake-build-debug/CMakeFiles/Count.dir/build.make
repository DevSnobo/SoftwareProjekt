# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/snobo/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/181.4445.84/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/snobo/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/181.4445.84/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/snobo/CLionProjects/Count

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/snobo/CLionProjects/Count/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Count.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Count.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Count.dir/flags.make

CMakeFiles/Count.dir/main.cpp.o: CMakeFiles/Count.dir/flags.make
CMakeFiles/Count.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/snobo/CLionProjects/Count/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Count.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Count.dir/main.cpp.o -c /home/snobo/CLionProjects/Count/main.cpp

CMakeFiles/Count.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Count.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/snobo/CLionProjects/Count/main.cpp > CMakeFiles/Count.dir/main.cpp.i

CMakeFiles/Count.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Count.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/snobo/CLionProjects/Count/main.cpp -o CMakeFiles/Count.dir/main.cpp.s

CMakeFiles/Count.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Count.dir/main.cpp.o.requires

CMakeFiles/Count.dir/main.cpp.o.provides: CMakeFiles/Count.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Count.dir/build.make CMakeFiles/Count.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Count.dir/main.cpp.o.provides

CMakeFiles/Count.dir/main.cpp.o.provides.build: CMakeFiles/Count.dir/main.cpp.o


# Object files for target Count
Count_OBJECTS = \
"CMakeFiles/Count.dir/main.cpp.o"

# External object files for target Count
Count_EXTERNAL_OBJECTS =

Count: CMakeFiles/Count.dir/main.cpp.o
Count: CMakeFiles/Count.dir/build.make
Count: CMakeFiles/Count.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/snobo/CLionProjects/Count/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Count"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Count.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Count.dir/build: Count

.PHONY : CMakeFiles/Count.dir/build

CMakeFiles/Count.dir/requires: CMakeFiles/Count.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Count.dir/requires

CMakeFiles/Count.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Count.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Count.dir/clean

CMakeFiles/Count.dir/depend:
	cd /home/snobo/CLionProjects/Count/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/snobo/CLionProjects/Count /home/snobo/CLionProjects/Count /home/snobo/CLionProjects/Count/cmake-build-debug /home/snobo/CLionProjects/Count/cmake-build-debug /home/snobo/CLionProjects/Count/cmake-build-debug/CMakeFiles/Count.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Count.dir/depend
