//
// Created by alulab14 on 7/11/2025.
//

#include "StreamerGratuito.h"

StreamerGratuito::StreamerGratuito() {
    metricas_basicas=nullptr;
    cantidadMetricasBasicas=0;
    fecha_fin_trial=0;
}

StreamerGratuito::~StreamerGratuito() {
    if (metricas_basicas!=nullptr) delete metricas_basicas;
}

void StreamerGratuito::copiar(StreamerGratuito &gratuito) {
    this->setId(gratuito.getId());
    this->setCategoria(gratuito.getCategoria());
    this->setNseguidores(gratuito.getNseguidores());
    this->setCuenta(gratuito.getCuenta());
    fecha_fin_trial=gratuito.getFecha_fin_trial();
}

void StreamerGratuito::setFecha_fin_trial(int fecha_fin_trial) {
    this->fecha_fin_trial=fecha_fin_trial;
}

void StreamerGratuito::setCantidadMetricasBasicas(int cantidadMetricasBasicas) {
    this->cantidadMetricasBasicas=cantidadMetricasBasicas;
}

int StreamerGratuito::getFecha_fin_trial() {
    return this->fecha_fin_trial;
}
int StreamerGratuito::getCantidadMetricasBasicas() {
    return this->cantidadMetricasBasicas;
}

void StreamerGratuito::leer(ifstream &arch) {
    Streamer::leer(arch);
    int aa,mm,dd;
    char c;
    arch>>aa>>c>>mm>>c>>dd;
    fecha_fin_trial=aa*10000+mm*100+dd;
    arch.get();
}

void StreamerGratuito::operator=(StreamerGratuito &gratuito) {
    if (metricas_basicas!=nullptr) delete metricas_basicas;
    this->copiar(gratuito);
}



