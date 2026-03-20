//
// Created by enric on 30/10/2025.
//
#include <iostream>
#include <fstream>
#include "MinisterioDeTransporte.h"
using namespace std;
MinisterioDeTransporte::MinisterioDeTransporte() {
    numEmpr = 0;
    numInf=0;
    infracciones=nullptr;
}

MinisterioDeTransporte::~MinisterioDeTransporte() {
    if (infracciones!=nullptr) delete [] infracciones;
}

void MinisterioDeTransporte::ingresarInfraccion(Infraccion &infraLocal, int &capacidad) {
    if (capacidad==this->numInf) {
        this->incrementarEspacioInfraccion(capacidad);
    }
    this->numInf++;
    this->infracciones[numInf]=infraLocal;
}

void MinisterioDeTransporte::incrementarEspacioInfraccion(int &capacidad) {
    capacidad+=5;
    if (this->infracciones=nullptr) {
        this->infracciones=new Infraccion[capacidad];
    }else {
        Infraccion *temp=new Infraccion[capacidad];
        for (int i=0;this->numInf;i++) {
            temp[i]=this->infracciones[i];
        }
        delete [] this->infracciones;
        this->infracciones=temp;
    }
}

void MinisterioDeTransporte::ingresarEmpresa(Empresa &empresaLocal, int i) {
    this->empresas[i]=empresaLocal;
}

void operator<(MinisterioDeTransporte &ministerio, const char *nomArch) {
    ifstream arch;
    aperturaIfstream(arch,nomArch);
    Infraccion infraLocal;
    int capacidad=0;
    while (true) {
        arch>>infraLocal;
        if (arch.eof()) break;
        // ministerio.ingresarInfraccion(infraLocal, capacidad);
    }
}

void operator<=(MinisterioDeTransporte &ministerio, const char *nomArch) {
    ifstream arch;
    aperturaIfstream(arch,nomArch);
    Empresa empresaLocal;
    // int contador=0;
    while (true) {
        arch>>empresaLocal;
        if (arch.eof()) break;
        // ministerio.ingresarEmpresa(empresaLocal,contador);
        // contador++;
    }
}
