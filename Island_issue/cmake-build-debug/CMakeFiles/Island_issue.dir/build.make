# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/hepeng/workspace/cpp/puzzle/Island_issue

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/hepeng/workspace/cpp/puzzle/Island_issue/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Island_issue.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Island_issue.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Island_issue.dir/flags.make

CMakeFiles/Island_issue.dir/main.cpp.o: CMakeFiles/Island_issue.dir/flags.make
CMakeFiles/Island_issue.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hepeng/workspace/cpp/puzzle/Island_issue/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Island_issue.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Island_issue.dir/main.cpp.o -c /Users/hepeng/workspace/cpp/puzzle/Island_issue/main.cpp

CMakeFiles/Island_issue.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Island_issue.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hepeng/workspace/cpp/puzzle/Island_issue/main.cpp > CMakeFiles/Island_issue.dir/main.cpp.i

CMakeFiles/Island_issue.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Island_issue.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hepeng/workspace/cpp/puzzle/Island_issue/main.cpp -o CMakeFiles/Island_issue.dir/main.cpp.s

CMakeFiles/Island_issue.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Island_issue.dir/main.cpp.o.requires

CMakeFiles/Island_issue.dir/main.cpp.o.provides: CMakeFiles/Island_issue.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Island_issue.dir/build.make CMakeFiles/Island_issue.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Island_issue.dir/main.cpp.o.provides

CMakeFiles/Island_issue.dir/main.cpp.o.provides.build: CMakeFiles/Island_issue.dir/main.cpp.o


CMakeFiles/Island_issue.dir/copySrc.cpp.o: CMakeFiles/Island_issue.dir/flags.make
CMakeFiles/Island_issue.dir/copySrc.cpp.o: ../copySrc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hepeng/workspace/cpp/puzzle/Island_issue/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Island_issue.dir/copySrc.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Island_issue.dir/copySrc.cpp.o -c /Users/hepeng/workspace/cpp/puzzle/Island_issue/copySrc.cpp

CMakeFiles/Island_issue.dir/copySrc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Island_issue.dir/copySrc.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hepeng/workspace/cpp/puzzle/Island_issue/copySrc.cpp > CMakeFiles/Island_issue.dir/copySrc.cpp.i

CMakeFiles/Island_issue.dir/copySrc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Island_issue.dir/copySrc.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hepeng/workspace/cpp/puzzle/Island_issue/copySrc.cpp -o CMakeFiles/Island_issue.dir/copySrc.cpp.s

CMakeFiles/Island_issue.dir/copySrc.cpp.o.requires:

.PHONY : CMakeFiles/Island_issue.dir/copySrc.cpp.o.requires

CMakeFiles/Island_issue.dir/copySrc.cpp.o.provides: CMakeFiles/Island_issue.dir/copySrc.cpp.o.requires
	$(MAKE) -f CMakeFiles/Island_issue.dir/build.make CMakeFiles/Island_issue.dir/copySrc.cpp.o.provides.build
.PHONY : CMakeFiles/Island_issue.dir/copySrc.cpp.o.provides

CMakeFiles/Island_issue.dir/copySrc.cpp.o.provides.build: CMakeFiles/Island_issue.dir/copySrc.cpp.o


# Object files for target Island_issue
Island_issue_OBJECTS = \
"CMakeFiles/Island_issue.dir/main.cpp.o" \
"CMakeFiles/Island_issue.dir/copySrc.cpp.o"

# External object files for target Island_issue
Island_issue_EXTERNAL_OBJECTS =

Island_issue: CMakeFiles/Island_issue.dir/main.cpp.o
Island_issue: CMakeFiles/Island_issue.dir/copySrc.cpp.o
Island_issue: CMakeFiles/Island_issue.dir/build.make
Island_issue: CMakeFiles/Island_issue.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/hepeng/workspace/cpp/puzzle/Island_issue/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Island_issue"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Island_issue.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Island_issue.dir/build: Island_issue

.PHONY : CMakeFiles/Island_issue.dir/build

CMakeFiles/Island_issue.dir/requires: CMakeFiles/Island_issue.dir/main.cpp.o.requires
CMakeFiles/Island_issue.dir/requires: CMakeFiles/Island_issue.dir/copySrc.cpp.o.requires

.PHONY : CMakeFiles/Island_issue.dir/requires

CMakeFiles/Island_issue.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Island_issue.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Island_issue.dir/clean

CMakeFiles/Island_issue.dir/depend:
	cd /Users/hepeng/workspace/cpp/puzzle/Island_issue/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/hepeng/workspace/cpp/puzzle/Island_issue /Users/hepeng/workspace/cpp/puzzle/Island_issue /Users/hepeng/workspace/cpp/puzzle/Island_issue/cmake-build-debug /Users/hepeng/workspace/cpp/puzzle/Island_issue/cmake-build-debug /Users/hepeng/workspace/cpp/puzzle/Island_issue/cmake-build-debug/CMakeFiles/Island_issue.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Island_issue.dir/depend
