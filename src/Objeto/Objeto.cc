#include <string>
#include <vector>
#include "Objeto.h"

using namespace std;

Objeto::Objeto(){

}

Objeto::Objeto(string n, int a, Estado e){
    nombre = n;
    anioComprado = a;
    estado = e;
}

void Objeto::setNombre(string n){
    nombre = n;
}

void Objeto::setAnioComprado(int a){
    anioComprado = a;
}

void Objeto::setEstado(Estado e){
    estado = e;
}

void Objeto::asignarNinio(Ninio &kid){
    prestadoA = kid;
}

string Objeto::getNombre(){
    return nombre;
}

int Objeto::getAnioComprado(){
    return anioComprado;
}

Estado Objeto::getEstado(){
    return estado;
}

Objeto::~Objeto(){

}