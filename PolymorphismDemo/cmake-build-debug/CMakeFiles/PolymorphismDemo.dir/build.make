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
CMAKE_COMMAND = /cygdrive/c/Users/elise/AppData/Local/JetBrains/CLion2020.3/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/elise/AppData/Local/JetBrains/CLion2020.3/cygwin_cmake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/d/Users/elise/CLionProjects/PolymorphismDemo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/d/Users/elise/CLionProjects/PolymorphismDemo/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/PolymorphismDemo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PolymorphismDemo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PolymorphismDemo.dir/flags.make

CMakeFiles/PolymorphismDemo.dir/main.cpp.o: CMakeFiles/PolymorphismDemo.dir/flags.make
CMakeFiles/PolymorphismDemo.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/Users/elise/CLionProjects/PolymorphismDemo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PolymorphismDemo.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PolymorphismDemo.dir/main.cpp.o -c /cygdrive/d/Users/elise/CLionProjects/PolymorphismDemo/main.cpp

CMakeFiles/PolymorphismDemo.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PolymorphismDemo.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/d/Users/elise/CLionProjects/PolymorphismDemo/main.cpp > CMakeFiles/PolymorphismDemo.dir/main.cpp.i

CMakeFiles/PolymorphismDemo.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PolymorphismDemo.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/d/Users/elise/CLionProjects/PolymorphismDemo/main.cpp -o CMakeFiles/PolymorphismDemo.dir/main.cpp.s

# Object files for target PolymorphismDemo
PolymorphismDemo_OBJECTS = \
"CMakeFiles/PolymorphismDemo.dir/main.cpp.o"

# External object files for target PolymorphismDemo
PolymorphismDemo_EXTERNAL_OBJECTS =

PolymorphismDemo.exe: CMakeFiles/PolymorphismDemo.dir/main.cpp.o
PolymorphismDemo.exe: CMakeFiles/PolymorphismDemo.dir/build.make
PolymorphismDemo.exe: CMakeFiles/PolymorphismDemo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/d/Users/elise/CLionProjects/PolymorphismDemo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable PolymorphismDemo.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PolymorphismDemo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PolymorphismDemo.dir/build: PolymorphismDemo.exe

.PHONY : CMakeFiles/PolymorphismDemo.dir/build

CMakeFiles/PolymorphismDemo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PolymorphismDemo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PolymorphismDemo.dir/clean

CMakeFiles/PolymorphismDemo.dir/depend:
	cd /cygdrive/d/Users/elise/CLionProjects/PolymorphismDemo/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/d/Users/elise/CLionProjects/PolymorphismDemo /cygdrive/d/Users/elise/CLionProjects/PolymorphismDemo /cygdrive/d/Users/elise/CLionProjects/PolymorphismDemo/cmake-build-debug /cygdrive/d/Users/elise/CLionProjects/PolymorphismDemo/cmake-build-debug /cygdrive/d/Users/elise/CLionProjects/PolymorphismDemo/cmake-build-debug/CMakeFiles/PolymorphismDemo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PolymorphismDemo.dir/depend

