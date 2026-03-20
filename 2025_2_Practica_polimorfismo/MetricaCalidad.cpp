//
// Created by enric on 15/11/2025.
//

#include "MetricaCalidad.h"

void MetricaCalidad::leer(ifstream &arch) {
    Metricas::leer(arch);
    char c;
    arch>>bitrate_promedio_kbps>>c>>porcentaje_frames_perdidos>>c>>fps_promedio;
    arch.get();
}

void MetricaCalidad::escribir(ofstream &arch) {
    Metricas::escribir(arch);
    arch<<bitrate_promedio_kbps<<setw(6)<<
        porcentaje_frames_perdidos<<setw(8)<<fps_promedio<<setw(8)
        <<" "<<getDescripcion()<<endl;
}
