//
// Created by enric on 26/11/2025.
//

#include "StreamerPagado.h"

StreamerPagado::StreamerPagado() {

}

int StreamerPagado::getFechaInicioPlan() const {
    return fecha_inicio_plan;
}

void StreamerPagado::setFechaInicioPlan(int fechaInicioPlan) {
    this->fecha_inicio_plan = fechaInicioPlan;
}

void StreamerPagado::leer(ifstream &arch) {
    Streamer::leer(arch);
    int dd,mm,aa;
    char c;
    arch>>dd>>c>>mm>>c>>aa;
    setFechaInicioPlan(dd+mm*100+aa*10000);
    arch.get();
}

void StreamerPagado::imprimir(ofstream &arch) {
    Streamer::imprimir(arch);
    arch<<setw(20)<<fecha_inicio_plan<<endl;
    imprimirMetricas(arch);
    arch<<endl;
}

