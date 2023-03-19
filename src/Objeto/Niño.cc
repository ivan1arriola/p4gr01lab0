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

void Ninio::asignarLibro(Libro &l){
  librosprest.push_back(l);
}

void Ninio::asignarJuegoMesa(JuegoMesa &jm){
  juegosprest.push_back(jm);
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

int Ninio::tamVectorLibros(){
  return librosprest.capacity();
}

int Ninio::tamVectorJuegos(){
  return juegosprest.capacity();
}

vector<string> Ninio::listarObjetosPrestados(){
  vector<string> stringsObjetos;
  for (int i = 0; i < librosprest.capacity(); i++){
    stringsObjetos.push_back(librosprest[i].toString());
  }
  for (int j = 0; j < juegosprest.capacity(); j++){
    stringsObjetos.push_back(juegosprest[j].toString());
  }
  return stringsObjetos;
}

Ninio::~Ninio(){
  
}