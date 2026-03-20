//
// Created by enric on 26/11/2025.
//

#include "StreamerGratuito.h"

StreamerGratuito::StreamerGratuito() {
    fecha_fin_trial = 0;
}

int StreamerGratuito::getFecha_fin_trial() const {
    return this->fecha_fin_trial;
}

void StreamerGratuito::setFecha_fin_trial(int fecha_fin_trial) {
    this->fecha_fin_trial = fecha_fin_trial;
}

void StreamerGratuito::leer(ifstream &arch) {
    Streamer::leer(arch);
    int dd,mm,aa;
    char c;
    arch>>dd>>c>>mm>>c>>aa;
    setFecha_fin_trial(dd+mm*100+aa*10000);
    arch.get();
}

void StreamerGratuito::imprimir(ofstream &arch) {
    Streamer::imprimir(arch);
    arch<<setw(20)<<fecha_fin_trial<<endl;
    imprimirMetricas(arch);
    arch<<endl;
}
