#include "DTObjetoRoto.h"

DTObjetoRoto::DTObjetoRoto(){}

DTObjetoRoto::DTObjetoRoto(string n,bool p, string nom){
    NombreObjeto=n;
    prestado=p;
    NombreNinio=nom;
}

DTObjetoRoto::DTObjetoRoto(string n, bool p){
    NombreObjeto = n;
    prestado = p;
}

void DTObjetoRoto::setNombreObjeto(string n){
    NombreObjeto = n;
}

void DTObjetoRoto::setPrestado(bool p){
    prestado = p;
}

void DTObjetoRoto::setNombreNinio(string n){
    NombreNinio = n;
}

string DTObjetoRoto::getNombreObjeto(){
    return NombreObjeto;
}

bool DTObjetoRoto::getPrestado(){
    return prestado;
}

string DTObjetoRoto::getNombreNinio(){
    return NombreNinio;
}

DTObjetoRoto::~DTObjetoRoto(){}

ostream &operator<<(ostream &o,DTObjetoRoto &d){
    string resultado=d.getNombreObjeto();
    if (d.getPrestado()==true)
    resultado=resultado+" ,PRESTADO SI, "+d.getNombreNinio();
    else resultado=resultado+" ,PRESTADO NO";
    o<<resultado;
    return o; 
}
