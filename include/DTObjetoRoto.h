#ifndef DTOBJETOROTO
#define DTOBJETOROTO

#include <iostream>
#include <string>

using namespace std;

class DTObjetoRoto{
    private:
        string NombreObjeto;
        bool prestado;
        string NombreNinio;
    public:
        DTObjetoRoto();
        DTObjetoRoto(string,bool,string);
        string getNombreObjeto();
        bool getPrestado();
        string getNombreNinio();
        ~DTObjetoRoto();
};

#endif
