# Define directories
SRC_DIR = src
INCLUDE_DIR = include
CLASSES_DIR = $(SRC_DIR)/clases
DATATYPES_DIR = $(SRC_DIR)/datatypes

# Define file extensions
CXX = g++
CXXFLAGS = -Wall -I$(INCLUDE_DIR) -g
SRCEXT = cpp
HEADEXT = h

# Define class and datatype names
CLASSES = JuegoMesa Libro Niño Objeto Estado
DATATYPES = DTObjetoRoto

# Define object file names
CLASSES_OBJS = $(patsubst %,$(CLASSES_DIR)/%.o,$(CLASSES))
DATATYPES_OBJS = $(patsubst %,$(DATATYPES_DIR)/%.o,$(DATATYPES))

# Define phony targets
.PHONY: all clean

# Define default target
all: main

# Define rule for linking object files into the main executable
main: main.o $(CLASSES_OBJS) $(DATATYPES_OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Define rules for compiling source files into object files
$(CLASSES_DIR)/%.o: $(CLASSES_DIR)/%.$(SRCEXT) $(INCLUDE_DIR)/%.$(HEADEXT)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(DATATYPES_DIR)/%.o: $(DATATYPES_DIR)/%.$(SRCEXT) $(INCLUDE_DIR)/%.$(HEADEXT)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Define rule for compiling the main source file into an object file
main.o: $(SRC_DIR)/main.$(SRCEXT) $(CLASSES_OBJS) $(DATATYPES_OBJS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Define rule for cleaning up object files and executables
clean:
	rm -f main $(CLASSES_OBJS) $(DATATYPES_OBJS) main.o
