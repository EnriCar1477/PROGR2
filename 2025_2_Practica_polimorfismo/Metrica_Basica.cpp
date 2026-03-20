//
// Created by enric on 15/11/2025.
//

#include "Metrica_Basica.h"

Metrica_Basica::Metrica_Basica() {
    horas_transmitidas=0;
}
void Metrica_Basica::leer(ifstream &arch) {
    Metricas::leer(arch);
    arch>>horas_transmitidas;
    arch.get();
    arch>>espectadores_promedio;
    arch.get();
}

void Metrica_Basica::escribir(ofstream &arch) {
    Metricas::escribir(arch);
    arch<<horas_transmitidas<<setw(8)<<espectadores_promedio
    <<"m"<<setw(10)<<getDescripcion()<<endl;
}
