//
// Created by enric on 24/09/2025.
//
#include <iostream>
#include <iomanip>
#include "Alumno.h"

using namespace std;
    void Alumno::setCodigo(int cod) {
        //this->codigo=codigo;this desambiguar
        codigo=cod;
    }
    Alumno::Alumno() {
        codigo=0;
        nombre=nullptr;
        cout<<"Hola mundo"<<endl;
    }

