//
// Created by enric on 27/10/2025.
//
#include <iostream>
#include <fstream>
#include "Producto.h"
#include "Pedidos.h"
#include "Cliente.h"
#include <cstring>
#include "Comunes.h"
using namespace std;
Producto::Producto() {
    this->codigo=nullptr;
    this->precio=0.0;
    this->cant_clientes_servidos=0;
    this->canti_clientes_no_servidos=0;
    this->stock=0;
    this->descripcion=nullptr;
}

Producto::~Producto() {
    if (descripcion!=nullptr) {
        delete descripcion;
    }
    if (codigo!=nullptr) {
        delete codigo;
    }
}

Producto::Producto(char *codigo, char *descripcion, int precio, int stock) {
    this->codigo=extraerCadena(codigo);
    this->descripcion=extraerCadena(descripcion);
    this->precio=precio;
    this->stock=stock;
}

void Producto::operator=(const Producto &orig) {
    if (this->codigo!=nullptr) delete this->codigo;
    if (this->descripcion!=nullptr) delete this->descripcion;
    this->copia(orig);
}

bool Producto::operator==(const Pedidos &pedido) {
    return strcmp(codigo,pedido.getCodigo())==0;
}

void Producto::copia(const Producto &orig) {
    this->codigo=extraerCadena(orig.codigo);
    this->descripcion=extraerCadena(orig.descripcion);
    this->precio=orig.precio;
    this->stock=orig.stock;
}

bool Producto::operator+=(const Pedidos &orig) {
    if (stock>0) {
        clientes_servidos[cant_clientes_servidos]=orig.getDni_cliente();
        cant_clientes_servidos++;
        return true;
    }else return false;
}
bool operator>>(ifstream &arch, Producto &producto) {
    int stock;
    double precio;
    char codigo[8],descripcion[100];
    arch.getline(codigo,8,',');
    if (arch.eof()) return false;
    arch.getline(descripcion,100,',');
    arch>>precio;
    arch.get();
    arch>>stock;
    arch.get();
    Producto productoAuxiliar(codigo,descripcion,precio,stock);
    producto=productoAuxiliar;
    return true;


}
