//
// Created by arian on 9/11/2025.
//

#include "Dron.h"

#include <cstring>
#include <set>

Dron::Dron() {
    inicializa();
}

void Dron::inicializa() {
    id = nullptr;
    ubicacion = nullptr;
    capacidad = 0;
}

void Dron::leer(ifstream &arch) {
    char dir[100];
    char iden[100];
    int cap;
    arch.getline(iden,100,',');
    arch.getline(dir,100,',');
    arch>>cap;
    arch.get();

    set_id(iden);
    set_ubicacion(dir);
    set_capacidad(cap);
}

void Dron::imprimir(ofstream &arch) {
    char iden[100];
    get_id(iden);
    char ubic[100];
    get_ubicacion(ubic);
    int cap = get_capacidad();
    arch<<left<<setw(17)<<iden<<setw(16)<<ubic<<right<<setw(10)<<cap;
}

Dron::Dron(const Dron& orig) {
    inicializa();
    *this =orig;

}

void Dron::operator=(const Dron& orig) {
    char cadena[100];
    orig.get_ubicacion(cadena);
    set_ubicacion(cadena);
    orig.get_id(cadena);
    set_id(cadena);
    capacidad = orig.get_capacidad();
}

void Dron::get_id(char *iden) const {
    if (id == nullptr) iden[0] = 0;
    else strcpy(iden, id);
}

void Dron::set_id(char *iden) {
    if (id != nullptr) delete id;
    id = new char[strlen(iden) + 1]{};
    strcpy(id, iden);
}

void Dron::get_ubicacion(char *location) const {
    if (ubicacion == nullptr) location[0] = 0;
    else strcpy(location, ubicacion);
}

void Dron::set_ubicacion(char *location) {
    if (ubicacion != nullptr) delete ubicacion;
    ubicacion = new char[strlen(location) + 1]{};
    strcpy(ubicacion, location);
}

int Dron::get_capacidad() const {
    return capacidad;
}

void Dron::set_capacidad(int capacidad) {
    this->capacidad = capacidad;
}

Dron::~Dron() {
    if (id != nullptr) delete id;
    if (ubicacion != nullptr) delete ubicacion;
}
