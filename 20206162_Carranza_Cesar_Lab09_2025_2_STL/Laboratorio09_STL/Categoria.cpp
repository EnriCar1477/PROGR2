//
// Created by alulab14 on 28/11/2025.
//

#include "Categoria.h"

Categoria::Categoria() {

}

Categoria::~Categoria() {

}

Categoria::Categoria(const Categoria &orig) {
    *this=orig;
}

string Categoria::getCodigo() {
    return codigo;
}

string Categoria::getNombre() {
    return nombre;
}

string Categoria::getDescripcion() {
    return descripcion;
}

void Categoria::setCodigo(const string codigo) {
    this->codigo=codigo;
}

void Categoria::setNombre(const string nombre) {
    this->nombre=nombre;
}
void Categoria::setDescripcion(const string descripcion) {
    this->descripcion=descripcion;
}

void Categoria::operator=(const Categoria &orig) {
    this->nombre=orig.nombre;
    this->codigo=orig.codigo;
    this->descripcion=orig.descripcion;
}

void Categoria::operator>>(ifstream &arch) {
    char bufferCodigo[MAX],bufferNombre[MAX],bufferDescripcion[MAX];
    arch.getline(bufferCodigo,MAX,',');
    if (arch.eof()) return;
    arch.getline(bufferNombre,MAX,',');
    arch.getline(bufferDescripcion,MAX,'\n');
    this->setCodigo(bufferCodigo);
    this->setDescripcion(bufferDescripcion);
    this->setNombre(bufferNombre);
}

