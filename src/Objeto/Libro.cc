#include "libro.h"

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

string Libro::toString(){return 0;}

Libro::~Libro(){}
