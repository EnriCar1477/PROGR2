/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   PlatoFondo.cpp
 * Author: alulab14
 * 
 * Created on 22 de noviembre de 2024, 10:22 AM
 */
#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
using namespace std;
#include "PlatoFondo.h"

PlatoFondo::PlatoFondo() {
    proteina=0;
}

void PlatoFondo::setProteina(int proteina) {
    this->proteina = proteina;
}

int PlatoFondo::getProteina() const {
    return proteina;
}

PlatoFondo::PlatoFondo(const PlatoFondo& orig) {
}

PlatoFondo::~PlatoFondo() {
}

void PlatoFondo::lee(ifstream&arch){
    Producto::lee(arch);
    arch>>proteina;
}

void PlatoFondo::imprime(ofstream&arch){
    Producto::imprime(arch);
    arch<<"Proteina: ";
    if(proteina==1)arch<<"Pollo";
    if(proteina==2)arch<<"Carne";
    if(proteina==3)arch<<"Pescado";
    if(proteina==4)arch<<"Lacteos";
    arch<<endl;
}

bool PlatoFondo::elimina(int numprot){
    if(proteina==numprot)return true;
    return false;
}



