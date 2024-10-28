CC = gcc
CFLAGS = -Wall -fPIC -I.

LIBRARY_NAME = libtinytools.a
SOURCES = tinytools.c
OBJECTS = $(SOURCES:.c=.o)

all: $(LIBRARY_NAME)

$(LIBRARY_NAME): $(OBJECTS)
	$(AR) rcs $@ $^

clean:
	rm -f $(OBJECTS) $(LIBRARY_NAME)
