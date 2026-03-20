//
// Created by cueva.r on 21/10/2025.
//
#include <iostream>
#include <cstring>
#include <fstream>
#include <iomanip>
#include "conreceta.h"

using namespace std;

conreceta::conreceta() {
    codmed=0;
    especialidad=nullptr;
}
conreceta::~conreceta() {

}

int conreceta::get_codmed() const {
    return codmed;
}

void conreceta::set_codmed(int codmed) {
    this->codmed = codmed;
}

void conreceta::get_especialidad(char *cad) const {
    if (especialidad==nullptr)cad[0]=0;
    else
        strcpy(cad,especialidad);
}

void conreceta::set_especialidad(char *cad) {
    if (especialidad!=nullptr)delete especialidad;
    especialidad=new char[strlen(cad)+1];
    strcpy(especialidad,cad);
}
//41379,5,12/02/2023,50611,51642949,Miranda/Alfonso
void conreceta::leemedicamento(ifstream &arch, int codigo,
    int fecha,int cant) {
    char cad[200];
    arch >> codmed;
    arch.getline(cad,200);
    // aqui tengo que buscar el medico
    medicamento::leemedicamento(arch, codigo, fecha, cant);
}

void conreceta::imprimemedicamento(ofstream &arch) {
    medicamento::imprimemedicamento(arch);
    //arch <<setw(10)<< get_codigo()<< setw(10) << get_cantidad();
    arch << setw(10)<< codmed << endl;
}



void conreceta::operator=(const conreceta &aux) {
    char cad[100];

    codmed=aux.codmed;
    aux.get_especialidad(cad);
    set_especialidad(cad);
    set_codigo(aux.get_codigo());
    aux.get_nombre(cad);
    set_nombre(cad);
    set_cantidad(aux.get_cantidad());
    set_precio(aux.get_precio());
    set_fecha(aux.get_fecha());
}

