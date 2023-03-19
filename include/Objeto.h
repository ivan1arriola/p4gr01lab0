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

public:
    virtual string toString() = 0;
    Objeto(string nombre, int añoComprado, Estado estado);
    Objeto();
    void setNombre(string nombre);
    void setAñoComprado(int año);
    void setEstado(Estado estado);

    string getNombre();
    int getAñoComprado();
    string getEstado();

    virtual ~Objeto();
};
