//
// Created by enric on 11/11/2025.
//

#include "DroneVelocidad.h"

DroneVelocidad::DroneVelocidad() {
    velocidad_maxima=0.0;
}

void DroneVelocidad::leer(ifstream &archive) {
    Dron::leer(archive);
    archive>>velocidad_maxima;
}

void DroneVelocidad::imprimir(ofstream &archive) {
    Dron::imprimir(archive);
    archive<<velocidad_maxima<<endl;
}

void DroneVelocidad::actualizar() {
    return;
}
