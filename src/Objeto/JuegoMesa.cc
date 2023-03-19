#include "JuegoMesa.h"
#include "Objeto.h"
#include <string>

//constructor de todos los atributos, hereda del constructor de objeto
JuegoMesa::JuegoMesa(string nombre, int anio, Estado estado, int edad, int cant):Objeto(nombre,anio,estado) {
    edadRecomendada=edad; //this->edadRecomendada = edad
    cantJugadores=cant; //this->cantJugadores = cant;
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
