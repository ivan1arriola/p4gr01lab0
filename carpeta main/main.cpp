#include "Libro.h"
#include "JuegoMesa.h"
#include "Niño.h"
#include "DTObjetoRoto.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
    string n = "Nacidos de la bruma: El imperio final";
    int a = 2022;
    Estado e = Roto;
    int c = 688;
    string au = "Brandon Sanderson";
    Objeto *l1 = new Libro(n, a, e, c, au);
    string ren = l1->toString();
    cout << "Objeto 1: " << endl;
    cout << ren << endl;
    
    n = "Las Malas";
    a = 2022;
    e = Nuevo;
    c = 240;
    au = "Camila Sosa Villada";
    Objeto *l2 = new Libro(n, a, e, c, au);
    ren = l2->toString();
    cout << endl;
    cout << "Objeto 2: " << endl;
    cout << ren << endl;
    
    n = "El cocodrilo al que no le gustaba el agua";
    a = 2016;
    e = Roto;
    c = 32;
    au = "Gemma Merino";
    Objeto *l3 = new Libro(n, a, e, c, au);
    ren = l3->toString();
    cout << endl;
    cout << "Objeto 3: " << endl;
    cout << ren << endl;
    
    n = "Juego Uno";
    a = 2022;
    e = Roto;
    int er = 7;
    int cj = 10;
    Objeto *j1 = new JuegoMesa(n, a, e, er, cj);
    ren = j1->toString();
    cout << endl;
    cout << "Objeto 4: " << endl;
    cout << ren << endl;
    
    n = "Mazo de cartas";
    a = 2019;
    e = Nuevo;
    er = 7;
    cj = 4;
    Objeto *j2 = new JuegoMesa(n, a, e, er, cj);
    ren = j2->toString();
    cout << endl;
    cout << "Objeto 5: " << endl;
    cout << ren << endl;

    n = "Dados";
    a = 2020;
    e = Roto;
    er = 2;
    cj = 6;
    Objeto *j3 = new JuegoMesa(n, a, e, er, cj);
    ren = j3->toString();
    cout << endl;
    cout << "Objeto 6: " << endl;
    cout << ren << endl;

    //Creamos vector con todos los objetos

    vector<Objeto*> objetos;
    objetos.push_back(j1);
    objetos.push_back(j2);
    objetos.push_back(j3);
    objetos.push_back(l1);
    objetos.push_back(l2);
    objetos.push_back(l3);

    n = "Maria Laura";
    int age = 10;
    string add = "Nueva Palmira 1521";
    string tel = "099298190";
    Ninio *n1 = new Ninio(n, age, add, tel);
    
    n = "Alex";
    age = 5;
    add = "Humberto Primo 1501";
    tel = "29094141";
    Ninio *n2 = new Ninio(n, age, add, tel);
    
    n1->asignarObjeto(j2);
    n1->asignarObjeto(l1);
    n1->asignarObjeto(j3);
    vector<string> pepe1 = n1->listarObjetosPrestados();
    cout << endl;
    cout << "Objetos prestados a Maria Laura: " << endl;
    for (int i = 0; i < pepe1.size(); i++){
        cout << pepe1[i] << endl;
    }

    n2->asignarObjeto(j1);
    n2->asignarObjeto(l3);
    vector<string> pepe2 = n2->listarObjetosPrestados();
    cout << endl;
    cout << "Objetos prestados a Alex: " << endl;
    for (int j = 0; j < pepe2.size(); j++){
        cout << pepe2[j] << endl;
    }
    
    string nombre;
    bool prestado;
    string nombreNinio;

    vector<DTObjetoRoto> objetosRotos;
    DTObjetoRoto objRoto;

    for(int i=0; i<objetos.size(); i++){
        if (objetos[i]->getEstado() == Roto){
            nombre = objetos[i]->getNombre();
            nombreNinio = objetos[i]->getNombreNinio();
            prestado = (nombreNinio != ""); // si el nombre del niño es una cadena vacía, no está asociado a ningún niño
            if(prestado){
                objetosRotos.push_back(DTObjetoRoto(nombre, prestado, nombreNinio));
            }else{
               objetosRotos.push_back(DTObjetoRoto(nombre, prestado)); 
            }
        }
    }

    cout << endl;
    cout << endl;
    cout << "Objetos rotos: " << endl;
    for(int i = 0; i < objetosRotos.size(); i++){
        cout << objetosRotos[i] << endl;
    }

    delete j1;

    cout << endl;
    cout << endl;
    vector<string> pepe3 = n2->listarObjetosPrestados();
    for (int j = 0; j < pepe3.size(); j++){
        cout << pepe3[j] << endl;
    }

    cout << endl;
    cout << endl;
    for(int i = 0; i < objetosRotos.size(); i++){
        cout << objetosRotos[i] << endl;
    }

    return 0;
}

