//
// Created by alulab14 on 7/11/2025.
//

#ifndef STREAMERSHERENCIA_STREAMERPAGO_H
#define STREAMERSHERENCIA_STREAMERPAGO_H
#include "MetricaBasica.h"
#include "MetricaCalidad.h"
#include "MetricaEngagement.h"
#include "Streamer.h"


class StreamerPago:public Streamer{
private:
    int fecha_inicio_trial;
    MetricaBasica *metricasBasica;
    int cantidad_metricas_basicas;
    MetricaEngagement *metricas_engagement;
    int cantidad_metricas_engagement;
    MetricaCalidad *metricas_calidad;
    int cantidad_metricas_calidad;

public:
    StreamerPago();
    ~StreamerPago();
    void copiar(StreamerPago &s);
    void setFecha_fin_trial(int fecha_fin_trial);
    void setCantidadMetricasBasicas(int cantidadMetricasBasicas);
    void setCantidadMetricasEngagement(int cantidadMetricasEngagement);
    void setCantidadMetricasCalidad(int cantidadMetricasCalidad);
    int getFecha_fin_trial();
    int getCantidadMetricasBasicas();
    int getCantidadMetricasEngagement();
    int getCantidadMetricasCalidad();
    void leer(ifstream &arch);
    void operator =(StreamerPago &pago);
};


#endif //STREAMERSHERENCIA_STREAMERPAGO_H