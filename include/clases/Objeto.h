#ifndef OBJETO

#define OBJETO
#include <iostream>
#include <string>
#include <vector>
#include "Estado.h"



using namespace std;

class Ninio;

class Objeto
{
private:
    string nombre;
    int anioComprado;
    Estado estado;
    Ninio *prestadoA; //Puntero al niño al que fue prestado ese objeto

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
    string getNombreNinio();
    Ninio* getNinio();

    virtual ~Objeto();
};
#include "Niño.h"

#endif
