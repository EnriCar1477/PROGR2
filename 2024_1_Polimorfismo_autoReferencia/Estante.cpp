//
// Created by enric on 19/11/2025.
//

#include "Estante.h"

Estante::Estante() {
    capacidad=0.0;
}

void Estante::setId(int id) {
    this->id=id;
}

void Estante::setCapacidad(double capacidad) {
    this->capacidad=capacidad;
}

void Estante::setClase(char clase) {
    this->clase=clase;
}

int Estante::getId() {
    return this->id;
}

double Estante::getCapacidad() {
    return this->capacidad;
}

void Estante::insertar(Libro *libro) {
    Llibros.insertar(libro);
}

bool Estante::verificar(Libro *libro) {
    if (capacidad>=libro->getPeso()+Llibros.getPeso()) return true;
    else return false;
}

void Estante::imprimirList(ofstream &arch) {
    Llibros.imprimir(arch);
}

void Estante::imprimir(ofstream &arch) {
    arch<<id<<endl;
    arch<<clase<<endl;
    arch<<capacidad<<endl;
    for (int i=0;i<120;i++) {
        arch<<"-";
    }
    this->imprimirList(arch);
    arch<<endl;

}

void Estante::bajar() {
    Llibros.bajar();
}
