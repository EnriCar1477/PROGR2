//
// Created by enric on 27/11/2025.
//

#include "Infraccion.h"

Infraccion::Infraccion() {
    descripcion = nullptr;
    codigo=nullptr;
    gravedad=nullptr;
}

Infraccion::Infraccion(const Infraccion &orig) {
    *this = orig;
}

Infraccion::~Infraccion() {
    liberarCadena(descripcion);
    liberarCadena(codigo);
    liberarCadena(gravedad);
}

void Infraccion::operator=(const Infraccion &e) {
    this->codigo=colecCadena(e.codigo);
    this->descripcion=colecCadena(e.descripcion);
    this->gravedad=colecCadena(e.gravedad);
    this->multa=e.multa;
}

void operator<<(ofstream &arch, const Infraccion &e) {

}

bool operator>>(istream &arch, Infraccion &e) {
    char bufferCodigo[MAX], bufferDescripcion[MAX], bufferGravedad[MAX];
    arch.getline(bufferCodigo,MAX,',');
    if (arch.eof()) return false;
    e.setCodigo(bufferCodigo);
    int multa;
    arch>>multa;
    arch.get();
    e.setMulta(multa);
    arch.getline(bufferDescripcion,MAX,',');
    arch.getline(bufferGravedad,MAX,'\n');
    e.setDescripcion(colecCadena(bufferDescripcion));
    e.setGravedad(colecCadena(bufferGravedad));
    return true;

}
