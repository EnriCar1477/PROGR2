//
// Created by arian on 9/11/2025.
//

#include "DroneVelocidad.h"

DroneVelocidad::DroneVelocidad() {
    velocidad_maxima_permitida = 0.0;
}

void DroneVelocidad::leer(ifstream &arch) {
    Dron::leer(arch);
    double vel;
    arch>>vel;
    arch.get();
    set_velocidad_maxima_permitida(vel);
}

double DroneVelocidad::get_velocidad_maxima_permitida() const {
    return velocidad_maxima_permitida;
}

void DroneVelocidad::set_velocidad_maxima_permitida(double velocidad_maxima_permitida) {
    this->velocidad_maxima_permitida = velocidad_maxima_permitida;
}

void DroneVelocidad::imprimir(ofstream &arch) {
    Dron::imprimir(arch);
    arch.precision(2);
    arch<<fixed;
    arch<<setw(30)<<velocidad_maxima_permitida<<endl;
}
