#include <string>
#include <vector>
#include "Niño.h"
#include "Libro.h"
#include "JuegoMesa.h"

using namespace std;

Ninio::Ninio(){
  
}

Ninio::Ninio(string name, int age, string address, string phone){
  nombre = name;
  edad = age;
  direccion = address;
  telefono = phone;
}

void Ninio::setNombre(string name){
  nombre = name;
}

void Ninio::setEdad(int age){
  edad = age;
}

void Ninio::setDireccion(string address){
  direccion = address;
}

void Ninio::setTelefono(string phone){
  telefono = phone;
}

void Ninio::asignarObjeto(Objeto &obj){
  objprest.push_back(obj);
}

string Ninio::getNombre(){
  return nombre;
}

int Ninio::getEdad(){
  return edad;
}

string Ninio::getDireccion(){
  return direccion;
}

string Ninio::getTelefono(){
  return telefono;
}

/*int Ninio::tamVector(){
  return objprest.capacity();
}*/

/*vector<string> Ninio::listarObjetosPrestados(){
  
}*/

Ninio::~Ninio(){
  
}