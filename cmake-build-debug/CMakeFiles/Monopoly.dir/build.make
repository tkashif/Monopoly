# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/taimurkashif/Desktop/Monopoly

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/taimurkashif/Desktop/Monopoly/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Monopoly.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Monopoly.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Monopoly.dir/flags.make

CMakeFiles/Monopoly.dir/main.cpp.o: CMakeFiles/Monopoly.dir/flags.make
CMakeFiles/Monopoly.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/taimurkashif/Desktop/Monopoly/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Monopoly.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Monopoly.dir/main.cpp.o -c /Users/taimurkashif/Desktop/Monopoly/main.cpp

CMakeFiles/Monopoly.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Monopoly.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/taimurkashif/Desktop/Monopoly/main.cpp > CMakeFiles/Monopoly.dir/main.cpp.i

CMakeFiles/Monopoly.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Monopoly.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/taimurkashif/Desktop/Monopoly/main.cpp -o CMakeFiles/Monopoly.dir/main.cpp.s

CMakeFiles/Monopoly.dir/Player.cpp.o: CMakeFiles/Monopoly.dir/flags.make
CMakeFiles/Monopoly.dir/Player.cpp.o: ../Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/taimurkashif/Desktop/Monopoly/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Monopoly.dir/Player.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Monopoly.dir/Player.cpp.o -c /Users/taimurkashif/Desktop/Monopoly/Player.cpp

CMakeFiles/Monopoly.dir/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Monopoly.dir/Player.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/taimurkashif/Desktop/Monopoly/Player.cpp > CMakeFiles/Monopoly.dir/Player.cpp.i

CMakeFiles/Monopoly.dir/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Monopoly.dir/Player.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/taimurkashif/Desktop/Monopoly/Player.cpp -o CMakeFiles/Monopoly.dir/Player.cpp.s

CMakeFiles/Monopoly.dir/Board.cpp.o: CMakeFiles/Monopoly.dir/flags.make
CMakeFiles/Monopoly.dir/Board.cpp.o: ../Board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/taimurkashif/Desktop/Monopoly/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Monopoly.dir/Board.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Monopoly.dir/Board.cpp.o -c /Users/taimurkashif/Desktop/Monopoly/Board.cpp

CMakeFiles/Monopoly.dir/Board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Monopoly.dir/Board.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/taimurkashif/Desktop/Monopoly/Board.cpp > CMakeFiles/Monopoly.dir/Board.cpp.i

CMakeFiles/Monopoly.dir/Board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Monopoly.dir/Board.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/taimurkashif/Desktop/Monopoly/Board.cpp -o CMakeFiles/Monopoly.dir/Board.cpp.s

CMakeFiles/Monopoly.dir/Space.cpp.o: CMakeFiles/Monopoly.dir/flags.make
CMakeFiles/Monopoly.dir/Space.cpp.o: ../Space.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/taimurkashif/Desktop/Monopoly/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Monopoly.dir/Space.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Monopoly.dir/Space.cpp.o -c /Users/taimurkashif/Desktop/Monopoly/Space.cpp

CMakeFiles/Monopoly.dir/Space.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Monopoly.dir/Space.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/taimurkashif/Desktop/Monopoly/Space.cpp > CMakeFiles/Monopoly.dir/Space.cpp.i

CMakeFiles/Monopoly.dir/Space.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Monopoly.dir/Space.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/taimurkashif/Desktop/Monopoly/Space.cpp -o CMakeFiles/Monopoly.dir/Space.cpp.s

CMakeFiles/Monopoly.dir/BuyableSpace.cpp.o: CMakeFiles/Monopoly.dir/flags.make
CMakeFiles/Monopoly.dir/BuyableSpace.cpp.o: ../BuyableSpace.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/taimurkashif/Desktop/Monopoly/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Monopoly.dir/BuyableSpace.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Monopoly.dir/BuyableSpace.cpp.o -c /Users/taimurkashif/Desktop/Monopoly/BuyableSpace.cpp

CMakeFiles/Monopoly.dir/BuyableSpace.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Monopoly.dir/BuyableSpace.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/taimurkashif/Desktop/Monopoly/BuyableSpace.cpp > CMakeFiles/Monopoly.dir/BuyableSpace.cpp.i

CMakeFiles/Monopoly.dir/BuyableSpace.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Monopoly.dir/BuyableSpace.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/taimurkashif/Desktop/Monopoly/BuyableSpace.cpp -o CMakeFiles/Monopoly.dir/BuyableSpace.cpp.s

CMakeFiles/Monopoly.dir/NonBuyableSpace.cpp.o: CMakeFiles/Monopoly.dir/flags.make
CMakeFiles/Monopoly.dir/NonBuyableSpace.cpp.o: ../NonBuyableSpace.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/taimurkashif/Desktop/Monopoly/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Monopoly.dir/NonBuyableSpace.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Monopoly.dir/NonBuyableSpace.cpp.o -c /Users/taimurkashif/Desktop/Monopoly/NonBuyableSpace.cpp

CMakeFiles/Monopoly.dir/NonBuyableSpace.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Monopoly.dir/NonBuyableSpace.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/taimurkashif/Desktop/Monopoly/NonBuyableSpace.cpp > CMakeFiles/Monopoly.dir/NonBuyableSpace.cpp.i

CMakeFiles/Monopoly.dir/NonBuyableSpace.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Monopoly.dir/NonBuyableSpace.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/taimurkashif/Desktop/Monopoly/NonBuyableSpace.cpp -o CMakeFiles/Monopoly.dir/NonBuyableSpace.cpp.s

CMakeFiles/Monopoly.dir/PropertySpace.cpp.o: CMakeFiles/Monopoly.dir/flags.make
CMakeFiles/Monopoly.dir/PropertySpace.cpp.o: ../PropertySpace.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/taimurkashif/Desktop/Monopoly/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Monopoly.dir/PropertySpace.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Monopoly.dir/PropertySpace.cpp.o -c /Users/taimurkashif/Desktop/Monopoly/PropertySpace.cpp

CMakeFiles/Monopoly.dir/PropertySpace.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Monopoly.dir/PropertySpace.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/taimurkashif/Desktop/Monopoly/PropertySpace.cpp > CMakeFiles/Monopoly.dir/PropertySpace.cpp.i

CMakeFiles/Monopoly.dir/PropertySpace.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Monopoly.dir/PropertySpace.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/taimurkashif/Desktop/Monopoly/PropertySpace.cpp -o CMakeFiles/Monopoly.dir/PropertySpace.cpp.s

CMakeFiles/Monopoly.dir/RailroadSpace.cpp.o: CMakeFiles/Monopoly.dir/flags.make
CMakeFiles/Monopoly.dir/RailroadSpace.cpp.o: ../RailroadSpace.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/taimurkashif/Desktop/Monopoly/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Monopoly.dir/RailroadSpace.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Monopoly.dir/RailroadSpace.cpp.o -c /Users/taimurkashif/Desktop/Monopoly/RailroadSpace.cpp

CMakeFiles/Monopoly.dir/RailroadSpace.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Monopoly.dir/RailroadSpace.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/taimurkashif/Desktop/Monopoly/RailroadSpace.cpp > CMakeFiles/Monopoly.dir/RailroadSpace.cpp.i

CMakeFiles/Monopoly.dir/RailroadSpace.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Monopoly.dir/RailroadSpace.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/taimurkashif/Desktop/Monopoly/RailroadSpace.cpp -o CMakeFiles/Monopoly.dir/RailroadSpace.cpp.s

CMakeFiles/Monopoly.dir/UtilitySpace.cpp.o: CMakeFiles/Monopoly.dir/flags.make
CMakeFiles/Monopoly.dir/UtilitySpace.cpp.o: ../UtilitySpace.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/taimurkashif/Desktop/Monopoly/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Monopoly.dir/UtilitySpace.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Monopoly.dir/UtilitySpace.cpp.o -c /Users/taimurkashif/Desktop/Monopoly/UtilitySpace.cpp

CMakeFiles/Monopoly.dir/UtilitySpace.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Monopoly.dir/UtilitySpace.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/taimurkashif/Desktop/Monopoly/UtilitySpace.cpp > CMakeFiles/Monopoly.dir/UtilitySpace.cpp.i

CMakeFiles/Monopoly.dir/UtilitySpace.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Monopoly.dir/UtilitySpace.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/taimurkashif/Desktop/Monopoly/UtilitySpace.cpp -o CMakeFiles/Monopoly.dir/UtilitySpace.cpp.s

CMakeFiles/Monopoly.dir/TaxSpace.cpp.o: CMakeFiles/Monopoly.dir/flags.make
CMakeFiles/Monopoly.dir/TaxSpace.cpp.o: ../TaxSpace.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/taimurkashif/Desktop/Monopoly/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Monopoly.dir/TaxSpace.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Monopoly.dir/TaxSpace.cpp.o -c /Users/taimurkashif/Desktop/Monopoly/TaxSpace.cpp

CMakeFiles/Monopoly.dir/TaxSpace.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Monopoly.dir/TaxSpace.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/taimurkashif/Desktop/Monopoly/TaxSpace.cpp > CMakeFiles/Monopoly.dir/TaxSpace.cpp.i

CMakeFiles/Monopoly.dir/TaxSpace.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Monopoly.dir/TaxSpace.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/taimurkashif/Desktop/Monopoly/TaxSpace.cpp -o CMakeFiles/Monopoly.dir/TaxSpace.cpp.s

CMakeFiles/Monopoly.dir/IncomeTaxSpace.cpp.o: CMakeFiles/Monopoly.dir/flags.make
CMakeFiles/Monopoly.dir/IncomeTaxSpace.cpp.o: ../IncomeTaxSpace.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/taimurkashif/Desktop/Monopoly/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/Monopoly.dir/IncomeTaxSpace.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Monopoly.dir/IncomeTaxSpace.cpp.o -c /Users/taimurkashif/Desktop/Monopoly/IncomeTaxSpace.cpp

CMakeFiles/Monopoly.dir/IncomeTaxSpace.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Monopoly.dir/IncomeTaxSpace.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/taimurkashif/Desktop/Monopoly/IncomeTaxSpace.cpp > CMakeFiles/Monopoly.dir/IncomeTaxSpace.cpp.i

CMakeFiles/Monopoly.dir/IncomeTaxSpace.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Monopoly.dir/IncomeTaxSpace.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/taimurkashif/Desktop/Monopoly/IncomeTaxSpace.cpp -o CMakeFiles/Monopoly.dir/IncomeTaxSpace.cpp.s

CMakeFiles/Monopoly.dir/LuxuryTaxSpace.cpp.o: CMakeFiles/Monopoly.dir/flags.make
CMakeFiles/Monopoly.dir/LuxuryTaxSpace.cpp.o: ../LuxuryTaxSpace.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/taimurkashif/Desktop/Monopoly/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/Monopoly.dir/LuxuryTaxSpace.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Monopoly.dir/LuxuryTaxSpace.cpp.o -c /Users/taimurkashif/Desktop/Monopoly/LuxuryTaxSpace.cpp

CMakeFiles/Monopoly.dir/LuxuryTaxSpace.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Monopoly.dir/LuxuryTaxSpace.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/taimurkashif/Desktop/Monopoly/LuxuryTaxSpace.cpp > CMakeFiles/Monopoly.dir/LuxuryTaxSpace.cpp.i

CMakeFiles/Monopoly.dir/LuxuryTaxSpace.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Monopoly.dir/LuxuryTaxSpace.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/taimurkashif/Desktop/Monopoly/LuxuryTaxSpace.cpp -o CMakeFiles/Monopoly.dir/LuxuryTaxSpace.cpp.s

CMakeFiles/Monopoly.dir/GOSpace.cpp.o: CMakeFiles/Monopoly.dir/flags.make
CMakeFiles/Monopoly.dir/GOSpace.cpp.o: ../GOSpace.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/taimurkashif/Desktop/Monopoly/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/Monopoly.dir/GOSpace.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Monopoly.dir/GOSpace.cpp.o -c /Users/taimurkashif/Desktop/Monopoly/GOSpace.cpp

CMakeFiles/Monopoly.dir/GOSpace.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Monopoly.dir/GOSpace.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/taimurkashif/Desktop/Monopoly/GOSpace.cpp > CMakeFiles/Monopoly.dir/GOSpace.cpp.i

CMakeFiles/Monopoly.dir/GOSpace.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Monopoly.dir/GOSpace.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/taimurkashif/Desktop/Monopoly/GOSpace.cpp -o CMakeFiles/Monopoly.dir/GOSpace.cpp.s

CMakeFiles/Monopoly.dir/GoToJailSpace.cpp.o: CMakeFiles/Monopoly.dir/flags.make
CMakeFiles/Monopoly.dir/GoToJailSpace.cpp.o: ../GoToJailSpace.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/taimurkashif/Desktop/Monopoly/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/Monopoly.dir/GoToJailSpace.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Monopoly.dir/GoToJailSpace.cpp.o -c /Users/taimurkashif/Desktop/Monopoly/GoToJailSpace.cpp

CMakeFiles/Monopoly.dir/GoToJailSpace.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Monopoly.dir/GoToJailSpace.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/taimurkashif/Desktop/Monopoly/GoToJailSpace.cpp > CMakeFiles/Monopoly.dir/GoToJailSpace.cpp.i

CMakeFiles/Monopoly.dir/GoToJailSpace.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Monopoly.dir/GoToJailSpace.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/taimurkashif/Desktop/Monopoly/GoToJailSpace.cpp -o CMakeFiles/Monopoly.dir/GoToJailSpace.cpp.s

CMakeFiles/Monopoly.dir/JailSpace.cpp.o: CMakeFiles/Monopoly.dir/flags.make
CMakeFiles/Monopoly.dir/JailSpace.cpp.o: ../JailSpace.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/taimurkashif/Desktop/Monopoly/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/Monopoly.dir/JailSpace.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Monopoly.dir/JailSpace.cpp.o -c /Users/taimurkashif/Desktop/Monopoly/JailSpace.cpp

CMakeFiles/Monopoly.dir/JailSpace.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Monopoly.dir/JailSpace.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/taimurkashif/Desktop/Monopoly/JailSpace.cpp > CMakeFiles/Monopoly.dir/JailSpace.cpp.i

CMakeFiles/Monopoly.dir/JailSpace.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Monopoly.dir/JailSpace.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/taimurkashif/Desktop/Monopoly/JailSpace.cpp -o CMakeFiles/Monopoly.dir/JailSpace.cpp.s

CMakeFiles/Monopoly.dir/FreeParkingSpace.cpp.o: CMakeFiles/Monopoly.dir/flags.make
CMakeFiles/Monopoly.dir/FreeParkingSpace.cpp.o: ../FreeParkingSpace.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/taimurkashif/Desktop/Monopoly/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/Monopoly.dir/FreeParkingSpace.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Monopoly.dir/FreeParkingSpace.cpp.o -c /Users/taimurkashif/Desktop/Monopoly/FreeParkingSpace.cpp

CMakeFiles/Monopoly.dir/FreeParkingSpace.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Monopoly.dir/FreeParkingSpace.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/taimurkashif/Desktop/Monopoly/FreeParkingSpace.cpp > CMakeFiles/Monopoly.dir/FreeParkingSpace.cpp.i

CMakeFiles/Monopoly.dir/FreeParkingSpace.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Monopoly.dir/FreeParkingSpace.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/taimurkashif/Desktop/Monopoly/FreeParkingSpace.cpp -o CMakeFiles/Monopoly.dir/FreeParkingSpace.cpp.s

CMakeFiles/Monopoly.dir/Dice.cpp.o: CMakeFiles/Monopoly.dir/flags.make
CMakeFiles/Monopoly.dir/Dice.cpp.o: ../Dice.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/taimurkashif/Desktop/Monopoly/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object CMakeFiles/Monopoly.dir/Dice.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Monopoly.dir/Dice.cpp.o -c /Users/taimurkashif/Desktop/Monopoly/Dice.cpp

CMakeFiles/Monopoly.dir/Dice.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Monopoly.dir/Dice.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/taimurkashif/Desktop/Monopoly/Dice.cpp > CMakeFiles/Monopoly.dir/Dice.cpp.i

CMakeFiles/Monopoly.dir/Dice.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Monopoly.dir/Dice.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/taimurkashif/Desktop/Monopoly/Dice.cpp -o CMakeFiles/Monopoly.dir/Dice.cpp.s

CMakeFiles/Monopoly.dir/GameAttributes.cpp.o: CMakeFiles/Monopoly.dir/flags.make
CMakeFiles/Monopoly.dir/GameAttributes.cpp.o: ../GameAttributes.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/taimurkashif/Desktop/Monopoly/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building CXX object CMakeFiles/Monopoly.dir/GameAttributes.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Monopoly.dir/GameAttributes.cpp.o -c /Users/taimurkashif/Desktop/Monopoly/GameAttributes.cpp

CMakeFiles/Monopoly.dir/GameAttributes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Monopoly.dir/GameAttributes.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/taimurkashif/Desktop/Monopoly/GameAttributes.cpp > CMakeFiles/Monopoly.dir/GameAttributes.cpp.i

CMakeFiles/Monopoly.dir/GameAttributes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Monopoly.dir/GameAttributes.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/taimurkashif/Desktop/Monopoly/GameAttributes.cpp -o CMakeFiles/Monopoly.dir/GameAttributes.cpp.s

CMakeFiles/Monopoly.dir/Controller.cpp.o: CMakeFiles/Monopoly.dir/flags.make
CMakeFiles/Monopoly.dir/Controller.cpp.o: ../Controller.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/taimurkashif/Desktop/Monopoly/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Building CXX object CMakeFiles/Monopoly.dir/Controller.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Monopoly.dir/Controller.cpp.o -c /Users/taimurkashif/Desktop/Monopoly/Controller.cpp

CMakeFiles/Monopoly.dir/Controller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Monopoly.dir/Controller.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/taimurkashif/Desktop/Monopoly/Controller.cpp > CMakeFiles/Monopoly.dir/Controller.cpp.i

CMakeFiles/Monopoly.dir/Controller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Monopoly.dir/Controller.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/taimurkashif/Desktop/Monopoly/Controller.cpp -o CMakeFiles/Monopoly.dir/Controller.cpp.s

CMakeFiles/Monopoly.dir/MiddleSpace.cpp.o: CMakeFiles/Monopoly.dir/flags.make
CMakeFiles/Monopoly.dir/MiddleSpace.cpp.o: ../MiddleSpace.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/taimurkashif/Desktop/Monopoly/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_20) "Building CXX object CMakeFiles/Monopoly.dir/MiddleSpace.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Monopoly.dir/MiddleSpace.cpp.o -c /Users/taimurkashif/Desktop/Monopoly/MiddleSpace.cpp

CMakeFiles/Monopoly.dir/MiddleSpace.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Monopoly.dir/MiddleSpace.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/taimurkashif/Desktop/Monopoly/MiddleSpace.cpp > CMakeFiles/Monopoly.dir/MiddleSpace.cpp.i

CMakeFiles/Monopoly.dir/MiddleSpace.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Monopoly.dir/MiddleSpace.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/taimurkashif/Desktop/Monopoly/MiddleSpace.cpp -o CMakeFiles/Monopoly.dir/MiddleSpace.cpp.s

# Object files for target Monopoly
Monopoly_OBJECTS = \
"CMakeFiles/Monopoly.dir/main.cpp.o" \
"CMakeFiles/Monopoly.dir/Player.cpp.o" \
"CMakeFiles/Monopoly.dir/Board.cpp.o" \
"CMakeFiles/Monopoly.dir/Space.cpp.o" \
"CMakeFiles/Monopoly.dir/BuyableSpace.cpp.o" \
"CMakeFiles/Monopoly.dir/NonBuyableSpace.cpp.o" \
"CMakeFiles/Monopoly.dir/PropertySpace.cpp.o" \
"CMakeFiles/Monopoly.dir/RailroadSpace.cpp.o" \
"CMakeFiles/Monopoly.dir/UtilitySpace.cpp.o" \
"CMakeFiles/Monopoly.dir/TaxSpace.cpp.o" \
"CMakeFiles/Monopoly.dir/IncomeTaxSpace.cpp.o" \
"CMakeFiles/Monopoly.dir/LuxuryTaxSpace.cpp.o" \
"CMakeFiles/Monopoly.dir/GOSpace.cpp.o" \
"CMakeFiles/Monopoly.dir/GoToJailSpace.cpp.o" \
"CMakeFiles/Monopoly.dir/JailSpace.cpp.o" \
"CMakeFiles/Monopoly.dir/FreeParkingSpace.cpp.o" \
"CMakeFiles/Monopoly.dir/Dice.cpp.o" \
"CMakeFiles/Monopoly.dir/GameAttributes.cpp.o" \
"CMakeFiles/Monopoly.dir/Controller.cpp.o" \
"CMakeFiles/Monopoly.dir/MiddleSpace.cpp.o"

# External object files for target Monopoly
Monopoly_EXTERNAL_OBJECTS =

Monopoly: CMakeFiles/Monopoly.dir/main.cpp.o
Monopoly: CMakeFiles/Monopoly.dir/Player.cpp.o
Monopoly: CMakeFiles/Monopoly.dir/Board.cpp.o
Monopoly: CMakeFiles/Monopoly.dir/Space.cpp.o
Monopoly: CMakeFiles/Monopoly.dir/BuyableSpace.cpp.o
Monopoly: CMakeFiles/Monopoly.dir/NonBuyableSpace.cpp.o
Monopoly: CMakeFiles/Monopoly.dir/PropertySpace.cpp.o
Monopoly: CMakeFiles/Monopoly.dir/RailroadSpace.cpp.o
Monopoly: CMakeFiles/Monopoly.dir/UtilitySpace.cpp.o
Monopoly: CMakeFiles/Monopoly.dir/TaxSpace.cpp.o
Monopoly: CMakeFiles/Monopoly.dir/IncomeTaxSpace.cpp.o
Monopoly: CMakeFiles/Monopoly.dir/LuxuryTaxSpace.cpp.o
Monopoly: CMakeFiles/Monopoly.dir/GOSpace.cpp.o
Monopoly: CMakeFiles/Monopoly.dir/GoToJailSpace.cpp.o
Monopoly: CMakeFiles/Monopoly.dir/JailSpace.cpp.o
Monopoly: CMakeFiles/Monopoly.dir/FreeParkingSpace.cpp.o
Monopoly: CMakeFiles/Monopoly.dir/Dice.cpp.o
Monopoly: CMakeFiles/Monopoly.dir/GameAttributes.cpp.o
Monopoly: CMakeFiles/Monopoly.dir/Controller.cpp.o
Monopoly: CMakeFiles/Monopoly.dir/MiddleSpace.cpp.o
Monopoly: CMakeFiles/Monopoly.dir/build.make
Monopoly: CMakeFiles/Monopoly.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/taimurkashif/Desktop/Monopoly/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_21) "Linking CXX executable Monopoly"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Monopoly.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Monopoly.dir/build: Monopoly

.PHONY : CMakeFiles/Monopoly.dir/build

CMakeFiles/Monopoly.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Monopoly.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Monopoly.dir/clean

CMakeFiles/Monopoly.dir/depend:
	cd /Users/taimurkashif/Desktop/Monopoly/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/taimurkashif/Desktop/Monopoly /Users/taimurkashif/Desktop/Monopoly /Users/taimurkashif/Desktop/Monopoly/cmake-build-debug /Users/taimurkashif/Desktop/Monopoly/cmake-build-debug /Users/taimurkashif/Desktop/Monopoly/cmake-build-debug/CMakeFiles/Monopoly.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Monopoly.dir/depend

