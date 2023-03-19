#include <iostream>
using namespace std;
#include "JuegoMesa.h"
#include "Objeto.h"
#include "Objeto.cc"
#include "JuegoMesa.cc"
#include <string>
  
int main()
{
    Estado estadoUno = Estado::Roto;
    Estado estadoMozoCartas = Estado::Nuevo;
    Estado estadoDados = Estado::Roto;
    //Creación de objetos JuegoMesa
    JuegoMesa Uno = JuegoMesa("Juego Uno", 2022, estadoUno, 7, 10);
    //JuegoMesa Uno = new JuegoMesa("Juego Uno", 2022, Roto, 7, 10);
    JuegoMesa MozoCartas = JuegoMesa("Mozo de Cartas", 2019, estadoMozoCartas, 7, 4);
    //JuegoMesa MozoCartas = new JuegoMesa("Mozo de Cartas", 2019, Nuevo, 7, 4);
    JuegoMesa Dados = JuegoMesa("Dados", 2020, estadoDados, 2, 6);
    //JuegoMesa Dados = new JuegoMesa("Dados", 2020, Roto, 2, 6);
    //libros
    Libro libro1("Nacidos de la bruma: El imperio final", 2022, "Roto", "Brandon Sanderson", 688);
    Libro libro2("Las Malas", 2022, "Nuevo", "Camila Sosa Villada", 240);
    Libro libro3("El cocodrilo al que no le gustaba el agua", 2016, "Roto", "Gemma Merino", 32);
    //JuegoMesa
    JuegoMesa juego1("Juego Uno", 2022, "Roto", 7, 10);
    JuegoMesa juego2("Mazo de Cartas", 2019, "Nuevo", 7, 4);
    JuegoMesa juego3("Dados", 2020, "Roto", 2, 6);
    //consulto los objetos creados
    cout << libro1.toString() << endl;
    cout << libro2.toString() << endl;
    cout << libro3.toString() << endl;
    cout << juego1.toString() << endl;
    cout << juego2.toString() << endl;
    cout << juego3.toString() << endl;
    //objetos clase niño
    Niño niño1("María Laura", 10, "Nueva Palmira 1521", "099298190");
    Niño niño2("Alex", 5, "Humberto Primo 1501", "29094141");
    //registro prestamos
    niño1.prestarObjeto(&juego2);
    niño1.prestarObjeto(&libro1);
    niño1.prestarObjeto(&juego3);
    niño2.prestarObjeto(&juego1);
    niño2.prestarObjeto(&libro3);
    // prueba toString()
    String mostrar = Uno.toString();
    return   0; 
}
