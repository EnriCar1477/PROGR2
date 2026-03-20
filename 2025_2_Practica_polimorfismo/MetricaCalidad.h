//
// Created by enric on 15/11/2025.
//

#ifndef INC_2025_2_PRACTICA_POLIMORFISMO_METRICACALIDAD_H
#define INC_2025_2_PRACTICA_POLIMORFISMO_METRICACALIDAD_H
#include "Metricas.h"


class MetricaCalidad:public Metricas {
private:
    int bitrate_promedio_kbps;
    double porcentaje_frames_perdidos;
    int fps_promedio;
public:
    void leer(ifstream &arch) override;
    void escribir(ofstream &arch) override;
};


#endif //INC_2025_2_PRACTICA_POLIMORFISMO_METRICACALIDAD_H