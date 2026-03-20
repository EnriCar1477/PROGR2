//
// Created by alulab14 on 7/11/2025.
//

#include "Metrica.h"

Metrica::Metrica() {
    estado = false;
    id = 0;
    descripcion=nullptr;
    fecha_expiracion=0;
    fecha_calculo=0;
}

Metrica::Metrica(const Metrica &metrica) {
    liberar(this->descripcion);
    estado=metrica.estado;
    id=metrica.id;
    descripcion=extraerCadena(metrica.descripcion);
    fecha_expiracion=metrica.fecha_expiracion;
    fecha_calculo=metrica.fecha_calculo;
}

Metrica::~Metrica() {
    liberar(descripcion);
}

int Metrica::getId() {
    return id;
}
char *Metrica::getDescripcion() {
    return extraerCadena(descripcion);
}
int Metrica::getFechaCalculo() {
    return fecha_calculo;
}

int Metrica::getFecaExpiracion() {
    return fecha_expiracion;
}

bool Metrica::getEstado() {
    return estado;
}

void Metrica::setId(int id) {
    this->id = id;
}
void Metrica::setDescripcion(char *descripcion) {
    liberar(this->descripcion);
    this->descripcion = extraerCadena(descripcion);
}
void Metrica::setFechaCalculo(int fecha_calculo) {
    this->fecha_calculo = fecha_calculo;
}

void Metrica::setFecaExpiracion(int feca_expiracion) {
    this->fecha_expiracion = feca_expiracion;
}
void Metrica::setEstado(bool estado) {
    this->estado = estado;
}

void Metrica::leer(ifstream &arch) {
    char c,descripcionBuffer[100];
    int aaC,mmC,ddC,aaE,mmE,ddE;
    arch>>id>>c;
    arch.getline(descripcionBuffer,100,',');
    descripcion=extraerCadena(descripcionBuffer);
    arch>>aaC>>c>>mmC>>c>>ddC>>c>>aaE>>c>>mmE>>c>>ddE>>c;
    fecha_expiracion=10000*aaE+100*mmE+100+ddE;
    fecha_calculo=10000*aaC+100*mmC+100+ddC;
}



