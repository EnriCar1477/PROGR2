//
// Created by enric on 25/11/2025.
//

#include "Metrica.h"

Metrica::Metrica() {
    descripcion=nullptr;
    estado = true;
}

Metrica::~Metrica() {
    liberarCadena(descripcion);
}

int Metrica::getId() {
    return id;
}

char * Metrica::getDescripcion() {
    return colecCadena(this->descripcion);
}

int Metrica::getFechaCalculo() {
    return fecha_calculo;
}

int Metrica::getFechaVencimiento() {
    return fecha_vencimiento;
}

bool Metrica::getEstado() {
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

void Metrica::setFechaVencimiento(int fecha_vencimiento) {
    this->fecha_vencimiento = fecha_vencimiento;
}

void Metrica::setEstado(bool estado) {
    this->estado = estado;
}

void Metrica::leer(ifstream &archivo) {
    char c,bufferDescripcion[50];
    int idStreamer,ddC,mmC,aaC,ddE,mmE,aaE;
    archivo>>idStreamer>>c>>id>>c;
    archivo.getline(bufferDescripcion,50,',');
    archivo>>aaC>>c>>mmC>>c>>ddC>>c>>aaE>>c>>mmE>>c>>ddE>>c;
    descripcion=colecCadena(bufferDescripcion);
    fecha_calculo = aaC*1000+100*mmC+ddC;
    fecha_vencimiento = aaE*1000+100*mmE+ddE;
}

// bool Metrica::operator<(Metrica *&metrica) const  {
//     int pa =this->id;
//     int pb = metrica->getId();
//     if (pa != pb) return pa < pb;                    // por tipo
//     // segundo criterio: descripción ascendente (trim y case-insensitive si quieres)
//
//     std::string da = colecCadena(this->descripcion);
//     std::string db = metrica->getDescripcion();
//     // opcional: transformar a minúsculas y quitar espacios
//     return da < db;
// }

void Metrica::imprimir(ofstream &archivo) {
    archivo<<getId()<<"  "<<setfill(' ')<<getDescripcion()<<setw(40-strlen(getDescripcion()))<<getFechaCalculo()<<setw(9)
            <<getFechaVencimiento();
    if (estado) {
        archivo<<setw(10)<<"ACTIVA";
    }else archivo<<setw(12)<<"INACTIVA";
}


