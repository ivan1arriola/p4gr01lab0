#include <iostream>
#include <string>
#include "Objeto.h"
#include <stdlib.h>
using namespace std;

class Libro : public Objeto
{
    private:
        int cantDePaginas;
        string autor;
    public:
        virtual string toString();

        void setCantDePaginas(int cant);
        void setCantJugadores(string autor);
        int getCantDePaginas();
        string getAutor();

        Libro(string nombre, int anio, Estado estado, int cantPaginas, string autor);
        Libro();

        ~Libro();
}
