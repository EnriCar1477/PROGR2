//
// Created by enric on 27/11/2025.
//

#include "Vehiculos.h"


Vehiculos::Vehiculos() {
    placa=nullptr;
    modelo=nullptr;
    marca=nullptr;
}

Vehiculos::~Vehiculos() {
    liberarCadena((placa));
    liberarCadena((modelo));
    liberarCadena((marca));
}

Vehiculos::Vehiculos(const Vehiculos &org) {
    *this = org;
}

char * Vehiculos::getPlaca() {
    return colecCadena(placa);
}

char * Vehiculos::getMarca() {
    return colecCadena(marca);
}

char * Vehiculos::getModelo() {
    return colecCadena(modelo);
}

void Vehiculos::setPlaca(char *placa) {
    this->placa=colecCadena(placa);
}
void Vehiculos::setMarca(char *marca) {
    this->marca=colecCadena(marca);
}
void Vehiculos::setModelo(char *modelo) {
    this->modelo=colecCadena(modelo);
}

void Vehiculos::operator=(const Vehiculos &org) {
    this->placa=colecCadena(org.placa);
    this->modelo=colecCadena(org.modelo);
    this->marca=colecCadena(org.marca);

}



