//
// Created by alulab14 on 7/11/2025.
//

#include "StreamerPago.h"

StreamerPago::StreamerPago() {
    fecha_inicio_trial=0;
    cantidad_metricas_calidad=0;
    cantidad_metricas_basicas=0;
    cantidad_metricas_engagement=0;
    metricasBasica=nullptr;
    metricas_calidad=nullptr;
    metricas_engagement=nullptr;
}

StreamerPago::~StreamerPago() {
    if (metricas_calidad!=nullptr) delete metricas_calidad;
    if (metricas_engagement!=nullptr) delete metricas_engagement;
    if (metricas_calidad!=nullptr) delete metricas_calidad;
}

void StreamerPago::copiar(StreamerPago &s) {
    fecha_inicio_trial=s.fecha_inicio_trial;
    this->setId(s.getId());
    this->setNseguidores(s.getNseguidores());
    this->setCuenta(s.getCuenta());
    this->setCategoria(s.getCategoria());
}

void StreamerPago::setFecha_fin_trial(int fecha_fin_trial) {
    this->fecha_inicio_trial=fecha_fin_trial;
}
void StreamerPago::setCantidadMetricasBasicas(int cantidadMetricasBasicas) {
    this->cantidad_metricas_basicas=cantidadMetricasBasicas;
}
void StreamerPago::setCantidadMetricasCalidad(int cantidadMetricasCalidad) {
    this->cantidad_metricas_calidad=cantidadMetricasCalidad;
}
void StreamerPago::setCantidadMetricasEngagement(int cantidadMetricasEngagement) {
    this->cantidad_metricas_engagement=cantidadMetricasEngagement;
}
int StreamerPago::getFecha_fin_trial() {
    return this->fecha_inicio_trial;
}
int StreamerPago::getCantidadMetricasBasicas() {
    return cantidad_metricas_calidad;
}
int StreamerPago::getCantidadMetricasEngagement() {
    return cantidad_metricas_engagement;
}
int StreamerPago::getCantidadMetricasCalidad() {
    return cantidad_metricas_calidad;
}

void StreamerPago::leer(ifstream &arch) {
    Streamer::leer(arch);
    int aa,mm,dd;
    char c;
    arch>>aa>>c>>mm>>c>>dd;
    fecha_inicio_trial=aa*10000+mm*100+dd;
    arch.get();
}

void StreamerPago::operator=(StreamerPago &pago) {
    if (metricas_calidad!=nullptr) delete metricas_calidad;
    if (metricas_engagement!=nullptr) delete metricas_engagement;
    if (metricas_calidad!=nullptr) delete metricas_calidad;
    this->copiar(pago);
}




