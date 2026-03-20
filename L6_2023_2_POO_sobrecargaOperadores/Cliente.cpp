//
// Created by enric on 27/10/2025.
//
#include <iostream>
#include <fstream>
#include "Cliente.h"
#include "Pedidos.h"
#include "ProductoEntregado.h"

#include <cstring>

#include "Comunes.h"
using namespace std;

Cliente::Cliente() {
    inicializar();
}
Cliente::~Cliente() {
    if (nombre!=nullptr) {
        delete nombre;
    }
}

Cliente::Cliente(int dni, char *nombre, int telefono) {
    this->dni = dni;
    this->nombre = extraerCadena(nombre);
    this->telefono = telefono;
}

void Cliente::copia(const Cliente &orig) {
    this->dni=orig.dni;
    this->cant_productos_entregados=orig.cant_productos_entregados;
    this->monto_total=orig.monto_total;
    this->nombre=extraerCadena(orig.nombre);
    this->telefono=orig.telefono;
}

void Cliente::inicializar(){
    dni=0;
    monto_total=0.0;
    cant_productos_entregados=0;
    nombre=nullptr;
}

bool Cliente::operator ==(const Pedidos &orign) {
    return dni==orign.getDni_cliente();
}

void Cliente::operator=(const Cliente &orig) {
    if (this->nombre!=nullptr) {
        delete this->nombre;
    }
    this->copia(orig);
}
bool operator >>(ifstream &arch,Cliente &cliente){
    int telefono,dni;
    arch>>dni;
    char nombre[100];
    if (arch.eof()) return false;
    arch.get();
    arch.getline(nombre,100,',');
    arch>>telefono;
    Cliente clienteAuxiliar(dni,nombre,telefono);
    cliente=clienteAuxiliar;
    return true;
}
