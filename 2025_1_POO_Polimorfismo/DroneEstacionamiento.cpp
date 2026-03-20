//
// Created by enric on 11/11/2025.
//

#include "DroneEstacionamiento.h"

DroneEstacionamiento::DroneEstacionamiento() {
    zona_carga = 0;
}

void DroneEstacionamiento::leer(ifstream &archive) {
    Dron::leer(archive);
    char carga[6];
    archive.get(carga,6,'\n');
    if (strcmp(carga,"true")==0) zona_carga=1;
}

void DroneEstacionamiento::actualizar() {
    zona_carga=1;
}


void DroneEstacionamiento::imprimir(ofstream &archive) {
    Dron::imprimir(archive);
    archive<<zona_carga<<endl;
}


