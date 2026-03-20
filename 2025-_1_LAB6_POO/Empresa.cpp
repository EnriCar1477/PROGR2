//
// Created by enric on 30/10/2025.
//
#include <iostream>
#include <fstream>
#include "Comunes.h"
#include "Empresa.h"

#include <cstring>
using namespace std;
Empresa::Empresa() {
    dni=0;
    nombre=nullptr;
    multas=nullptr;
    numPlacas=0;
    numMultas=0;
}

Empresa::~Empresa() {
    this->limpiar();
}
Empresa::Empresa(const Empresa &orig) {
    this->copiar(orig);
}

void Empresa::setPlacaI(char *placa, int i) {
    this->placas[i]=extraerCadena(placa);
}

char * Empresa::getPlacaI(int i) {
    return this->placas[i];
}

void Empresa::limpiar() {
    if(nombre!=nullptr) delete[] nombre;
    if(multas!=nullptr) delete[] multas;
    for (int i=0; i < numPlacas; i++) {
        if (this->placas[i]!=nullptr) delete[] this->placas[i];
    }
}

int Empresa::getDni() {
    return dni;
}

int Empresa::getNumMultas() {
    return numPlacas;
}

void Empresa::setNumMultas(int numMultas) {
    this->numPlacas=numMultas;
}

char * Empresa::getNombre() {
    return extraerCadena(nombre);
}

int Empresa::getNumPlacas() {
    return numPlacas;
}

void Empresa::setDni(int dni) {
    this->dni = dni;
}

void Empresa::setNombre(char *nombre) {
    this->nombre=extraerCadena(nombre);
}

void Empresa::setNumPlacas(int numPlacas) {
    this->numPlacas = numPlacas;
}

void Empresa::operator=(Empresa &orig) {
    this->limpiar();
    this->copiar(orig);
}

void Empresa::copiar(const Empresa &orig) {
    this->dni=orig.dni;
    this->numPlacas=orig.numPlacas;
    this->nombre=extraerCadena(orig.nombre);
    for (int i=0;i<numPlacas;i++) {
        this->placas[i]=extraerCadena(orig.placas[i]);
    }
    for (int j=0;j<numPlacas;j++) {
        this->multas[j]=orig.multas[j];
    }
}

void operator>>(ifstream &arch, Empresa &empresa) {
    int dni;
    char nombre[100],placa[9];
    arch>>empresa.dni;
    if (arch.is_open()) return;
    arch.get();
    arch.getline(nombre,100,',');
    while (true) {
        arch.getline(placa,9);
        if (arch.get()=='\n') break;
    }

}
