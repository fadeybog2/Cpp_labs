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
CMAKE_SOURCE_DIR = /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/02_andromeda

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/02_andromeda/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/02_andromeda.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/02_andromeda.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/02_andromeda.dir/flags.make

CMakeFiles/02_andromeda.dir/main.cpp.o: CMakeFiles/02_andromeda.dir/flags.make
CMakeFiles/02_andromeda.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/02_andromeda/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/02_andromeda.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/02_andromeda.dir/main.cpp.o -c /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/02_andromeda/main.cpp

CMakeFiles/02_andromeda.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/02_andromeda.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/02_andromeda/main.cpp > CMakeFiles/02_andromeda.dir/main.cpp.i

CMakeFiles/02_andromeda.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/02_andromeda.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/02_andromeda/main.cpp -o CMakeFiles/02_andromeda.dir/main.cpp.s

# Object files for target 02_andromeda
02_andromeda_OBJECTS = \
"CMakeFiles/02_andromeda.dir/main.cpp.o"

# External object files for target 02_andromeda
02_andromeda_EXTERNAL_OBJECTS =

02_andromeda: CMakeFiles/02_andromeda.dir/main.cpp.o
02_andromeda: CMakeFiles/02_andromeda.dir/build.make
02_andromeda: CMakeFiles/02_andromeda.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/02_andromeda/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 02_andromeda"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/02_andromeda.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/02_andromeda.dir/build: 02_andromeda

.PHONY : CMakeFiles/02_andromeda.dir/build

CMakeFiles/02_andromeda.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/02_andromeda.dir/cmake_clean.cmake
.PHONY : CMakeFiles/02_andromeda.dir/clean

CMakeFiles/02_andromeda.dir/depend:
	cd /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/02_andromeda/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/02_andromeda /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/02_andromeda /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/02_andromeda/cmake-build-debug /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/02_andromeda/cmake-build-debug /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/02_andromeda/cmake-build-debug/CMakeFiles/02_andromeda.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/02_andromeda.dir/depend

