#include <string>
#include <vector>
#include "Niño.h"
#include "Libro.h"
#include "JuegoMesa.h"

using namespace std;


// Constructores
Ninio::Ninio(){}

Ninio::Ninio(string name, int age, string address, string phone){
  nombre = name;
  edad = age;
  direccion = address;
  telefono = phone;
}

//Setters

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

//Getters

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

int Ninio::getCantObjPrestados(){
  return tamVectorObj;
}

// Operaciones Ninio - Objeto

void Ninio::asignarObjeto(Objeto &obj){
  objetosPrestados.push_back(&obj); // Pasar puntero obj a lista de punteros objetosPrestados.
  obj.asignarNinio(*this); // asignar este niño al objeto obj.  

  tamVectorObj = (int)objetosPrestados.size(); // Actualiza tamanio del vector
}




vector<string> Ninio::listarObjetosPrestados(){
  vector<string> stringsObjetos;

  for (int i = 0; i < tamVectorObj; i++){
  stringsObjetos.push_back(objetosPrestados[i]->toString());
  }

  return stringsObjetos;
}

Ninio::~Ninio(){
  // Falta una operacion para destruir objetosPrestados
}