//
// Created by enric on 25/11/2025.
//

#ifndef LAB_8_CON_SQL_METRICACALIDAD_H
#define LAB_8_CON_SQL_METRICACALIDAD_H
#include "Metrica.h"


class MetricaCalidad:public Metrica {
private:
    int bitrate_promedio_kbps;
    double porcentake_frames_perdidos;
    int fps_promedio;
public:
    MetricaCalidad();
    int get_bitrate_promedio();
    double get_porcentake_frames_perdidos();
    int get_fps_promedio();
    void set_bitrate_promedio(int bitrate_promedio);
    void set_porcentake_frames_perdidos(double porcentake_frames_perdidos);
    void set_fps_promedio(int fps_promedio);
    void leer(ifstream &archivo) override;
    void imprimir(ofstream &archivo) override;
    int getTipo() override;
};


#endif //LAB_8_CON_SQL_METRICACALIDAD_H