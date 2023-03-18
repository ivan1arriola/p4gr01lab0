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

ostream &operator<<(ostream &o,DTObjetoRoto &d){
    string resultado=d.getNombreObjeto();
    if (d.getPrestado()==true)
    resultado=resultado+" ,PRESTADO SI, "+d.getNombreNinio();
    else resultado=resultado+" ,PRESTADO NO";
    o<<resultado;
    return o; 
}
