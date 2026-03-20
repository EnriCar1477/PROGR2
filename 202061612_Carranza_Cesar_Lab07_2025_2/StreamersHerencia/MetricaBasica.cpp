//
// Created by alulab14 on 7/11/2025.
//

#include "MetricaBasica.h"

MetricaBasica::MetricaBasica() {
    horas_trasmitidas = 0;
    espectadores_promedio = 0;
}

void MetricaBasica::setHorasTrasmitidas(double horas_trasmitidas) {
    this->horas_trasmitidas = horas_trasmitidas;
}
double MetricaBasica::getHorasTrasmitidas() {
    return this->horas_trasmitidas;
}

void MetricaBasica::setEspectadoresPromedio(int espectadores_promedio) {
    this->espectadores_promedio = espectadores_promedio;
}
int MetricaBasica::getEspectadoresPromedio() {
    return this->espectadores_promedio;
}

void MetricaBasica::leer(ifstream &arch) {
    MetricaBasica::leer(arch);
    char c;
    arch>>horas_trasmitidas>>c>>espectadores_promedio;
    arch.get();
}


