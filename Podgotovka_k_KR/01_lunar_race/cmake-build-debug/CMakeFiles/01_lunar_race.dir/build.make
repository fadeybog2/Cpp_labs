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
CMAKE_SOURCE_DIR = /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/01_lunar_race

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/01_lunar_race/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/01_lunar_race.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/01_lunar_race.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/01_lunar_race.dir/flags.make

CMakeFiles/01_lunar_race.dir/main.cpp.o: CMakeFiles/01_lunar_race.dir/flags.make
CMakeFiles/01_lunar_race.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/01_lunar_race/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/01_lunar_race.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/01_lunar_race.dir/main.cpp.o -c /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/01_lunar_race/main.cpp

CMakeFiles/01_lunar_race.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/01_lunar_race.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/01_lunar_race/main.cpp > CMakeFiles/01_lunar_race.dir/main.cpp.i

CMakeFiles/01_lunar_race.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/01_lunar_race.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/01_lunar_race/main.cpp -o CMakeFiles/01_lunar_race.dir/main.cpp.s

# Object files for target 01_lunar_race
01_lunar_race_OBJECTS = \
"CMakeFiles/01_lunar_race.dir/main.cpp.o"

# External object files for target 01_lunar_race
01_lunar_race_EXTERNAL_OBJECTS =

01_lunar_race: CMakeFiles/01_lunar_race.dir/main.cpp.o
01_lunar_race: CMakeFiles/01_lunar_race.dir/build.make
01_lunar_race: CMakeFiles/01_lunar_race.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/01_lunar_race/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 01_lunar_race"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/01_lunar_race.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/01_lunar_race.dir/build: 01_lunar_race

.PHONY : CMakeFiles/01_lunar_race.dir/build

CMakeFiles/01_lunar_race.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/01_lunar_race.dir/cmake_clean.cmake
.PHONY : CMakeFiles/01_lunar_race.dir/clean

CMakeFiles/01_lunar_race.dir/depend:
	cd /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/01_lunar_race/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/01_lunar_race /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/01_lunar_race /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/01_lunar_race/cmake-build-debug /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/01_lunar_race/cmake-build-debug /mnt/c/Users/Fadey/Documents/GitHub/Cpp_labs/Podgotovka_k_KR/01_lunar_race/cmake-build-debug/CMakeFiles/01_lunar_race.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/01_lunar_race.dir/depend

