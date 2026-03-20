//
// Created by enric on 30/10/2025.
//
#include <iostream>
#include <fstream>
#include "Comunes.h"
#include "Multa.h"
using namespace std;
Multa::Multa() {
    placa=nullptr;
    fechaInfraccion=0;
    fechaPago=0;
    codigoInfracion=0;
    multa=0.0;
}

Multa::~Multa() {
    this->limpiar();
}

Multa::Multa(const Multa &multa) {
    this->copiar(multa);
}

void Multa::operator=(Multa &multa) {
    this->limpiar();
    this->copiar(multa);
}

void Multa::copiar(const Multa &multa) {
    this->placa=extraerCadena(multa.placa);
    this->fechaInfraccion=multa.fechaInfraccion;
    this->fechaPago=multa.fechaPago;
    this->codigoInfracion=multa.codigoInfracion;
    this->multa=multa.multa;
}

void Multa::limpiar() {
    if (placa!=nullptr) delete placa;
}

void Multa::setPlaca(char *placa) {
    this->placa=extraerCadena(placa);
}

void Multa::setFechaInfracion(int fechaInfracion) {
    this->fechaInfraccion=fechaInfracion;
}

void Multa::setFechaPago(int fechaPago) {
    this->fechaPago=fechaPago;
}

void Multa::setCodigoInfracion(int codigoInfracion) {
    this->codigoInfracion=codigoInfracion;
}

void Multa::setMulta(double multa) {
    this->multa=multa;
}

char * Multa::getPlaca() {
    return extraerCadena(this->placa);
}

int Multa::getFechaInfracion() {
    return fechaInfraccion;
}

int Multa::getFechaPago() {
    return fechaPago;
}

int Multa::getCodigoInfracion() {
    return codigoInfracion;
}

double Multa::getMulta() {
    return multa;
}
void operator>>(ifstream &arch, Multa &multa) {
    int dd,mm,aa,ddP,mmP,aaP,fechaInf,fechaPago,codigo;
    char c,placa[9];
    arch>>dd;
    if (arch.eof()) return;
    arch>>c>>mm>>c>>aa>>c;
    arch.getline(placa,9,',');
    arch>>codigo;
    fechaInf=10000*aa+100*mm+dd;
    if (arch.get()!='\n') {
        arch>>ddP>>c>>mmP>>c>>aaP;
        fechaPago=10000*aaP+100*mmP+ddP;;
    }
    multa.setPlaca(placa);
    multa.setFechaInfracion(fechaInf);
    multa.setFechaPago(fechaPago);
    multa.setCodigoInfracion(codigo);

}


