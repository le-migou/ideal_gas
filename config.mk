# Paths to required header files
# E.g. 
#   DEPENDENCIES_HEADERS= /some/path/library1/include #                         /some/other/path/library2/include
DEPENDENCIES_HEADERS=

# Name of this project
PROJECT=ideal_gas
# Use the C++ linker
LINK.o=${LINK.cc}
# If some libraries are needed, you can do it here
# E.g.
#   LDLIBS+= -lfmt
CXXFLAGS+=-std=c++2a -Wall -Wextra $(foreach dir, ${DEPENDENCIES_HEADERS}, -I../${dir})

