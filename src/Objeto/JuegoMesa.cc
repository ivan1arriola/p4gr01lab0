#include "../JuegoMesa.h"
#include "../Objeto.h"
#include <stdlib.h>
#include <string>
using namespace std;

//constructor de todos los atributos, hereda del constructor de objeto
JuegoMesa::JuegoMesa(string n, int a, Estado e, bool prest, string nomNin, int edad, int c):Objeto(n,a,e, prest, nomNin) {
    edadRecomendada=edad; //this->edadRecomendada = edad
    cantJugadores=c; //this->cantJugadores = c;
};

//constructor vacío
JuegoMesa::JuegoMesa():Objeto(){ 
};

//setters y getters
void JuegoMesa::setEdadRecomendada(int edad){
    edadRecomendada=edad;
};


int JuegoMesa::setCantJugadores(int cant){
    cantJugadores = cant;
};

int JuegoMesa::getEdadRecomendada(){
    return edadRecomendada;
};

int JuegoMesa::getCantJugadores(){
    return cantJugadores;
};

// funcion que devuelve string de la forma Juego: Nombre, AñoComprado, Estado, EdadRecomendada, CantJugadores
string JuegoMesa::toString(){
    string texto = "Juego: " + getNombre() + ", " + getAñoComprado() + ", " + getEstado() + ", " + getEdadRecomendada() + ", " + getCantJugadores();
    return texto;
};

JuegoMesa::~JuegoMesa(){}