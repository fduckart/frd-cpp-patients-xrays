# Build program.

# Set the compiler
CC = /usr/local/bin/g++-4.9

# Compiler flags
CFLAGS = -g -Wall -std=c++11 -c

# Linker flags 
LDFLAGS = -llber -lldap -o

PROG0 = patapp

ALL_PROGRAMS = $(PROG0)  

# Source files.
PROG00_OBJS = patapp.o
PROG01_OBJS = patient.o
PROG02_OBJS = xray.o

# Header files.
SOURCE_HDRS = patient.h xray.h

# FIRST RULE: Build everything
all:		$(ALL_PROGRAMS)

# Rule to build program.  This is the main application.
$(PROG0):	$(PROG00_OBJS) $(PROG01_OBJS) $(PROG02_OBJS)
		$(CC) $(LDFLAGS) $@ $^


# This rule defines how to build any .o file
# from its corresponding .cpp file
%.o:		%.cpp $(SOURCE_HDRS)
		$(CC) $(CFLAGS) $<


# Clean up - note, no dependency,
# if this rule is called always do it
clean:
		rm -f *.o ~* $(ALL_PROGRAMS)

