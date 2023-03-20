all: main
.PHONY: all clean
#directorios
Clases_CC     =src/clases
Clases_H    =include/clases
DT_CC        =src/datatypes
DT_H        =include/datatypes
# Sistema_CPP =src/sistema
# Sistema_H    =include/sistema
CLASES_NOMBRES = JuegoMesa Libro Niño Objeto Estado
CLASES_O = $(CLASES_NOMBRES:%=$(Clases_CC)/%.o)

DT_NOMBRES = DTObjetoRoto 
DT_O = $(DT_NOMBRES:%=$(DT_CC)/%.o)

# SISTEMA_NOMBRES = Sistema
# SISTEMA_O =$(SISTEMA_NOMBRES:%=$(Sistema_CPP)/%.o)

#Compilador 
CC = g++

#opciones de compilacion
CCFLAGS = -Wall -I$(Clases_H) -g


main.o: main.cpp 
    $(CC) $(CCFLAGS) -c $< -o $@

$(Clases_CC)/%.o: $(Clases_CC)/%.cc $(Clases_H)/%.h
    $(CC) $(CCFLAGS) -c $< -o $@

$(DT_CC)/%.o: $(DT_CC)/%.cc $(DT_H)/%.h
    $(CC) $(CCFLAGS) -c $< -o $@

main: main $(CLASES_O) $(DT_O) 
