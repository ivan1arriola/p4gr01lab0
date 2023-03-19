#include <iostream>
#include "JuegoMesa.h"
#include "Objeto.h"
#include <string>
#include "Libro.h"
#include <stdlib.h>
using namespace std;
  
int main()
{
    Estado estadoUno = Estado::Roto;
    Estado estadoMozoCartas = Estado::Nuevo;
    Estado estadoDados = Estado::Roto;
    //Creación de objetos JuegoMesa
    JuegoMesa Uno = JuegoMesa("Juego Uno", 2022, estadoUno, 7, 10);
    //JuegoMesa *Uno = new JuegoMesa("Juego Uno", 2022, Roto, 7, 10);
    JuegoMesa MozoCartas = JuegoMesa("Mozo de Cartas", 2019, estadoMozoCartas, 7, 4);
    //JuegoMesa *MozoCartas = new JuegoMesa("Mozo de Cartas", 2019, Nuevo, 7, 4);
    JuegoMesa Dados = JuegoMesa("Dados", 2020, estadoDados, 2, 6);
    //JuegoMesa *Dados = new JuegoMesa("Dados", 2020, Roto, 2, 6);

    // prueba toString()
    String mostrar = Uno.toString();

    JuegoMesa j = new JuegoMesa("asd",    return   0; 
}
