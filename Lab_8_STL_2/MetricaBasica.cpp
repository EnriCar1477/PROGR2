//
// Created by enric on 26/11/2025.
//

#include "MetricaBasica.h"

MetricaBasica::MetricaBasica() {

}

double MetricaBasica::getHorasTransmitidas() const {
    return horas_transmitidas;
}

int MetricaBasica::getEspectadoresPromedio() const {
    return espectadores_promedio;
}

void MetricaBasica::setHorasTransmitidas(double horas_transmitidas) {
    this->horas_transmitidas = horas_transmitidas;
}

void MetricaBasica::setEspectadoresPromedio(int espectadores_promedio) {
    this->espectadores_promedio = espectadores_promedio;
}

void MetricaBasica::leer(ifstream &arch) {
    Metrica::leer(arch);
    char c;
    arch>>horas_transmitidas>>c>>espectadores_promedio;
    arch.get();
}

int MetricaBasica::getTipo() {
    return 1;
}

void MetricaBasica::imprimir(ofstream &arch) {
    arch<<"MB-"<<setw(4)<<setfill('0');
    Metrica::imprimir(arch);
    arch<<horas_transmitidas<<setw(10)<<espectadores_promedio<<"m"<<endl;
}
