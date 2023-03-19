#ifndef NINIO

#define NINIO
#include <string>
#include <vector>
#include "Objeto.h"
using namespace std;

class Libro;
class JuegoMesa;

class Ninio{
  private:
    string nombre; //Nombre del niño
    int edad; //Edad del niño
    string direccion; //Direccion del niño
    string telefono; //Telefono del niño
    vector<Libro> librosprest; //Link a libros prestados al niño
    vector<JuegoMesa> juegosprest; //Link a juegos prestados al niño
  public:
    Ninio(); //Constructor por defecto
    Ninio(string, int, string, string); //Constructor por parametros
    
    void setNombre(string); //Asigna nombre al niño
    void setEdad(int); //Asigna edad al niño
    void setDireccion(string); //Asigna direccion al niño
    void setTelefono(string); //Asigna telefono al niño
    void asignarLibro(Libro &l); //Asigna un libro al vector librosprest
    void asignarJuegoMesa(JuegoMesa &jm); //Asigna un juego de mesa al vector juegosprest

    string getNombre(); //Retorna nombre del niño
    int getEdad(); //Retorna edad del niño
    string getDireccion(); //Retorna direccion del niño
    string getTelefono(); //Retorna telefono del niño

    vector<string> listarObjetosPrestados(); //Obtiene información de todos los objetos prestados a un niño en particular
    int tamVectorLibros();
    int tamVectorJuegos();

    ~Ninio(); //Destructor
};

#endif