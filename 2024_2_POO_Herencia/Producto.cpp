//
// Created by enric on 4/11/2025.
//
#include "Comunes.h"
#include "Producto.h"

Producto::Producto() {
    nombre=nullptr;
    precio=0;
}

Producto::~Producto() {
    liberar(nombre);
}
void Producto::setNombre(char *nombre) {
    liberar(this->nombre);
    this->nombre=extraeCadena(nombre);
}

void Producto::setPrecio(double precio) {
    this->precio=precio;
}

double Producto::getPrecio() {
    return this->precio;
}

char * Producto::getNombre() {
    return extraeCadena(nombre);
}

