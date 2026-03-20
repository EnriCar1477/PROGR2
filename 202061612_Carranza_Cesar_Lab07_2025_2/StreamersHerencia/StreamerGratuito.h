//
// Created by alulab14 on 7/11/2025.
//

#ifndef STREAMERSHERENCIA_STREAMERGRATUITO_H
#define STREAMERSHERENCIA_STREAMERGRATUITO_H
#include "Streamer.h"
#include "MetricaBasica.h"

class StreamerGratuito:public Streamer{
private:
    int fecha_fin_trial;
    MetricaBasica *metricas_basicas;
    int cantidadMetricasBasicas;
public:
    StreamerGratuito();
    ~StreamerGratuito();
    void copiar(StreamerGratuito &gratuito);
    void setFecha_fin_trial(int fecha_fin_trial);
    void setCantidadMetricasBasicas(int cantidadMetricasBasicas);
    int getFecha_fin_trial();
    int getCantidadMetricasBasicas();
    void leer(ifstream &arch);
    void operator =(StreamerGratuito &gratuito);
};


#endif //STREAMERSHERENCIA_STREAMERGRATUITO_H