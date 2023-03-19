#ifndef NINIO

#define NINIO
#include <string>
#include <vector>
#include "Objeto.h"
using namespace std;


class Ninio{
  private:
    string nombre; //Nombre del niño
    int edad; //Edad del niño
    string direccion; //Direccion del niño
    string telefono; //Telefono del niño


    vector<Objeto*> objetosPrestados; //Link a objetos prestados al niño

    int tamVectorObj;

  public:

    //Constructores
    Ninio(); //Constructor por defecto
    Ninio(string, int, string, string); //Constructor por parametros

    //Setters
    
    void setNombre(string); //Asigna nombre al niño
    void setEdad(int); //Asigna edad al niño
    void setDireccion(string); //Asigna direccion al niño
    void setTelefono(string); //Asigna telefono al niño

    //Getters

    string getNombre(); //Retorna nombre del niño
    int getEdad(); //Retorna edad del niño
    string getDireccion(); //Retorna direccion del niño
    string getTelefono(); //Retorna telefono del niño


    //Operaciones Ninio - Objeto
    void asignarObjeto(Objeto &obj); //Asigna un objeto al ninio, registra en objetosPrestados
    vector<string> listarObjetosPrestados(); //Obtiene información de todos los objetos prestados a un niño en particular
    

    ~Ninio(); //Destructor
};

#endif