all: main
.PHONY: all clean
#directorios
Clases_CC     =src/Objeto
Clases_H    =include/clases
DT_CPP        =src/DataType
DT_H        =include/DT
# Sistema_CPP =src/sistema
# Sistema_H    =include/sistema
CLASES_NOMBRES = JuegoMesa Libro Niño Objeto
CLASES_O = $(CLASES_NOMBRES:%=$(Clases_CC)/%.o)

DT_NOMBRES = DTObjetoRoto # agregar estado?
DT_O = $(DT_NOMBRES:%=$(DT_CC)/%.o)

# SISTEMA_NOMBRES = Sistema
# SISTEMA_O =$(SISTEMA_NOMBRES:%=$(Sistema_CPP)/%.o)

#Compilador 
CC = g++

#opciones de compilacion
CCFLAGS = -Wall -I$(Clases_H) -I$(DT_H) -I$(Sistema_H) -g


main.o: main.cpp 
    $(CC) $(CCFLAGS) -c $< -o $@

$(Clases_CC)/%.o: $(Clases_CC)/%.cc $(Clases_H)/%.h
    $(CC) $(CCFLAGS) -c $< -o $@

$(DT_CC)/%.o: $(DT_CC)/%.cc $(DT_H)/%.h
    $(CC) $(CCFLAGS) -c $< -o $@
# $(Sistema_CPP)/%.o: $(Sistema_CPP)/%.cpp $(Sistema_H)/%.h
#     $(CC) $(CCFLAGS) -c $< -o $@
main: main $(CLASES_O) $(DT_O) 
# $(SISTEMA_O)