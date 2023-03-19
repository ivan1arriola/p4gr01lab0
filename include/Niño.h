#ifndef NINIO

#define NINIO
#include <string>
#include <vector>
using namespace std;

class Objeto;

class Ninio{
  private:
    string nombre; //Nombre del niño
    int edad; //Edad del niño
    string direccion; //Direccion del niño
    string telefono; //Telefono del niño
    vector<Objeto> objprest; //Link a objetos prestados al niño
  public:
    Ninio(); //Constructor por defecto
    Ninio(string, int, string, string); //Constructor por parametros
    
    void setNombre(string); //Asigna nombre al niño
    void setEdad(int); //Asigna edad al niño
    void setDireccion(string); //Asigna direccion al niño
    void setTelefono(string); //Asigna telefono al niño
    void asignarObjeto(Objeto &o); //Asigna un objeto al vector objprest

    string getNombre(); //Retorna nombre del niño
    int getEdad(); //Retorna edad del niño
    string getDireccion(); //Retorna direccion del niño
    string getTelefono(); //Retorna telefono del niño

    //vector<string> listarObjetosPrestados(); //Obtiene información de todos los objetos prestados a un niño en particular
    //int tamVector();

    ~Ninio(); //Destructor
};

#endif