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
CMAKE_SOURCE_DIR = /root/deepracer_ws/aws-deepracer-launcher/async_web_server_cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/deepracer_ws/aws-deepracer-launcher/build/async_web_server_cpp

# Include any dependencies generated for this target.
include test/CMakeFiles/test_web_server.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/test_web_server.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/test_web_server.dir/flags.make

test/CMakeFiles/test_web_server.dir/test_web_server.cpp.o: test/CMakeFiles/test_web_server.dir/flags.make
test/CMakeFiles/test_web_server.dir/test_web_server.cpp.o: /root/deepracer_ws/aws-deepracer-launcher/async_web_server_cpp/test/test_web_server.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/deepracer_ws/aws-deepracer-launcher/build/async_web_server_cpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/test_web_server.dir/test_web_server.cpp.o"
	cd /root/deepracer_ws/aws-deepracer-launcher/build/async_web_server_cpp/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_web_server.dir/test_web_server.cpp.o -c /root/deepracer_ws/aws-deepracer-launcher/async_web_server_cpp/test/test_web_server.cpp

test/CMakeFiles/test_web_server.dir/test_web_server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_web_server.dir/test_web_server.cpp.i"
	cd /root/deepracer_ws/aws-deepracer-launcher/build/async_web_server_cpp/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/deepracer_ws/aws-deepracer-launcher/async_web_server_cpp/test/test_web_server.cpp > CMakeFiles/test_web_server.dir/test_web_server.cpp.i

test/CMakeFiles/test_web_server.dir/test_web_server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_web_server.dir/test_web_server.cpp.s"
	cd /root/deepracer_ws/aws-deepracer-launcher/build/async_web_server_cpp/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/deepracer_ws/aws-deepracer-launcher/async_web_server_cpp/test/test_web_server.cpp -o CMakeFiles/test_web_server.dir/test_web_server.cpp.s

# Object files for target test_web_server
test_web_server_OBJECTS = \
"CMakeFiles/test_web_server.dir/test_web_server.cpp.o"

# External object files for target test_web_server
test_web_server_EXTERNAL_OBJECTS =

test/test_web_server: test/CMakeFiles/test_web_server.dir/test_web_server.cpp.o
test/test_web_server: test/CMakeFiles/test_web_server.dir/build.make
test/test_web_server: libasync_web_server_cpp.so
test/test_web_server: /usr/lib/x86_64-linux-gnu/libssl.so
test/test_web_server: /usr/lib/x86_64-linux-gnu/libcrypto.so
test/test_web_server: /usr/lib/x86_64-linux-gnu/libboost_thread.so.1.71.0
test/test_web_server: /usr/lib/x86_64-linux-gnu/libboost_atomic.so.1.71.0
test/test_web_server: /usr/lib/x86_64-linux-gnu/libboost_system.so.1.71.0
test/test_web_server: /usr/lib/x86_64-linux-gnu/libboost_regex.so.1.71.0
test/test_web_server: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so.1.71.0
test/test_web_server: test/CMakeFiles/test_web_server.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/deepracer_ws/aws-deepracer-launcher/build/async_web_server_cpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_web_server"
	cd /root/deepracer_ws/aws-deepracer-launcher/build/async_web_server_cpp/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_web_server.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/test_web_server.dir/build: test/test_web_server

.PHONY : test/CMakeFiles/test_web_server.dir/build

test/CMakeFiles/test_web_server.dir/clean:
	cd /root/deepracer_ws/aws-deepracer-launcher/build/async_web_server_cpp/test && $(CMAKE_COMMAND) -P CMakeFiles/test_web_server.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/test_web_server.dir/clean

test/CMakeFiles/test_web_server.dir/depend:
	cd /root/deepracer_ws/aws-deepracer-launcher/build/async_web_server_cpp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/deepracer_ws/aws-deepracer-launcher/async_web_server_cpp /root/deepracer_ws/aws-deepracer-launcher/async_web_server_cpp/test /root/deepracer_ws/aws-deepracer-launcher/build/async_web_server_cpp /root/deepracer_ws/aws-deepracer-launcher/build/async_web_server_cpp/test /root/deepracer_ws/aws-deepracer-launcher/build/async_web_server_cpp/test/CMakeFiles/test_web_server.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/test_web_server.dir/depend

