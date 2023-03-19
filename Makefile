CXX=g++
CXXFLAGS=-Wall -std=c++11
LDLIBS=

SRCDIR=.
OBJDIR=obj
BINDIR=bin

SOURCES=$(wildcard $(SRCDIR)/*.cc)
HEADERS=$(wildcard $(SRCDIR)/*.h)
OBJECTS=$(patsubst $(SRCDIR)/%.cc,$(OBJDIR)/%.o,$(SOURCES))
EXECUTABLE=$(BINDIR)/main

.PHONY: all clean

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) $(LDLIBS) -o $(EXECUTABLE)

$(OBJDIR)/%.o: $(SRCDIR)/%.cc $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
