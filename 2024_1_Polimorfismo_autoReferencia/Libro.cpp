//
// Created by enric on 19/11/2025.
//

#include "Libro.h"


Libro::Libro() {
    nombre=nullptr;
    paginas=0;
    peso=0.0;
}

Libro::~Libro() {
    liberarCadena(nombre);
}

double Libro::getPeso() {
    return peso;
}

void Libro::leer(ifstream &arch) {
    char title[100];
    arch.getline(title,100,',');
    arch>>paginas;
    arch.get();
    arch>>peso;
    arch.get();
    nombre=colectCadena(title);
}

void Libro::setNombre(char *nombre) {
    liberarCadena(this->nombre);
    this->nombre=colectCadena(nombre);
}

void Libro::setPaginas(int paginas) {
    this->paginas=paginas;
}

void Libro::setPeso(double peso) {
    this->peso=peso;
}

void Libro::copiar(Libro *libro) {
    this->setPaginas(libro->paginas);
    this->setPeso(libro->peso);
    this->setNombre(libro->nombre);
}

void Libro::imprimir(ofstream &arch) {
    arch<<paginas<<endl;
    arch<<peso<<endl;
    arch<<nombre<<endl;
}

