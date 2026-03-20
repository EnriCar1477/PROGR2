//
// Created by enric on 26/11/2025.
//

#ifndef LAB_8_STL_2_METRICACALIDAD_H
#define LAB_8_STL_2_METRICACALIDAD_H
#include "Metrica.h"


class MetricaCalidad:public Metrica{
private:
    int bitrate_promedio_kbps;
    double porcentaje_frames_perdidos;
    int fps_promedio;
public:
    MetricaCalidad();
    int getBitrate_promedio() const;
    double getPorcentaje_frames_perdidos() const;
    int getFps_promedio() const;
    void setBitrate_promedio(int bitrate_promedio);
    void setPorcentaje_frames_perdidos(double porcentake_frames_promedio);
    void setFps_promedio(int fps_promedio);
    void leer(ifstream &arch) override;
    int getTipo() override;
    void imprimir(ofstream &arch) override;
};


#endif //LAB_8_STL_2_METRICACALIDAD_H