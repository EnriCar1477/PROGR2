//
// Created by enric on 11/11/2025.
//

#include "DroneSemaforo.h"

DroneSemaforo::DroneSemaforo() {
    luz_roja = 1;
}

void DroneSemaforo::leer(ifstream &archive) {
    Dron::leer(archive);
    char luz[6];
    archive.get(luz,7,'\n');
    if (strcmp(luz,"true")==0) luz_roja=1;
}

void DroneSemaforo::imprimir(ofstream &archive) {
    Dron::imprimir(archive);
    archive<<luz_roja<<endl;
}

void DroneSemaforo::actualizar() {
    luz_roja=0;
}

