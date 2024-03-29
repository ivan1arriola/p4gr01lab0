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
        DTObjetoRoto(string, bool);
        string getNombreObjeto();
        bool getPrestado();
        string getNombreNinio();
        ~DTObjetoRoto();
    friend ostream &operator<<(ostream &o,DTObjetoRoto &d);    
};

#endif
