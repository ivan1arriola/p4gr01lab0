//librerias
#include <iostream>
#include <string>
using namespace std;

//includes
#include "JuegoMesa.h"
#include "Libro.h"
#include "Ninio.h"

  
int main()
{
    Estado estadoUno = Estado::Roto;
    Estado estadoMozoCartas = Estado::Nuevo;
    Estado estadoDados = Estado::Roto;

    //Juego de Mesa
    JuegoMesa Uno = JuegoMesa("Juego Uno", 2022, estadoUno, 7, 10);
    JuegoMesa MozoCartas = JuegoMesa("Mozo de Cartas", 2019, estadoMozoCartas, 7, 4);
    JuegoMesa Dados = JuegoMesa("Dados", 2020, estadoDados, 2, 6);

    // Libros
    Libro nacidosDeLaBruma = new Libro("Nacidos de la bruma: EL imperio final", 2022, new Estado::Roto, "Brandon Sanderson", 688);
    Libro lasMalas = new Libro("Las Malas", 2022, new Estado::Nuevo, "Camila Sosa Villada", 240);
    Libro elCocodrilo = new Libro("El cocodrilo al que no le gustaba el agua", 2016, new Estado::Roto, "Gemma Merino", 32);


    // prueba toString()
    String mostrar = Uno.toString();
    return   0; 
}
