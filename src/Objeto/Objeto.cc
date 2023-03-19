#include "Objeto.h"
#include <stdlib.h>
#include <string>
using namespace std;

Objeto::Objeto(string n,int a,Estado e){
    nombre=n;
    añoComprado=a;
    estado=e;
}

Objeto::Objeto(){}

void Objeto::setNombre(string n){
    nombre=n;
}

void Objeto::setAñoComprado(int a){
    añoComprado=a;
}

void Objeto::setEstado(Estado e){
    estado=e;
}

string Objeto::getNombre(){
    return nombre;
}

int Objeto::getAñoComprado(){
    return añoComprado;
}

Estado Objeto::getEstado(){
    return estado;
}
