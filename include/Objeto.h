#ifndef OBJETO

#define OBJETO
#include <iostream>
#include <string>
#include <vector>
#include "Estado.h"
#include "Niño.h"

using namespace std;

class Objeto
{
private:
    string nombre;
    int anioComprado;
    Estado estado;
    Ninio prestadoA; //Link al niño al que fue prestado ese objeto

public:
    virtual string toString() = 0;

    Objeto(string nombre, int anioComprado, Estado estado); //Al inicializar seteamos con NULL la primera entrada a nombre de Niño
    Objeto();

    void setNombre(string nombre);
    void setAnioComprado(int anio);
    void setEstado(Estado estado);
    void asignarNinio(Ninio &kid); //Asigna este objeto a un Niño

    string getNombre();
    int getAnioComprado();
    Estado getEstado();

    virtual ~Objeto();
};

#endif
