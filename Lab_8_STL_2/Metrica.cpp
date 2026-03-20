//
// Created by enric on 26/11/2025.
//

#include "Metrica.h"


Metrica::Metrica() {
    estado=true;
    descripcion=nullptr;
}

int Metrica::getId() const{
    return id;
}

char * Metrica::getDescripcion() const {
    return colecCadena(descripcion);
}

int Metrica::getFechaCalculo() const {
    return fecha_calculo;
}

int Metrica::getFechaExpiracion() const {
    return fecha_expiracion;
}

bool Metrica::getEstado() const {
    return estado;
}

void Metrica::setId(int id) {
    this->id = id;
}

void Metrica::setDescripcion(char *descripcion) {
    this->descripcion = colecCadena(descripcion);
}

void Metrica::setFechaCalculo(int fecha_calculo) {
    this->fecha_calculo = fecha_calculo;
}

void Metrica::setFechaExpiracion(int fecha_expiracion) {
    this->fecha_expiracion = fecha_expiracion;
}

void Metrica::setEstado(bool estado) {
    this->estado = estado;
}

bool Metrica::operator<(Metrica *&metrica){
    int pa =this->getTipo();
    int pb = metrica->getTipo();
    if (pa != pb) return pa < pb;                    // por tipo
    //     // segundo criterio: descripción ascendente (trim y case-insensitive si quieres)
    std::string da = colecCadena(this->getDescripcion());
    std::string db = metrica->getDescripcion();
    // opcional: transformar a minúsculas y quitar espacios
    return da < db;
}

void Metrica::imprimir(ofstream &arch) {
    arch<<this->id<<"  "<<setfill(' ')<<this->descripcion<<setw(40-strlen(this->descripcion));
    if (estado) {
        arch<<"ACTIVA"<<setw(5)<<" ";
    }else {
        arch<<"VENCIDA"<<setw(5)<<" ";
    }
    arch<<fecha_calculo<<setw(15)<<fecha_expiracion;
}

void Metrica::leer(ifstream &arch) {
    char c;
    char bufferDescripcion[MAX];
    int ddC,mmC,aaC,ddE,mmE,aaE;
    arch>>id>>c;
    arch.getline(bufferDescripcion,MAX,',');
    arch>>aaC>>c>>mmC>>c>>ddC>>c>>aaE>>c>>mmE>>c>>ddE>>c;
    this->setDescripcion(bufferDescripcion);
    setFechaCalculo(ddC+100*mmC+10000*aaC);
    setFechaExpiracion(ddE+100*mmE+10000*aaE);
    if (fecha_calculo>fecha_expiracion) estado=false;
}