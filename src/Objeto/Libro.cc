#include "Libro.h"
#include <stdlib.h>
#include <string>
using namespace std;

Libro::Libro(string n,int a,Estado e,int c,string au):Objeto(n,a,e) {
    cantDePaginas=c;
    autor=au;
}

Libro::Libro():Objeto(){}

void Libro::setCantDePaginas(int a){
    cantDePaginas=a;
}

void Libro::setAutor(string au){
    autor=au;
}

int Libro::getCantDePaginas(){
    return cantDePaginas;
}

string Libro::getAutor(){
    return autor;
}

//Retorna Libro: Nombre, AñoComprado, Estado, Autor, CantPaginas

string Libro::toString(){
    string texto = "Libro: " + getNombre() + ", " + getAñoComprado() + ", " + getEstado() + ", " + getAutor() + ", " + getCantDePaginas();
    return texto;
}

Libro::~Libro(){}
