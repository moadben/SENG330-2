# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_SOURCE_DIR = /home/moad/Desktop/SENG330-2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/moad/Desktop/SENG330-2/build

# Include any dependencies generated for this target.
include CMakeFiles/YourLib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/YourLib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/YourLib.dir/flags.make

CMakeFiles/YourLib.dir/lift.cpp.o: CMakeFiles/YourLib.dir/flags.make
CMakeFiles/YourLib.dir/lift.cpp.o: ../lift.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/moad/Desktop/SENG330-2/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/YourLib.dir/lift.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/YourLib.dir/lift.cpp.o -c /home/moad/Desktop/SENG330-2/lift.cpp

CMakeFiles/YourLib.dir/lift.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/YourLib.dir/lift.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/moad/Desktop/SENG330-2/lift.cpp > CMakeFiles/YourLib.dir/lift.cpp.i

CMakeFiles/YourLib.dir/lift.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/YourLib.dir/lift.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/moad/Desktop/SENG330-2/lift.cpp -o CMakeFiles/YourLib.dir/lift.cpp.s

CMakeFiles/YourLib.dir/lift.cpp.o.requires:
.PHONY : CMakeFiles/YourLib.dir/lift.cpp.o.requires

CMakeFiles/YourLib.dir/lift.cpp.o.provides: CMakeFiles/YourLib.dir/lift.cpp.o.requires
	$(MAKE) -f CMakeFiles/YourLib.dir/build.make CMakeFiles/YourLib.dir/lift.cpp.o.provides.build
.PHONY : CMakeFiles/YourLib.dir/lift.cpp.o.provides

CMakeFiles/YourLib.dir/lift.cpp.o.provides.build: CMakeFiles/YourLib.dir/lift.cpp.o

CMakeFiles/YourLib.dir/machine.cpp.o: CMakeFiles/YourLib.dir/flags.make
CMakeFiles/YourLib.dir/machine.cpp.o: ../machine.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/moad/Desktop/SENG330-2/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/YourLib.dir/machine.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/YourLib.dir/machine.cpp.o -c /home/moad/Desktop/SENG330-2/machine.cpp

CMakeFiles/YourLib.dir/machine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/YourLib.dir/machine.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/moad/Desktop/SENG330-2/machine.cpp > CMakeFiles/YourLib.dir/machine.cpp.i

CMakeFiles/YourLib.dir/machine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/YourLib.dir/machine.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/moad/Desktop/SENG330-2/machine.cpp -o CMakeFiles/YourLib.dir/machine.cpp.s

CMakeFiles/YourLib.dir/machine.cpp.o.requires:
.PHONY : CMakeFiles/YourLib.dir/machine.cpp.o.requires

CMakeFiles/YourLib.dir/machine.cpp.o.provides: CMakeFiles/YourLib.dir/machine.cpp.o.requires
	$(MAKE) -f CMakeFiles/YourLib.dir/build.make CMakeFiles/YourLib.dir/machine.cpp.o.provides.build
.PHONY : CMakeFiles/YourLib.dir/machine.cpp.o.provides

CMakeFiles/YourLib.dir/machine.cpp.o.provides.build: CMakeFiles/YourLib.dir/machine.cpp.o

CMakeFiles/YourLib.dir/fitplanet.cpp.o: CMakeFiles/YourLib.dir/flags.make
CMakeFiles/YourLib.dir/fitplanet.cpp.o: ../fitplanet.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/moad/Desktop/SENG330-2/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/YourLib.dir/fitplanet.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/YourLib.dir/fitplanet.cpp.o -c /home/moad/Desktop/SENG330-2/fitplanet.cpp

CMakeFiles/YourLib.dir/fitplanet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/YourLib.dir/fitplanet.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/moad/Desktop/SENG330-2/fitplanet.cpp > CMakeFiles/YourLib.dir/fitplanet.cpp.i

CMakeFiles/YourLib.dir/fitplanet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/YourLib.dir/fitplanet.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/moad/Desktop/SENG330-2/fitplanet.cpp -o CMakeFiles/YourLib.dir/fitplanet.cpp.s

CMakeFiles/YourLib.dir/fitplanet.cpp.o.requires:
.PHONY : CMakeFiles/YourLib.dir/fitplanet.cpp.o.requires

CMakeFiles/YourLib.dir/fitplanet.cpp.o.provides: CMakeFiles/YourLib.dir/fitplanet.cpp.o.requires
	$(MAKE) -f CMakeFiles/YourLib.dir/build.make CMakeFiles/YourLib.dir/fitplanet.cpp.o.provides.build
.PHONY : CMakeFiles/YourLib.dir/fitplanet.cpp.o.provides

CMakeFiles/YourLib.dir/fitplanet.cpp.o.provides.build: CMakeFiles/YourLib.dir/fitplanet.cpp.o

CMakeFiles/YourLib.dir/bracelet.cpp.o: CMakeFiles/YourLib.dir/flags.make
CMakeFiles/YourLib.dir/bracelet.cpp.o: ../bracelet.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/moad/Desktop/SENG330-2/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/YourLib.dir/bracelet.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/YourLib.dir/bracelet.cpp.o -c /home/moad/Desktop/SENG330-2/bracelet.cpp

CMakeFiles/YourLib.dir/bracelet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/YourLib.dir/bracelet.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/moad/Desktop/SENG330-2/bracelet.cpp > CMakeFiles/YourLib.dir/bracelet.cpp.i

CMakeFiles/YourLib.dir/bracelet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/YourLib.dir/bracelet.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/moad/Desktop/SENG330-2/bracelet.cpp -o CMakeFiles/YourLib.dir/bracelet.cpp.s

CMakeFiles/YourLib.dir/bracelet.cpp.o.requires:
.PHONY : CMakeFiles/YourLib.dir/bracelet.cpp.o.requires

CMakeFiles/YourLib.dir/bracelet.cpp.o.provides: CMakeFiles/YourLib.dir/bracelet.cpp.o.requires
	$(MAKE) -f CMakeFiles/YourLib.dir/build.make CMakeFiles/YourLib.dir/bracelet.cpp.o.provides.build
.PHONY : CMakeFiles/YourLib.dir/bracelet.cpp.o.provides

CMakeFiles/YourLib.dir/bracelet.cpp.o.provides.build: CMakeFiles/YourLib.dir/bracelet.cpp.o

CMakeFiles/YourLib.dir/member.cpp.o: CMakeFiles/YourLib.dir/flags.make
CMakeFiles/YourLib.dir/member.cpp.o: ../member.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/moad/Desktop/SENG330-2/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/YourLib.dir/member.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/YourLib.dir/member.cpp.o -c /home/moad/Desktop/SENG330-2/member.cpp

CMakeFiles/YourLib.dir/member.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/YourLib.dir/member.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/moad/Desktop/SENG330-2/member.cpp > CMakeFiles/YourLib.dir/member.cpp.i

CMakeFiles/YourLib.dir/member.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/YourLib.dir/member.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/moad/Desktop/SENG330-2/member.cpp -o CMakeFiles/YourLib.dir/member.cpp.s

CMakeFiles/YourLib.dir/member.cpp.o.requires:
.PHONY : CMakeFiles/YourLib.dir/member.cpp.o.requires

CMakeFiles/YourLib.dir/member.cpp.o.provides: CMakeFiles/YourLib.dir/member.cpp.o.requires
	$(MAKE) -f CMakeFiles/YourLib.dir/build.make CMakeFiles/YourLib.dir/member.cpp.o.provides.build
.PHONY : CMakeFiles/YourLib.dir/member.cpp.o.provides

CMakeFiles/YourLib.dir/member.cpp.o.provides.build: CMakeFiles/YourLib.dir/member.cpp.o

CMakeFiles/YourLib.dir/elliptical.cpp.o: CMakeFiles/YourLib.dir/flags.make
CMakeFiles/YourLib.dir/elliptical.cpp.o: ../elliptical.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/moad/Desktop/SENG330-2/build/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/YourLib.dir/elliptical.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/YourLib.dir/elliptical.cpp.o -c /home/moad/Desktop/SENG330-2/elliptical.cpp

CMakeFiles/YourLib.dir/elliptical.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/YourLib.dir/elliptical.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/moad/Desktop/SENG330-2/elliptical.cpp > CMakeFiles/YourLib.dir/elliptical.cpp.i

CMakeFiles/YourLib.dir/elliptical.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/YourLib.dir/elliptical.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/moad/Desktop/SENG330-2/elliptical.cpp -o CMakeFiles/YourLib.dir/elliptical.cpp.s

CMakeFiles/YourLib.dir/elliptical.cpp.o.requires:
.PHONY : CMakeFiles/YourLib.dir/elliptical.cpp.o.requires

CMakeFiles/YourLib.dir/elliptical.cpp.o.provides: CMakeFiles/YourLib.dir/elliptical.cpp.o.requires
	$(MAKE) -f CMakeFiles/YourLib.dir/build.make CMakeFiles/YourLib.dir/elliptical.cpp.o.provides.build
.PHONY : CMakeFiles/YourLib.dir/elliptical.cpp.o.provides

CMakeFiles/YourLib.dir/elliptical.cpp.o.provides.build: CMakeFiles/YourLib.dir/elliptical.cpp.o

# Object files for target YourLib
YourLib_OBJECTS = \
"CMakeFiles/YourLib.dir/lift.cpp.o" \
"CMakeFiles/YourLib.dir/machine.cpp.o" \
"CMakeFiles/YourLib.dir/fitplanet.cpp.o" \
"CMakeFiles/YourLib.dir/bracelet.cpp.o" \
"CMakeFiles/YourLib.dir/member.cpp.o" \
"CMakeFiles/YourLib.dir/elliptical.cpp.o"

# External object files for target YourLib
YourLib_EXTERNAL_OBJECTS =

libYourLib.a: CMakeFiles/YourLib.dir/lift.cpp.o
libYourLib.a: CMakeFiles/YourLib.dir/machine.cpp.o
libYourLib.a: CMakeFiles/YourLib.dir/fitplanet.cpp.o
libYourLib.a: CMakeFiles/YourLib.dir/bracelet.cpp.o
libYourLib.a: CMakeFiles/YourLib.dir/member.cpp.o
libYourLib.a: CMakeFiles/YourLib.dir/elliptical.cpp.o
libYourLib.a: CMakeFiles/YourLib.dir/build.make
libYourLib.a: CMakeFiles/YourLib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library libYourLib.a"
	$(CMAKE_COMMAND) -P CMakeFiles/YourLib.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/YourLib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/YourLib.dir/build: libYourLib.a
.PHONY : CMakeFiles/YourLib.dir/build

CMakeFiles/YourLib.dir/requires: CMakeFiles/YourLib.dir/lift.cpp.o.requires
CMakeFiles/YourLib.dir/requires: CMakeFiles/YourLib.dir/machine.cpp.o.requires
CMakeFiles/YourLib.dir/requires: CMakeFiles/YourLib.dir/fitplanet.cpp.o.requires
CMakeFiles/YourLib.dir/requires: CMakeFiles/YourLib.dir/bracelet.cpp.o.requires
CMakeFiles/YourLib.dir/requires: CMakeFiles/YourLib.dir/member.cpp.o.requires
CMakeFiles/YourLib.dir/requires: CMakeFiles/YourLib.dir/elliptical.cpp.o.requires
.PHONY : CMakeFiles/YourLib.dir/requires

CMakeFiles/YourLib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/YourLib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/YourLib.dir/clean

CMakeFiles/YourLib.dir/depend:
	cd /home/moad/Desktop/SENG330-2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/moad/Desktop/SENG330-2 /home/moad/Desktop/SENG330-2 /home/moad/Desktop/SENG330-2/build /home/moad/Desktop/SENG330-2/build /home/moad/Desktop/SENG330-2/build/CMakeFiles/YourLib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/YourLib.dir/depend
