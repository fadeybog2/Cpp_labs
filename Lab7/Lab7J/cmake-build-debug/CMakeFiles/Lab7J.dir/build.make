# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /mnt/c/Users/Fadey/Downloads/cmake-3.17.5-Linux-x86_64/bin/cmake

# The command to remove a file.
RM = /mnt/c/Users/Fadey/Downloads/cmake-3.17.5-Linux-x86_64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/Fadey/CLionProjects/Lab7/Lab7J

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/Fadey/CLionProjects/Lab7/Lab7J/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Lab7J.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lab7J.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lab7J.dir/flags.make

CMakeFiles/Lab7J.dir/main.cpp.o: CMakeFiles/Lab7J.dir/flags.make
CMakeFiles/Lab7J.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/Fadey/CLionProjects/Lab7/Lab7J/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lab7J.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lab7J.dir/main.cpp.o -c /mnt/c/Users/Fadey/CLionProjects/Lab7/Lab7J/main.cpp

CMakeFiles/Lab7J.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab7J.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/Fadey/CLionProjects/Lab7/Lab7J/main.cpp > CMakeFiles/Lab7J.dir/main.cpp.i

CMakeFiles/Lab7J.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab7J.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/Fadey/CLionProjects/Lab7/Lab7J/main.cpp -o CMakeFiles/Lab7J.dir/main.cpp.s

# Object files for target Lab7J
Lab7J_OBJECTS = \
"CMakeFiles/Lab7J.dir/main.cpp.o"

# External object files for target Lab7J
Lab7J_EXTERNAL_OBJECTS =

Lab7J: CMakeFiles/Lab7J.dir/main.cpp.o
Lab7J: CMakeFiles/Lab7J.dir/build.make
Lab7J: CMakeFiles/Lab7J.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/Fadey/CLionProjects/Lab7/Lab7J/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Lab7J"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lab7J.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lab7J.dir/build: Lab7J

.PHONY : CMakeFiles/Lab7J.dir/build

CMakeFiles/Lab7J.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lab7J.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lab7J.dir/clean

CMakeFiles/Lab7J.dir/depend:
	cd /mnt/c/Users/Fadey/CLionProjects/Lab7/Lab7J/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/Fadey/CLionProjects/Lab7/Lab7J /mnt/c/Users/Fadey/CLionProjects/Lab7/Lab7J /mnt/c/Users/Fadey/CLionProjects/Lab7/Lab7J/cmake-build-debug /mnt/c/Users/Fadey/CLionProjects/Lab7/Lab7J/cmake-build-debug /mnt/c/Users/Fadey/CLionProjects/Lab7/Lab7J/cmake-build-debug/CMakeFiles/Lab7J.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lab7J.dir/depend

