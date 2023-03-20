#include <string>
#include <vector>
#include "../../include/clases/Niño.h"
#include "../../include/clases/Libro.h"
#include "../../include/clases/JuegoMesa.h"

using namespace std;


// Constructores
Ninio::Ninio(){}

Ninio::Ninio(string name, int age, string address, string phone){
  nombre = name;
  edad = age;
  direccion = address;
  telefono = phone;
  tamVectorObj = 0;
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

  tamVectorObj = objetosPrestados.size(); // Actualiza tamanio del vector
}




vector<string> Ninio::listarObjetosPrestados(){
  vector<string> stringsObjetos;
  for (int i = 0; i < tamVectorObj; i++){
    string text = objetosPrestados[i]->toString();
    stringsObjetos.push_back(text);
  }

  return stringsObjetos;
}

Ninio::~Ninio(){
  // Falta una operacion para destruir objetosPrestados
}