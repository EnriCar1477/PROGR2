//
// Created by enric on 11/11/2025.
//

#include "Dron.h"

Dron::Dron() {
    id=nullptr;
    ubicacion=nullptr;
    capacidad=0;
}

Dron::~Dron() {
    liberarCadena(id);
    liberarCadena(ubicacion);
}

char * Dron::getId() {
    return colectCadena(id);
}

void Dron::leer(ifstream &archive) {
    char id[6],ubicacion[20];
    int capacidad;
    archive.getline(id,6,',');
    archive.getline(ubicacion,20,',');
    archive>>capacidad;
    archive.get();
    this->ubicacion=colectCadena(ubicacion);
    this->capacidad=capacidad;
    this->id=colectCadena(id);
}

char Dron::determinarTipo() {
    char *idCadena=colectCadena(this->id);
    return idCadena[1];
}

void Dron::imprimir(ofstream &arch) {
    arch<<id<<" "<<ubicacion<<setw(9)<<capacidad<<setw(7)<<" ";
}

// void Dron::copiar(Dron &dron) {
//     this->id=colectCadena(dron.id);
//     this->ubicacion=colectCadena(dron.ubicacion);
//     this->capacidad=dron.capacidad;
// }
//
// void Dron::operator=(Dron &dron) {
//     liberarCadena(id);
//     liberarCadena(ubicacion);
//     this->copiar(dron);
// }
//

