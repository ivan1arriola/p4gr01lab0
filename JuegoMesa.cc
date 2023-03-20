#include "JuegoMesa.h"
#include <sstream>

//constructor de todos los atributos, hereda del constructor de objeto
JuegoMesa::JuegoMesa(string n, int a, Estado e, int edad, int c):Objeto(n,a,e) {
    edadRecomendada=edad; //this->edadRecomendada = edad
    cantJugadores=c; //this->cantJugadores = c;
};

//constructor vacío
JuegoMesa::JuegoMesa():Objeto(){ 
};

//setters y getters
void JuegoMesa::setEdadRecomendada(int edad){
    edadRecomendada=edad;
};


void JuegoMesa::setCantJugadores(int cant){
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
    stringstream ss_a;
    int a = getAnioComprado();
    ss_a << a;
    string s_a = ss_a.str();
    stringstream ss_cj;
    int cj = getCantJugadores();
    ss_cj << cj;
    string s_cj = ss_cj.str();
    stringstream ss_er;
    int er = getEdadRecomendada();
    ss_er << er;
    string s_er = ss_er.str();
    Estado e = getEstado();
    string s_e;
    if (e == Nuevo)
        s_e = "Nuevo";
    else
        if (e == BienConservado)
            s_e = "BienConservado";
        else
            s_e = "Roto";
    string texto = "Juego: " + getNombre() + ", " + s_a + ", " + s_e + ", " + s_er + ", " + s_cj;
    return texto;
};

JuegoMesa::~JuegoMesa(){
    if (getNinio() != NULL){
        vector<Objeto*> nuevo_obj;
        vector<Objeto*> viejo_obj = getNinio()->getObjetosPrestados();
        for(int i = 0; i < viejo_obj.size(); i++){
            if (viejo_obj[i]->toString() != this->toString())
                nuevo_obj.push_back(viejo_obj[i]);
        }
        getNinio()->setObjetosPrestados(nuevo_obj);
        if (this->getEstado() == Roto){
            
        }
    }
}
