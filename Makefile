CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -Wpedantic -Iinclude
LDFLAGS =

SRCDIR = src
INCDIR = include
OBJDIR = obj

SRC = $(wildcard $(SRCDIR)/*.cc)
OBJ = $(SRC:$(SRCDIR)/%.cc=$(OBJDIR)/%.o)

TARGET = main

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(LDFLAGS) $^ -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

# Dependencias
$(OBJDIR)/DTObjetoRoto.o: $(INCDIR)/DTObjetoRoto.h
$(OBJDIR)/Estado.o: $(INCDIR)/Estado.h
$(OBJDIR)/JuegoMesa.o: $(INCDIR)/JuegoMesa.h $(INCDIR)/Objeto.h
$(OBJDIR)/Libro.o: $(INCDIR)/Libro.h $(INCDIR)/Objeto.h
$(OBJDIR)/Ninio.o: $(INCDIR)/Ninio.h $(INCDIR)/Objeto.h
$(OBJDIR)/Objeto.o: $(INCDIR)/Objeto.h
$(OBJDIR)/DTObjetoRoto.o: $(INCDIR)/DTObjetoRoto.h
