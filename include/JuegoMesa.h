#include <iostream>
#include <string>
#include "Objeto.h"
using namespace std;

class JuegoMesa:public Objeto
{
    private:
        int edadRecomendada;
        int cantJugadores;
    public:
        virtual string toString();

        void setEdadRecomendada(int edad);
        void setCantJugadores(int cantJugadores);
        int getEdadRecomendada();
        int getCantJugadores();

        JuegoMesa(string nombre, int añoComprado, Estado estado, int edadRecomendada, int cantJugadores);
        JuegoMesa();

        ~JuegoMesa();
}