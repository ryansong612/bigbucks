# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ryansong612/Desktop/bigbucks

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ryansong612/Desktop/bigbucks

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/local/bin/ccmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/ryansong612/Desktop/bigbucks/CMakeFiles /Users/ryansong612/Desktop/bigbucks//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/ryansong612/Desktop/bigbucks/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named bigbucks

# Build rule for target.
bigbucks: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 bigbucks
.PHONY : bigbucks

# fast build rule for target.
bigbucks/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bigbucks.dir/build.make CMakeFiles/bigbucks.dir/build
.PHONY : bigbucks/fast

src/book.o: src/book.cpp.o
.PHONY : src/book.o

# target to build an object file
src/book.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bigbucks.dir/build.make CMakeFiles/bigbucks.dir/src/book.cpp.o
.PHONY : src/book.cpp.o

src/book.i: src/book.cpp.i
.PHONY : src/book.i

# target to preprocess a source file
src/book.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bigbucks.dir/build.make CMakeFiles/bigbucks.dir/src/book.cpp.i
.PHONY : src/book.cpp.i

src/book.s: src/book.cpp.s
.PHONY : src/book.s

# target to generate assembly for a file
src/book.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bigbucks.dir/build.make CMakeFiles/bigbucks.dir/src/book.cpp.s
.PHONY : src/book.cpp.s

src/main.o: src/main.cpp.o
.PHONY : src/main.o

# target to build an object file
src/main.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bigbucks.dir/build.make CMakeFiles/bigbucks.dir/src/main.cpp.o
.PHONY : src/main.cpp.o

src/main.i: src/main.cpp.i
.PHONY : src/main.i

# target to preprocess a source file
src/main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bigbucks.dir/build.make CMakeFiles/bigbucks.dir/src/main.cpp.i
.PHONY : src/main.cpp.i

src/main.s: src/main.cpp.s
.PHONY : src/main.s

# target to generate assembly for a file
src/main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bigbucks.dir/build.make CMakeFiles/bigbucks.dir/src/main.cpp.s
.PHONY : src/main.cpp.s

src/order.o: src/order.cpp.o
.PHONY : src/order.o

# target to build an object file
src/order.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bigbucks.dir/build.make CMakeFiles/bigbucks.dir/src/order.cpp.o
.PHONY : src/order.cpp.o

src/order.i: src/order.cpp.i
.PHONY : src/order.i

# target to preprocess a source file
src/order.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bigbucks.dir/build.make CMakeFiles/bigbucks.dir/src/order.cpp.i
.PHONY : src/order.cpp.i

src/order.s: src/order.cpp.s
.PHONY : src/order.s

# target to generate assembly for a file
src/order.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bigbucks.dir/build.make CMakeFiles/bigbucks.dir/src/order.cpp.s
.PHONY : src/order.cpp.s

src/queue.o: src/queue.cpp.o
.PHONY : src/queue.o

# target to build an object file
src/queue.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bigbucks.dir/build.make CMakeFiles/bigbucks.dir/src/queue.cpp.o
.PHONY : src/queue.cpp.o

src/queue.i: src/queue.cpp.i
.PHONY : src/queue.i

# target to preprocess a source file
src/queue.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bigbucks.dir/build.make CMakeFiles/bigbucks.dir/src/queue.cpp.i
.PHONY : src/queue.cpp.i

src/queue.s: src/queue.cpp.s
.PHONY : src/queue.s

# target to generate assembly for a file
src/queue.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bigbucks.dir/build.make CMakeFiles/bigbucks.dir/src/queue.cpp.s
.PHONY : src/queue.cpp.s

test/order/order_test.o: test/order/order_test.cpp.o
.PHONY : test/order/order_test.o

# target to build an object file
test/order/order_test.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bigbucks.dir/build.make CMakeFiles/bigbucks.dir/test/order/order_test.cpp.o
.PHONY : test/order/order_test.cpp.o

test/order/order_test.i: test/order/order_test.cpp.i
.PHONY : test/order/order_test.i

# target to preprocess a source file
test/order/order_test.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bigbucks.dir/build.make CMakeFiles/bigbucks.dir/test/order/order_test.cpp.i
.PHONY : test/order/order_test.cpp.i

test/order/order_test.s: test/order/order_test.cpp.s
.PHONY : test/order/order_test.s

# target to generate assembly for a file
test/order/order_test.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bigbucks.dir/build.make CMakeFiles/bigbucks.dir/test/order/order_test.cpp.s
.PHONY : test/order/order_test.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... bigbucks"
	@echo "... src/book.o"
	@echo "... src/book.i"
	@echo "... src/book.s"
	@echo "... src/main.o"
	@echo "... src/main.i"
	@echo "... src/main.s"
	@echo "... src/order.o"
	@echo "... src/order.i"
	@echo "... src/order.s"
	@echo "... src/queue.o"
	@echo "... src/queue.i"
	@echo "... src/queue.s"
	@echo "... test/order/order_test.o"
	@echo "... test/order/order_test.i"
	@echo "... test/order/order_test.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system
