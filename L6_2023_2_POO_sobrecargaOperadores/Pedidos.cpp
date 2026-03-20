//
// Created by enric on 27/10/2025.
//
#include <iostream>
#include <fstream>
#include "Pedidos.h"
#include "Comunes.h"
using namespace std;
Pedidos::Pedidos() {
    codigo=nullptr;
    precio_producto=0.0;
}

Pedidos::~Pedidos() {
    if (codigo!=nullptr) delete codigo;
}

char * Pedidos::getCodigo() const {
    return extraerCadena(codigo);
}

void Pedidos::setPrecio_producto(double precio_producto){
    this->precio_producto=precio_producto;
}

int Pedidos::getDni_cliente() const{
    return dni_cliente;
}

Pedidos::Pedidos(char *codigo, int dni_cliente) {
    this->codigo=extraerCadena(codigo);
    this->dni_cliente=dni_cliente;
}

void Pedidos::copia(const Pedidos &orig) {
    this->dni_cliente=orig.dni_cliente;
    this->codigo=extraerCadena(orig.codigo);
}

void Pedidos::operator=(const Pedidos &orig) {
    if (this->codigo!=nullptr) delete this->codigo;
    this->codigo=extraerCadena(orig.codigo);
}

bool operator >>(ifstream &arch,Pedidos &pedidos) {
    char codigo[8];
    int dni;
    arch.getline(codigo,8,',');
    if (arch.eof()) return false;;
    arch>>dni;
    arch.get();
    Pedidos pedioAuxiliar(codigo,dni);
    pedidos=pedioAuxiliar;

    return true;
}
