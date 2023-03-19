#include <string>
#include <vector>
#include "Niño.h"
#include "Libro.h"
#include "JuegoMesa.h"
#include <iostream>
#include <vector>
#include "Objeto.h"
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

using namespace std;

class Niño {
private:
    string nombre;
    int edad;
    vector<Objeto*> objetosPrestados;

public:
    Niño(string nombre, int edad) {
        this->nombre = nombre;
        this->edad = edad;
    }

    string getNombre() {
        return nombre;
    }

    int getEdad() {
        return edad;
    }

    void prestarObjeto(Objeto* objeto) {
        objetosPrestados.push_back(objeto);
    }

    void devolverObjeto(Objeto* objeto) {
        for (int i = 0; i < objetosPrestados.size(); i++) {
            if (objetosPrestados[i] == objeto) {
                objetosPrestados.erase(objetosPrestados.begin() + i);
                break;
            }
        }
    }

    void listarObjetosPrestados() {
        cout << "Objetos prestados por " << nombre << ":" << endl;
        for (int i = 0; i < objetosPrestados.size(); i++) {
            cout << "- " << objetosPrestados[i]->toString() << endl;
        }
    }
};
Esta implementación asume que la clase Objeto ya está definida y tiene un método toString() implementado. También asume que los objetos se prestan y devuelven utilizando punteros a objetos Objeto.






