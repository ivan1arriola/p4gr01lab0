#include "Libro.h"
#include "JuegoMesa.h"
#include "Niño.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
    
string n = "Nacidos de la bruma: El imperio final";
    int a = 2022;
    Estado e = Roto;
    int c = 688;
    string au = "Brandon Sanderson";
    Libro l1(n, a, e, c, au);
    string ren = l1.toString();
    cout << ren << endl;
    
    n = "Las Malas";
    a = 2022;
    e = Nuevo;
    c = 240;
    au = "Camila Sosa Villada";
    Libro l2(n, a, e, c, au);
    ren = l2.toString();
    cout << ren << endl;
    
    n = "El cocodrilo al que no le gustaba el agua";
    a = 2016;
    e = Roto;
    c = 32;
    au = "Gemma Merino";
    Libro l3(n, a, e, c, au);
    ren = l3.toString();
    cout << ren << endl;
    
    n = "Juego Uno";
    a = 2022;
    e = Roto;
    int er = 7;
    int cj = 10;
    JuegoMesa j1(n, a, e, er, cj);
    ren = j1.toString();
    cout << ren << endl;
    
    n = "Mazo de cartas";
    a = 2019;
    e = Nuevo;
    er = 7;
    cj = 4;
    JuegoMesa j2(n, a, e, er, cj);
    ren = j2.toString();
    cout << ren << endl;

    n = "Dados";
    a = 2020;
    e = Roto;
    er = 2;
    cj = 6;
    JuegoMesa j3(n, a, e, er, cj);
    ren = j3.toString();
    cout << ren << endl;

    n = "Maria Laura";
    int age = 10;
    string add = "Nueva Palmira 1521";
    string tel = "099298190";
    Ninio n1(n, age, add, tel);
    
    n = "Alex";
    age = 5;
    add = "Humberto Primo 1501";
    tel = "29094141";
    Ninio n2(n, age, add, tel);
    
    int tam = n1.getCantObjPrestados();
    cout << "La cantidad de objeto prestados a n1 es: " << tam << endl;
    cout << "Le asignamos a n1, 3 objetos" << endl;
    cout << "Resultado esperado: 3" << endl;
    n1.asignarObjeto(j2);
    n1.asignarObjeto(l1);
    n1.asignarObjeto(j3);
    tam = n1.getCantObjPrestados();
    cout << "Resultado: " << tam << endl;

    tam = n1.getCantObjPrestados();
    cout << "La cantidad de objeto prestados es: " << tam << endl;


    
    vector<string> pepe = n1.listarObjetosPrestados();
    cout << "Se termino de ejecutar listarObjetosPrestados";
    for (int i = 0; i < pepe.size(); i++){
        cout << pepe[i] << endl;
    }

    return 0;
}