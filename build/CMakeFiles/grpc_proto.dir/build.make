# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

# Produce verbose output by default.
VERBOSE = 1

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/skylanwei/workspaces/ggg_project/protos

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/skylanwei/workspaces/ggg_project/protos/build

# Include any dependencies generated for this target.
include CMakeFiles/grpc_proto.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/grpc_proto.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/grpc_proto.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/grpc_proto.dir/flags.make

CMakeFiles/grpc_proto.dir/protos_pkg/ggg_template_server.grpc.pb.cc.o: CMakeFiles/grpc_proto.dir/flags.make
CMakeFiles/grpc_proto.dir/protos_pkg/ggg_template_server.grpc.pb.cc.o: ../protos_pkg/ggg_template_server.grpc.pb.cc
CMakeFiles/grpc_proto.dir/protos_pkg/ggg_template_server.grpc.pb.cc.o: CMakeFiles/grpc_proto.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/skylanwei/workspaces/ggg_project/protos/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/grpc_proto.dir/protos_pkg/ggg_template_server.grpc.pb.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/grpc_proto.dir/protos_pkg/ggg_template_server.grpc.pb.cc.o -MF CMakeFiles/grpc_proto.dir/protos_pkg/ggg_template_server.grpc.pb.cc.o.d -o CMakeFiles/grpc_proto.dir/protos_pkg/ggg_template_server.grpc.pb.cc.o -c /home/skylanwei/workspaces/ggg_project/protos/protos_pkg/ggg_template_server.grpc.pb.cc

CMakeFiles/grpc_proto.dir/protos_pkg/ggg_template_server.grpc.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/grpc_proto.dir/protos_pkg/ggg_template_server.grpc.pb.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/skylanwei/workspaces/ggg_project/protos/protos_pkg/ggg_template_server.grpc.pb.cc > CMakeFiles/grpc_proto.dir/protos_pkg/ggg_template_server.grpc.pb.cc.i

CMakeFiles/grpc_proto.dir/protos_pkg/ggg_template_server.grpc.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/grpc_proto.dir/protos_pkg/ggg_template_server.grpc.pb.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/skylanwei/workspaces/ggg_project/protos/protos_pkg/ggg_template_server.grpc.pb.cc -o CMakeFiles/grpc_proto.dir/protos_pkg/ggg_template_server.grpc.pb.cc.s

CMakeFiles/grpc_proto.dir/protos_pkg/ggg_template_server.pb.cc.o: CMakeFiles/grpc_proto.dir/flags.make
CMakeFiles/grpc_proto.dir/protos_pkg/ggg_template_server.pb.cc.o: ../protos_pkg/ggg_template_server.pb.cc
CMakeFiles/grpc_proto.dir/protos_pkg/ggg_template_server.pb.cc.o: CMakeFiles/grpc_proto.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/skylanwei/workspaces/ggg_project/protos/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/grpc_proto.dir/protos_pkg/ggg_template_server.pb.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/grpc_proto.dir/protos_pkg/ggg_template_server.pb.cc.o -MF CMakeFiles/grpc_proto.dir/protos_pkg/ggg_template_server.pb.cc.o.d -o CMakeFiles/grpc_proto.dir/protos_pkg/ggg_template_server.pb.cc.o -c /home/skylanwei/workspaces/ggg_project/protos/protos_pkg/ggg_template_server.pb.cc

CMakeFiles/grpc_proto.dir/protos_pkg/ggg_template_server.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/grpc_proto.dir/protos_pkg/ggg_template_server.pb.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/skylanwei/workspaces/ggg_project/protos/protos_pkg/ggg_template_server.pb.cc > CMakeFiles/grpc_proto.dir/protos_pkg/ggg_template_server.pb.cc.i

CMakeFiles/grpc_proto.dir/protos_pkg/ggg_template_server.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/grpc_proto.dir/protos_pkg/ggg_template_server.pb.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/skylanwei/workspaces/ggg_project/protos/protos_pkg/ggg_template_server.pb.cc -o CMakeFiles/grpc_proto.dir/protos_pkg/ggg_template_server.pb.cc.s

CMakeFiles/grpc_proto.dir/protos_pkg/ggg_test_server.grpc.pb.cc.o: CMakeFiles/grpc_proto.dir/flags.make
CMakeFiles/grpc_proto.dir/protos_pkg/ggg_test_server.grpc.pb.cc.o: ../protos_pkg/ggg_test_server.grpc.pb.cc
CMakeFiles/grpc_proto.dir/protos_pkg/ggg_test_server.grpc.pb.cc.o: CMakeFiles/grpc_proto.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/skylanwei/workspaces/ggg_project/protos/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/grpc_proto.dir/protos_pkg/ggg_test_server.grpc.pb.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/grpc_proto.dir/protos_pkg/ggg_test_server.grpc.pb.cc.o -MF CMakeFiles/grpc_proto.dir/protos_pkg/ggg_test_server.grpc.pb.cc.o.d -o CMakeFiles/grpc_proto.dir/protos_pkg/ggg_test_server.grpc.pb.cc.o -c /home/skylanwei/workspaces/ggg_project/protos/protos_pkg/ggg_test_server.grpc.pb.cc

CMakeFiles/grpc_proto.dir/protos_pkg/ggg_test_server.grpc.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/grpc_proto.dir/protos_pkg/ggg_test_server.grpc.pb.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/skylanwei/workspaces/ggg_project/protos/protos_pkg/ggg_test_server.grpc.pb.cc > CMakeFiles/grpc_proto.dir/protos_pkg/ggg_test_server.grpc.pb.cc.i

CMakeFiles/grpc_proto.dir/protos_pkg/ggg_test_server.grpc.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/grpc_proto.dir/protos_pkg/ggg_test_server.grpc.pb.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/skylanwei/workspaces/ggg_project/protos/protos_pkg/ggg_test_server.grpc.pb.cc -o CMakeFiles/grpc_proto.dir/protos_pkg/ggg_test_server.grpc.pb.cc.s

CMakeFiles/grpc_proto.dir/protos_pkg/ggg_test_server.pb.cc.o: CMakeFiles/grpc_proto.dir/flags.make
CMakeFiles/grpc_proto.dir/protos_pkg/ggg_test_server.pb.cc.o: ../protos_pkg/ggg_test_server.pb.cc
CMakeFiles/grpc_proto.dir/protos_pkg/ggg_test_server.pb.cc.o: CMakeFiles/grpc_proto.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/skylanwei/workspaces/ggg_project/protos/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/grpc_proto.dir/protos_pkg/ggg_test_server.pb.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/grpc_proto.dir/protos_pkg/ggg_test_server.pb.cc.o -MF CMakeFiles/grpc_proto.dir/protos_pkg/ggg_test_server.pb.cc.o.d -o CMakeFiles/grpc_proto.dir/protos_pkg/ggg_test_server.pb.cc.o -c /home/skylanwei/workspaces/ggg_project/protos/protos_pkg/ggg_test_server.pb.cc

CMakeFiles/grpc_proto.dir/protos_pkg/ggg_test_server.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/grpc_proto.dir/protos_pkg/ggg_test_server.pb.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/skylanwei/workspaces/ggg_project/protos/protos_pkg/ggg_test_server.pb.cc > CMakeFiles/grpc_proto.dir/protos_pkg/ggg_test_server.pb.cc.i

CMakeFiles/grpc_proto.dir/protos_pkg/ggg_test_server.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/grpc_proto.dir/protos_pkg/ggg_test_server.pb.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/skylanwei/workspaces/ggg_project/protos/protos_pkg/ggg_test_server.pb.cc -o CMakeFiles/grpc_proto.dir/protos_pkg/ggg_test_server.pb.cc.s

# Object files for target grpc_proto
grpc_proto_OBJECTS = \
"CMakeFiles/grpc_proto.dir/protos_pkg/ggg_template_server.grpc.pb.cc.o" \
"CMakeFiles/grpc_proto.dir/protos_pkg/ggg_template_server.pb.cc.o" \
"CMakeFiles/grpc_proto.dir/protos_pkg/ggg_test_server.grpc.pb.cc.o" \
"CMakeFiles/grpc_proto.dir/protos_pkg/ggg_test_server.pb.cc.o"

# External object files for target grpc_proto
grpc_proto_EXTERNAL_OBJECTS =

../lib/libgrpc_proto.a: CMakeFiles/grpc_proto.dir/protos_pkg/ggg_template_server.grpc.pb.cc.o
../lib/libgrpc_proto.a: CMakeFiles/grpc_proto.dir/protos_pkg/ggg_template_server.pb.cc.o
../lib/libgrpc_proto.a: CMakeFiles/grpc_proto.dir/protos_pkg/ggg_test_server.grpc.pb.cc.o
../lib/libgrpc_proto.a: CMakeFiles/grpc_proto.dir/protos_pkg/ggg_test_server.pb.cc.o
../lib/libgrpc_proto.a: CMakeFiles/grpc_proto.dir/build.make
../lib/libgrpc_proto.a: CMakeFiles/grpc_proto.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/skylanwei/workspaces/ggg_project/protos/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library ../lib/libgrpc_proto.a"
	$(CMAKE_COMMAND) -P CMakeFiles/grpc_proto.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/grpc_proto.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/grpc_proto.dir/build: ../lib/libgrpc_proto.a
.PHONY : CMakeFiles/grpc_proto.dir/build

CMakeFiles/grpc_proto.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/grpc_proto.dir/cmake_clean.cmake
.PHONY : CMakeFiles/grpc_proto.dir/clean

CMakeFiles/grpc_proto.dir/depend:
	cd /home/skylanwei/workspaces/ggg_project/protos/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/skylanwei/workspaces/ggg_project/protos /home/skylanwei/workspaces/ggg_project/protos /home/skylanwei/workspaces/ggg_project/protos/build /home/skylanwei/workspaces/ggg_project/protos/build /home/skylanwei/workspaces/ggg_project/protos/build/CMakeFiles/grpc_proto.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/grpc_proto.dir/depend

