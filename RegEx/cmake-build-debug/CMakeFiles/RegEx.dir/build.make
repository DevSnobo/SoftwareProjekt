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
CMAKE_COMMAND = /home/snobo/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/181.5281.33/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/snobo/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/181.5281.33/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/snobo/CLionProjects/RegEx

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/snobo/CLionProjects/RegEx/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/RegEx.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/RegEx.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RegEx.dir/flags.make

CMakeFiles/RegEx.dir/main.cpp.o: CMakeFiles/RegEx.dir/flags.make
CMakeFiles/RegEx.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/snobo/CLionProjects/RegEx/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/RegEx.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RegEx.dir/main.cpp.o -c /home/snobo/CLionProjects/RegEx/main.cpp

CMakeFiles/RegEx.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RegEx.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/snobo/CLionProjects/RegEx/main.cpp > CMakeFiles/RegEx.dir/main.cpp.i

CMakeFiles/RegEx.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RegEx.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/snobo/CLionProjects/RegEx/main.cpp -o CMakeFiles/RegEx.dir/main.cpp.s

CMakeFiles/RegEx.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/RegEx.dir/main.cpp.o.requires

CMakeFiles/RegEx.dir/main.cpp.o.provides: CMakeFiles/RegEx.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/RegEx.dir/build.make CMakeFiles/RegEx.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/RegEx.dir/main.cpp.o.provides

CMakeFiles/RegEx.dir/main.cpp.o.provides.build: CMakeFiles/RegEx.dir/main.cpp.o


# Object files for target RegEx
RegEx_OBJECTS = \
"CMakeFiles/RegEx.dir/main.cpp.o"

# External object files for target RegEx
RegEx_EXTERNAL_OBJECTS =

RegEx: CMakeFiles/RegEx.dir/main.cpp.o
RegEx: CMakeFiles/RegEx.dir/build.make
RegEx: CMakeFiles/RegEx.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/snobo/CLionProjects/RegEx/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable RegEx"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RegEx.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RegEx.dir/build: RegEx

.PHONY : CMakeFiles/RegEx.dir/build

CMakeFiles/RegEx.dir/requires: CMakeFiles/RegEx.dir/main.cpp.o.requires

.PHONY : CMakeFiles/RegEx.dir/requires

CMakeFiles/RegEx.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/RegEx.dir/cmake_clean.cmake
.PHONY : CMakeFiles/RegEx.dir/clean

CMakeFiles/RegEx.dir/depend:
	cd /home/snobo/CLionProjects/RegEx/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/snobo/CLionProjects/RegEx /home/snobo/CLionProjects/RegEx /home/snobo/CLionProjects/RegEx/cmake-build-debug /home/snobo/CLionProjects/RegEx/cmake-build-debug /home/snobo/CLionProjects/RegEx/cmake-build-debug/CMakeFiles/RegEx.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/RegEx.dir/depend

