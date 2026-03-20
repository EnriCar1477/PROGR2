//
// Created by cueva.r on 21/10/2025.
//
#include <iostream>
#include <cstring>
#include "sinreceta.h"
#include <iomanip>

using namespace std;

sinreceta::sinreceta() {
    dni=0;
    nombre=nullptr ;
}

sinreceta::~sinreceta() {
    if(nombre!=nullptr) delete nombre;
}



int sinreceta::get_dni() const {
    return dni;
}

void sinreceta::set_dni(int dni) {
    this->dni = dni;
}

void sinreceta::get_nombre(char *cad) const {
    if (nombre==nullptr)cad[0]=0;
    else
        strcpy(cad,nombre);
}

void sinreceta::set_nombre(char *cad) {
    if (nombre!=nullptr)delete nombre;
    nombre=new char[strlen(cad)+1];
    strcpy(nombre,cad);
}
//30796,5,13/02/2023,50611,51642950,Miranda/Alfonso
void sinreceta::leemedicamento(ifstream &arch, int codigo,
    int fecha,int cant) {
    int codmed;
    char nom[100],c;
    arch>>codmed>>c >> dni>>c;
    arch.getline(nom,100);
    set_nombre(nom);
    medicamento::leemedicamento(arch, codigo, fecha, cant);
}

void sinreceta::imprimemedicamento(ofstream &arch) {
    medicamento::imprimemedicamento(arch);
    arch << setw(10) << dni << setw(50)<< nombre <<endl;
}
