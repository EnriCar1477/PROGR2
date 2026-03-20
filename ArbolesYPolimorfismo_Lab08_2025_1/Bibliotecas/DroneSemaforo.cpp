//
// Created by arian on 9/11/2025.
//

#include "DroneSemaforo.h"

DroneSemaforo::DroneSemaforo() {
    luz_roja = 0;
}

int DroneSemaforo::get_luz_roja() const {
    return luz_roja;
}

void DroneSemaforo::set_luz_roja(int luz_roja) {
    this->luz_roja = luz_roja;
}

void DroneSemaforo::leer(ifstream &arch) {
    Dron::leer(arch);
    char validacion[100];
    arch.getline(validacion,100,'\n');
    if (strcmp(validacion,"true")==0) {
        set_luz_roja(1);
    } else if (strcmp(validacion,"false")==0) {
        set_luz_roja(0);
    }
}

void DroneSemaforo::imprimir(ofstream &arch) {
    Dron::imprimir(arch);
    arch<<setw(30)<<luz_roja<<endl;
}
