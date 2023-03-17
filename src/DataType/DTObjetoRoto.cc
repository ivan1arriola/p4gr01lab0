#include "DTObjetoRoto.h"

DTObjetoRoto::DTObjetoRoto(){}

DTObjetoRoto::DTObjetoRoto(string n,bool p, string nom){
    NombreObjeto=n;
    prestado=p;
    NombreNinio=nom;
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
