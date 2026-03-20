//
// Created by alulab14 on 7/11/2025.
//

#ifndef STREAMERSHERENCIA_METRICACALIDAD_H
#define STREAMERSHERENCIA_METRICACALIDAD_H
#include "Metrica.h"


class MetricaCalidad:public Metrica {
private:
    int bitrate_promedio_kbps;
    double porcentaje_frames_perdidos;
    int fps_promedio;
public:
    MetricaCalidad();
    void setBitrate_promedio_kbps(int bitrate);
    int getBitrate_promedio_kbps();
    void setPorcentaje_frames_perdidos(double porcentaje_frames_perdidos);
    double getPorcentaje_frames_perdidos();
    void setFps_promedio(int fps_promedio);
    int getFps_promedio();
    void leer(ifstream& arch);
};


#endif //STREAMERSHERENCIA_METRICACALIDAD_H