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
CMAKE_SOURCE_DIR = /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/cylinders

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/cylinders/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cylinders.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cylinders.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cylinders.dir/flags.make

CMakeFiles/cylinders.dir/main.cpp.o: CMakeFiles/cylinders.dir/flags.make
CMakeFiles/cylinders.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/cylinders/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cylinders.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cylinders.dir/main.cpp.o -c /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/cylinders/main.cpp

CMakeFiles/cylinders.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cylinders.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/cylinders/main.cpp > CMakeFiles/cylinders.dir/main.cpp.i

CMakeFiles/cylinders.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cylinders.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/cylinders/main.cpp -o CMakeFiles/cylinders.dir/main.cpp.s

# Object files for target cylinders
cylinders_OBJECTS = \
"CMakeFiles/cylinders.dir/main.cpp.o"

# External object files for target cylinders
cylinders_EXTERNAL_OBJECTS =

cylinders: CMakeFiles/cylinders.dir/main.cpp.o
cylinders: CMakeFiles/cylinders.dir/build.make
cylinders: CMakeFiles/cylinders.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/cylinders/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cylinders"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cylinders.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cylinders.dir/build: cylinders

.PHONY : CMakeFiles/cylinders.dir/build

CMakeFiles/cylinders.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cylinders.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cylinders.dir/clean

CMakeFiles/cylinders.dir/depend:
	cd /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/cylinders/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/cylinders /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/cylinders /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/cylinders/cmake-build-debug /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/cylinders/cmake-build-debug /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/cylinders/cmake-build-debug/CMakeFiles/cylinders.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cylinders.dir/depend

