# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Dynamic2/D

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Dynamic2/D/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/D.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/D.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/D.dir/flags.make

CMakeFiles/D.dir/main.cpp.o: CMakeFiles/D.dir/flags.make
CMakeFiles/D.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Dynamic2/D/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/D.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/D.dir/main.cpp.o -c /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Dynamic2/D/main.cpp

CMakeFiles/D.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/D.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Dynamic2/D/main.cpp > CMakeFiles/D.dir/main.cpp.i

CMakeFiles/D.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/D.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Dynamic2/D/main.cpp -o CMakeFiles/D.dir/main.cpp.s

# Object files for target D
D_OBJECTS = \
"CMakeFiles/D.dir/main.cpp.o"

# External object files for target D
D_EXTERNAL_OBJECTS =

D : CMakeFiles/D.dir/main.cpp.o
D : CMakeFiles/D.dir/build.make
D : CMakeFiles/D.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Dynamic2/D/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable D"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/D.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/D.dir/build: D

.PHONY : CMakeFiles/D.dir/build

CMakeFiles/D.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/D.dir/cmake_clean.cmake
.PHONY : CMakeFiles/D.dir/clean

CMakeFiles/D.dir/depend:
	cd /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Dynamic2/D/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Dynamic2/D /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Dynamic2/D /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Dynamic2/D/cmake-build-debug /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Dynamic2/D/cmake-build-debug /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Dynamic2/D/cmake-build-debug/CMakeFiles/D.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/D.dir/depend

