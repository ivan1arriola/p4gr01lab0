#include <iostream>
#include <string>
#include "Objeto.h"
using namespace std;

class Libro:public Objeto
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

        Libro(string nombre, int añoComprado, Estado estado, int cantDePaginas, string autor);
        Libro();

        ~Libro();
}