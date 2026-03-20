//
// Created by gesuby on 05/11/2025.
//

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
using namespace std;
#include "Producto.h"

Producto::Producto() {
    nombre=nullptr;
     precio=0;
}
Producto::~Producto() {
    if (nombre!=nullptr)delete nombre;
}

void Producto::get_nombre(char *cad) const {
    if (nombre==nullptr)cad[0]=0;
    else {
        strcpy(cad,nombre);
    }
}

void Producto::set_nombre(const char *cad) {
    if (nombre!=nullptr)delete nombre;
    nombre=new char[strlen(cad)+1];
    strcpy(nombre,cad);
}

double Producto::get_precio() const {
    return precio;
}

void Producto::set_precio(double precio) {
    this->precio = precio;
}
