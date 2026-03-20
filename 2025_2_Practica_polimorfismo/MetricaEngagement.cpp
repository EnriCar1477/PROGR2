//
// Created by enric on 15/11/2025.
//

#include "MetricaEngagement.h"

void MetricaEngagement::leer(ifstream &arch) {
    Metricas::leer(arch);
    char c;
    arch>>mensajes_chat>>c>>usuarios_unicos>>c>>clips_generados;
    arch.get();
}

void MetricaEngagement::escribir(ofstream &arch) {
    Metricas::escribir(arch);
    arch<<mensajes_chat<<setw(8)<<mensajes_chat<<setw(10)<<clips_generados;
    arch<<setw(10)<<" "<<getDescripcion()<<endl;
}
