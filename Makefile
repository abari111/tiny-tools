CC = gcc
CFLAGS = -Wall -fPIC -I.

LIBRARY_NAME = libtinytools.a
SOURCES = tinytools.c
OBJECTS = $(SOURCES:.c=.o)

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Iinclude

# Directories
SRC_DIR = src
BUILD_DIR = build
INCLUDE_DIR = include
TEST_DIR = tests

# Source and object files
SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SRC))

# Target library
TARGET = $(BUILD_DIR)/libtinytools.a

# Test files
TEST_SRC = $(wildcard $(TEST_DIR)/*.c)
TEST_OBJ = $(patsubst $(TEST_DIR)/%.c, $(BUILD_DIR)/%.o, $(TEST_SRC))
TEST_EXEC = $(BUILD_DIR)/test_tinytools

# Default target
all: $(TARGET)

# Build library
$(TARGET): $(OBJ)
	mkdir -p $(BUILD_DIR)
	ar rcs $@ $^

# Compile source files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Test target
test: $(TARGET) $(TEST_EXEC)
	./$(TEST_EXEC)

# Compile test executable
$(TEST_EXEC): $(TEST_OBJ) $(TARGET)
	$(CC) $(CFLAGS) -o $@ $(TEST_OBJ) -L$(BUILD_DIR) -ltinytools

# Compile test source files
$(BUILD_DIR)/%.o: $(TEST_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -rf $(BUILD_DIR)/*.o $(TARGET) $(TEST_EXEC)

# Phony targets
.PHONY: all test clean

