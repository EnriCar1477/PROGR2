//
// Created by enric on 25/11/2025.
//

#include "MetricaBasica.h"

MetricaBasica::MetricaBasica() {
    horas_trasmitidas=0;
}

double MetricaBasica::getHorasTrasmitidas() {
    return horas_trasmitidas;
}

void MetricaBasica::setHorasTrasmitidas(double horas_trasmitidas) {
    this->horas_trasmitidas=horas_trasmitidas;
}

int MetricaBasica::getEspectadoresPromedio() {
    return espectadores_promedio;
}

void MetricaBasica::setEspectadoresPromedio(int espectadores_promedio) {
    this->espectadores_promedio=espectadores_promedio;
}

void MetricaBasica::leer(ifstream &archivo) {
    Metrica::leer(archivo);
    archivo>>horas_trasmitidas;
    archivo.get();
    archivo>>espectadores_promedio;
    archivo.get();
}

int MetricaBasica::getTipo() {
    return 1;
}

void MetricaBasica::imprimir(ofstream &archivo) {
    archivo<<"MB-"<<setw(4)<<setfill('0');
    Metrica::imprimir(archivo);
    archivo<<setw(10)<<horas_trasmitidas<<setw(10)<<espectadores_promedio<<"m"<<endl;

}
