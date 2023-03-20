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
    prestadoA = NULL;
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
    prestadoA = &kid;
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

//obtener nombre niño prestado para ponerlo en DTObjetoRoto
string Objeto::getNombreNinio(){
    string nombreNinio = "";

    //si no se le prestó a nadie devuelve una cadena vacía
    if (prestadoA != NULL){
        nombreNinio = prestadoA->getNombre();
    }

    return nombreNinio;
}

Objeto::~Objeto(){
    vector<string> lista = prestadoA.listarObjetosPrestados();
    int i=0;
    while(i<lista.size() && (lista[i] != prestadoA.toString())){
        i++;
    }
    prestadoA.listarObjetosPrestados().erase(v.begin() + i);
    lista.erase(v.begin() + i);
}