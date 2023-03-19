#ifndef OBJETO
#define OBJETO

#include <iostream>
#include <string>

using namespace std;

enum class Estado
{
    Nuevo,
    BienConservado,
    Roto
};

class Objeto
{
private:
    string nombre;
    int añoComprado;
    Estado estado;
    bool prestado;
    string nombreNinio;

public:
    virtual string toString() = 0;
    Objeto(string nombre, int añoComprado, Estado estado);
    Objeto();
    void setNombre(string nombre);
    void setAñoComprado(int año);
    void setEstado(Estado estado);
    void setPrestado(bool prestado);
    void setNombreNinio(string nombreninio);

    string getNombre();
    int getAñoComprado();
    Estado getEstado();
    bool getPrestado();
    string getNombreNinio();

    virtual ~Objeto();
};
#endif