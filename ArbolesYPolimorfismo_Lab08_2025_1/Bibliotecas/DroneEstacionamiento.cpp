//
// Created by arian on 9/11/2025.
//

#include "DroneEstacionamiento.h"

DroneEstacionamiento::DroneEstacionamiento() {
    zona_carga = 0;
}

int DroneEstacionamiento::get_zona_carga() const {
    return zona_carga;
}

void DroneEstacionamiento::set_zona_carga(int zona_carga) {
    this->zona_carga = zona_carga;
}

void DroneEstacionamiento::leer(ifstream &arch) {
    Dron::leer(arch);
    char validacion[100];
    arch.getline(validacion,100,'\n');
    if (strcmp(validacion,"true")==0) {
        set_zona_carga(1);
    } else if (strcmp(validacion,"false")==0) {
        set_zona_carga(0);
    }
}

void DroneEstacionamiento::imprimir(ofstream &arch) {
    Dron::imprimir(arch);
    arch<<setw(30)<<zona_carga<<endl;
}
