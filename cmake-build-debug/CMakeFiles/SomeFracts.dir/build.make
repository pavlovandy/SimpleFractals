# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /snap/clion/103/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/103/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/anri/CLionProjects/SomeFracts

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anri/CLionProjects/SomeFracts/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SomeFracts.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SomeFracts.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SomeFracts.dir/flags.make

CMakeFiles/SomeFracts.dir/main.cpp.o: CMakeFiles/SomeFracts.dir/flags.make
CMakeFiles/SomeFracts.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anri/CLionProjects/SomeFracts/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SomeFracts.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SomeFracts.dir/main.cpp.o -c /home/anri/CLionProjects/SomeFracts/main.cpp

CMakeFiles/SomeFracts.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SomeFracts.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anri/CLionProjects/SomeFracts/main.cpp > CMakeFiles/SomeFracts.dir/main.cpp.i

CMakeFiles/SomeFracts.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SomeFracts.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anri/CLionProjects/SomeFracts/main.cpp -o CMakeFiles/SomeFracts.dir/main.cpp.s

CMakeFiles/SomeFracts.dir/sdl-library.cpp.o: CMakeFiles/SomeFracts.dir/flags.make
CMakeFiles/SomeFracts.dir/sdl-library.cpp.o: ../sdl-library.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anri/CLionProjects/SomeFracts/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/SomeFracts.dir/sdl-library.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SomeFracts.dir/sdl-library.cpp.o -c /home/anri/CLionProjects/SomeFracts/sdl-library.cpp

CMakeFiles/SomeFracts.dir/sdl-library.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SomeFracts.dir/sdl-library.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anri/CLionProjects/SomeFracts/sdl-library.cpp > CMakeFiles/SomeFracts.dir/sdl-library.cpp.i

CMakeFiles/SomeFracts.dir/sdl-library.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SomeFracts.dir/sdl-library.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anri/CLionProjects/SomeFracts/sdl-library.cpp -o CMakeFiles/SomeFracts.dir/sdl-library.cpp.s

CMakeFiles/SomeFracts.dir/mandelbrhot.cpp.o: CMakeFiles/SomeFracts.dir/flags.make
CMakeFiles/SomeFracts.dir/mandelbrhot.cpp.o: ../mandelbrhot.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anri/CLionProjects/SomeFracts/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/SomeFracts.dir/mandelbrhot.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SomeFracts.dir/mandelbrhot.cpp.o -c /home/anri/CLionProjects/SomeFracts/mandelbrhot.cpp

CMakeFiles/SomeFracts.dir/mandelbrhot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SomeFracts.dir/mandelbrhot.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anri/CLionProjects/SomeFracts/mandelbrhot.cpp > CMakeFiles/SomeFracts.dir/mandelbrhot.cpp.i

CMakeFiles/SomeFracts.dir/mandelbrhot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SomeFracts.dir/mandelbrhot.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anri/CLionProjects/SomeFracts/mandelbrhot.cpp -o CMakeFiles/SomeFracts.dir/mandelbrhot.cpp.s

# Object files for target SomeFracts
SomeFracts_OBJECTS = \
"CMakeFiles/SomeFracts.dir/main.cpp.o" \
"CMakeFiles/SomeFracts.dir/sdl-library.cpp.o" \
"CMakeFiles/SomeFracts.dir/mandelbrhot.cpp.o"

# External object files for target SomeFracts
SomeFracts_EXTERNAL_OBJECTS =

../SomeFracts: CMakeFiles/SomeFracts.dir/main.cpp.o
../SomeFracts: CMakeFiles/SomeFracts.dir/sdl-library.cpp.o
../SomeFracts: CMakeFiles/SomeFracts.dir/mandelbrhot.cpp.o
../SomeFracts: CMakeFiles/SomeFracts.dir/build.make
../SomeFracts: /usr/lib/x86_64-linux-gnu/libSDL2main.a
../SomeFracts: /usr/lib/x86_64-linux-gnu/libSDL2.so
../SomeFracts: /usr/lib/x86_64-linux-gnu/libSDL2_image.so
../SomeFracts: /usr/lib/x86_64-linux-gnu/libSDL2_ttf.so
../SomeFracts: CMakeFiles/SomeFracts.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/anri/CLionProjects/SomeFracts/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable ../SomeFracts"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SomeFracts.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SomeFracts.dir/build: ../SomeFracts

.PHONY : CMakeFiles/SomeFracts.dir/build

CMakeFiles/SomeFracts.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SomeFracts.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SomeFracts.dir/clean

CMakeFiles/SomeFracts.dir/depend:
	cd /home/anri/CLionProjects/SomeFracts/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anri/CLionProjects/SomeFracts /home/anri/CLionProjects/SomeFracts /home/anri/CLionProjects/SomeFracts/cmake-build-debug /home/anri/CLionProjects/SomeFracts/cmake-build-debug /home/anri/CLionProjects/SomeFracts/cmake-build-debug/CMakeFiles/SomeFracts.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SomeFracts.dir/depend

