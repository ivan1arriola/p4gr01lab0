#include "JuegoMesa.h"

JuegoMesa::JuegoMesa(string n, int a, Estado e, int edad, int c):Objeto(n,a,e) {
    edadRecomendada=edad; //this->edadRecomendada = edad
    cantJugadores=c; //this->cantJugadores = c;
};

JuegoMesa::JuegoMesa():Objeto(){}

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

string JuegoMesa::toString(){
    return 0;
};