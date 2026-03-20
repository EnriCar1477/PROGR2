//
// Created by cueva.r on 21/10/2025.
//
#include <iostream>
#include <cstring>
#include "medicamento.h"

#include <iomanip>

using namespace std;

medicamento::medicamento() {
    codigo=0;
    nombre=nullptr;
    cantidad=0;
    precio=0;
}
medicamento::~medicamento() {
    if(nombre!=nullptr) delete nombre;
}


int medicamento::get_codigo() const {
    return codigo;
}

void medicamento::set_codigo(int codigo) {
    this->codigo = codigo;
}

void medicamento::get_nombre(char *cad) const {
    if (nombre==nullptr)cad[0]=0;
    else
        strcpy(cad,nombre);
}

void medicamento::set_nombre(char *cad) {
    if (nombre!=nullptr)delete nombre;
    nombre=new char[strlen(cad)+1];
    strcpy(nombre,cad);
}


int medicamento::get_cantidad() const {
    return cantidad;
}

void medicamento::set_cantidad(int cantidad) {
    this->cantidad = cantidad;
}

double medicamento::get_precio() const {
    return precio;
}

void medicamento::set_precio(double precio) {
    this->precio = precio;
}

int medicamento::get_fecha() const {
    return fecha;
}

void medicamento::set_fecha(int fecha) {
    this->fecha = fecha;
}
/*
84766,CIPROFLOXACINO SOL.OFT 5MG,79.9
60685,NITROFURANTOINA C40 100MG,79.9
 */
void medicamento::leemedicamento(ifstream &arch, int codigo,
    int fecha,int cant) {
    this->codigo=codigo;
    cantidad=cant;
    this->fecha=fecha;
    //aqui falta los datos del medicamento
}



void medicamento::imprimemedicamento(ofstream &arch) {
    arch << setw(10) << codigo << setw(10) << fecha << setw(5)<< cantidad;
}
