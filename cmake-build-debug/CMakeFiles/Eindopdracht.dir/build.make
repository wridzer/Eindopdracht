# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\wridz\CLionProjects\Eindopdracht

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\wridz\CLionProjects\Eindopdracht\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Eindopdracht.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Eindopdracht.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Eindopdracht.dir/flags.make

CMakeFiles/Eindopdracht.dir/main.cpp.obj: CMakeFiles/Eindopdracht.dir/flags.make
CMakeFiles/Eindopdracht.dir/main.cpp.obj: CMakeFiles/Eindopdracht.dir/includes_CXX.rsp
CMakeFiles/Eindopdracht.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\wridz\CLionProjects\Eindopdracht\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Eindopdracht.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Eindopdracht.dir\main.cpp.obj -c C:\Users\wridz\CLionProjects\Eindopdracht\main.cpp

CMakeFiles/Eindopdracht.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Eindopdracht.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\wridz\CLionProjects\Eindopdracht\main.cpp > CMakeFiles\Eindopdracht.dir\main.cpp.i

CMakeFiles/Eindopdracht.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Eindopdracht.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\wridz\CLionProjects\Eindopdracht\main.cpp -o CMakeFiles\Eindopdracht.dir\main.cpp.s

CMakeFiles/Eindopdracht.dir/cmake_modules/Player.cpp.obj: CMakeFiles/Eindopdracht.dir/flags.make
CMakeFiles/Eindopdracht.dir/cmake_modules/Player.cpp.obj: CMakeFiles/Eindopdracht.dir/includes_CXX.rsp
CMakeFiles/Eindopdracht.dir/cmake_modules/Player.cpp.obj: ../cmake_modules/Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\wridz\CLionProjects\Eindopdracht\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Eindopdracht.dir/cmake_modules/Player.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Eindopdracht.dir\cmake_modules\Player.cpp.obj -c C:\Users\wridz\CLionProjects\Eindopdracht\cmake_modules\Player.cpp

CMakeFiles/Eindopdracht.dir/cmake_modules/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Eindopdracht.dir/cmake_modules/Player.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\wridz\CLionProjects\Eindopdracht\cmake_modules\Player.cpp > CMakeFiles\Eindopdracht.dir\cmake_modules\Player.cpp.i

CMakeFiles/Eindopdracht.dir/cmake_modules/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Eindopdracht.dir/cmake_modules/Player.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\wridz\CLionProjects\Eindopdracht\cmake_modules\Player.cpp -o CMakeFiles\Eindopdracht.dir\cmake_modules\Player.cpp.s

# Object files for target Eindopdracht
Eindopdracht_OBJECTS = \
"CMakeFiles/Eindopdracht.dir/main.cpp.obj" \
"CMakeFiles/Eindopdracht.dir/cmake_modules/Player.cpp.obj"

# External object files for target Eindopdracht
Eindopdracht_EXTERNAL_OBJECTS =

Eindopdracht.exe: CMakeFiles/Eindopdracht.dir/main.cpp.obj
Eindopdracht.exe: CMakeFiles/Eindopdracht.dir/cmake_modules/Player.cpp.obj
Eindopdracht.exe: CMakeFiles/Eindopdracht.dir/build.make
Eindopdracht.exe: C:/SFML/lib/libsfml-system-d.a
Eindopdracht.exe: C:/SFML/lib/libsfml-window-d.a
Eindopdracht.exe: C:/SFML/lib/libsfml-graphics-d.a
Eindopdracht.exe: C:/SFML/lib/libsfml-network-d.a
Eindopdracht.exe: C:/SFML/lib/libsfml-audio-d.a
Eindopdracht.exe: CMakeFiles/Eindopdracht.dir/linklibs.rsp
Eindopdracht.exe: CMakeFiles/Eindopdracht.dir/objects1.rsp
Eindopdracht.exe: CMakeFiles/Eindopdracht.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\wridz\CLionProjects\Eindopdracht\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Eindopdracht.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Eindopdracht.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Eindopdracht.dir/build: Eindopdracht.exe

.PHONY : CMakeFiles/Eindopdracht.dir/build

CMakeFiles/Eindopdracht.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Eindopdracht.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Eindopdracht.dir/clean

CMakeFiles/Eindopdracht.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\wridz\CLionProjects\Eindopdracht C:\Users\wridz\CLionProjects\Eindopdracht C:\Users\wridz\CLionProjects\Eindopdracht\cmake-build-debug C:\Users\wridz\CLionProjects\Eindopdracht\cmake-build-debug C:\Users\wridz\CLionProjects\Eindopdracht\cmake-build-debug\CMakeFiles\Eindopdracht.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Eindopdracht.dir/depend

