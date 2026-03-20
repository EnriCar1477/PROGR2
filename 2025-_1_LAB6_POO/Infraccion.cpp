//
// Created by enric on 30/10/2025.
//
#include <iostream>
#include <fstream>
#include <iomanip>
#include "Infraccion.h"
#include "Comunes.h"
using namespace std;

Infraccion::Infraccion() {
    codigo=0;
    descripcion=nullptr;
    gravedad=nullptr;
    multa=0.0;
}

Infraccion::~Infraccion() {
   this->limpiar();
}

Infraccion::Infraccion(const Infraccion &orig) {
    this->copiar(orig);
}

int Infraccion::getCodigo() {
    return codigo;
}

char * Infraccion::getDescripcion() {
    return extraerCadena(descripcion);
}

char * Infraccion::getGravedad() {
    return extraerCadena(gravedad);
}

double Infraccion::getMulta() {
    return multa;
}

void Infraccion::setCodigo(int codigo) {
    this->codigo=codigo;
}

void Infraccion::setDescripcion(char *descripcion) {
    if (this->descripcion!=nullptr) delete this->descripcion;
    this->descripcion=extraerCadena(descripcion);
}

void Infraccion::setGravedad(char *gravedad) {
    if (this->gravedad!=nullptr) delete this->gravedad;
    this->gravedad=extraerCadena(gravedad);
}

void Infraccion::setMulta(double multa) {
    this->multa=multa;
}

void Infraccion::operator=(Infraccion &infraccion) {
    this->limpiar();
    this->copiar(infraccion);

}

void Infraccion::copiar(const Infraccion &orig) {
    this->codigo=orig.codigo;
    this->descripcion=extraerCadena(orig.descripcion);
    this->gravedad=extraerCadena(orig.gravedad);
    this->multa=orig.multa;
}

void Infraccion::limpiar() {
    if (descripcion!=nullptr) delete descripcion;
    if (gravedad!=nullptr) delete gravedad;
}


void operator>>(ifstream &arch, Infraccion &infraccion) {
    int codigo;
    double multa;
    char gravedad[100],descripcion[200];
    arch>>codigo;
    if (arch.eof()) return;
    arch.get();
    arch>>multa;
    arch.get();
    arch.getline(gravedad,100,',');
    arch.getline(descripcion,200,'\n');
    infraccion.setCodigo(codigo);
    infraccion.setDescripcion(descripcion);
    infraccion.setGravedad(gravedad);
    infraccion.setMulta(multa);
}
