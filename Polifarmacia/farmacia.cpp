//
// Created by cueva.r on 28/10/2025.
//
#include <iostream>
#include <fstream>
#include "farmacia.h"

using namespace std;

farmacia::farmacia() {
    loferta=nullptr;
}

farmacia::~farmacia() {
    //aqui me falta
}
/*
53846,17,13/02/2023,50611,51642950,Miranda/Alfonso
61039,28,20/08/2022,15092,61061535,Solis/Maria
 */
void farmacia::leerecetas() {
    int i=0,medicamento,dd,mm,aa,cant;
    char c;
    oferta buffer[200];
    ifstream arch("recetas2.csv",ios::in);
    if (!arch) {
        cout << "No se puede abrir las recetas";
        exit(1);
    }
    while (1) {
        arch >> medicamento;
        if (arch.eof())break;
        arch >> c >> cant >>c >>dd >> c>> mm>>c>>aa>>c;
        int fecha=aa*10000+mm*100+dd;
        buffer[i].leeoferta(arch,medicamento,fecha,cant);
        i++;
    }
    loferta=new oferta[i+1];

    for (int j=0;j<i;j++) {
        loferta[j]=buffer[j];
    }

}

void farmacia::imprimerecetas() {
    ofstream arch("reporte.txt",ios::out);
    if (!arch) {
        cout << "No se puede abrir el reporte";
        exit(1);
    }
    for (int i=0; loferta[i].ser();i++) {
        loferta[i].imprimeoferta(arch);
    }
}
