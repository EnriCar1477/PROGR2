//
// Created by enric on 27/11/2025.
//

#include "Multa.h"
#include "Comunes.h"
Multa::Multa() {
    placa=nullptr;
    codMulta=nullptr;
}

Multa::~Multa() {
    liberarCadena(placa);
    liberarCadena(codMulta);
}

Multa::Multa(const Multa &orig) {
    *this=orig;
}

int Multa::getFecha() {
    return getFecha();
}

int Multa::getFechaPago() {
    return fechaPago;
}

char * Multa::getPlaca() {
    return colecCadena(placa);
}

char * Multa::getCodMulta() {
    return colecCadena(codMulta);
}

double Multa::getMulta() {
    return multa;
}

bool Multa::getPagada() {
    return pagada;
}

void Multa::setFecha(int fecha) {
    this->fecha=fecha;
}

void Multa::setPlaca(char *placa) {
    this->placa=colecCadena(placa);
}

void Multa::setCodMulta(char *codMulta) {
    this->codMulta=colecCadena(codMulta);
}

void Multa::setMulta(double multa) {
    this->multa=multa;
}

void Multa::setPagada(bool pagada) {
    this->pagada=pagada;
}

void Multa::setFechaPago(int fechaPago) {
    this->fechaPago=fechaPago;
}

void Multa::operator=(const Multa &e) {
    this->multa=e.multa;
    this->placa=colecCadena(e.placa);
    this->codMulta=colecCadena(e.codMulta);
    this->fecha=e.fecha;
    this->pagada=e.pagada;
    this->fechaPago=e.fechaPago;
}
