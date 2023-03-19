#ifndef OBJETO
#define OBJETO

#include <iostream>
#include <string>
#include "Estado.h"

using namespace std;



class Objeto
{
private:
    string nombre;
    int añoComprado;
    Estado estado;

public:
    virtual string toString() = 0;
    Objeto(string nombre, int añoComprado, Estado estado);
    Objeto();
    void setNombre(string nombre);
    void setAñoComprado(int año);
    void setEstado(Estado estado);

    string getNombre();
    int getAñoComprado();
    Estado getEstado();

    virtual ~Objeto();
};

#endif