//
// Created by enric on 12/11/2025.
//

#include "Producto.h"

Producto::Producto() {
    nombre=nullptr;
    precio=0.0;
}

Producto::~Producto() {
    if (nombre!=nullptr) delete nombre;
    // liberarEspacio(nombre);
}

void Producto::leer(ifstream &arch) {
    char nombre[20];
    arch.getline(nombre,20,',');
    this->nombre=colectorCadena(nombre);
    arch>>this->precio;
    arch.get();
}

void Producto::copiar(const Producto &orig) {
    this->nombre=colectorCadena(orig.nombre);
    this->precio=orig.precio;
}

void Producto::operator=(const Producto &orig) {
    if (nombre!=nullptr) delete nombre;
    // liberarEspacio(this->nombre);
    copiar(orig);
}

void Producto::imprimir(ofstream &arch) {
    arch<<"Nombre: "<<nombre<<endl;
    arch<<"Precio: "<<precio<<endl;
}


