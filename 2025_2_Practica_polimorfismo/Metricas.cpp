//
// Created by enric on 15/11/2025.
//

#include "Metricas.h"

Metricas::Metricas() {
    descripcion=nullptr;
    estado = false;
    id=0;
}

Metricas::~Metricas() {
    liberarCadena(descripcion);
}

char * Metricas::getDescripcion() {
    return colectCadena(descripcion);
}

void Metricas::leer(ifstream &arch) {
    char c,bufferDescripcion[100];
    int ddC,mmC,aaC,ddE,mmE,aaE;
    arch>>id;
    arch.get();
    arch.getline(bufferDescripcion,100,',');
    descripcion=colectCadena(bufferDescripcion);
    arch>>aaC>>c>>mmC>>c>>ddC>>c>>aaE>>c>>mmE>>c>>ddE>>c;
    fecha_calculo=ddC+mmC*100+aaC*10000;
    fecha_expiracion=ddE+mmE*100+aaE*10000;
    if (fecha_calculo<fecha_expiracion) estado=false;

}

void Metricas::escribir(ofstream &arch) {
    arch<<id<<setw(9)<<fecha_calculo<<setw(9)<<fecha_expiracion<<
        "  ";
    if (estado) {
        arch<<"ACTIVA"<<setw(4)<<" ";
    }else {
        arch<<"EXPIRADAA"<<setw(2)<<" ";
    }
}
