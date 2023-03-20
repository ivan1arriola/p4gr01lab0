#include "../../include/clases/Libro.h"
#include <sstream>
#include <iostream>
using namespace std;


Libro::Libro(string n, int a, Estado e, int c, string au):Objeto(n,a,e) {
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

//funcion que devuelve string de la forma Libro: Nombre, AñoComprado, Estado, Autor, CantPaginas
string Libro::toString(){
    stringstream ss_a;
    int a = getAnioComprado();
    ss_a << a;
    string s_a = ss_a.str();
    stringstream ss_c;
    int c = getCantDePaginas();
    ss_c << c;
    string s_c = ss_c.str();
    Estado e = getEstado();
    string s_e;
    if (e == Nuevo)
        s_e = "Nuevo";
    else
        if (e == BienConservado)
            s_e = "BienConservado";
        else
            s_e = "Roto";
    string texto = "Libro: " + getNombre() + ", " + s_a + ", " + s_e + ", " + getAutor() + ", " + s_c;
    return texto;
}

Libro::~Libro(){}
