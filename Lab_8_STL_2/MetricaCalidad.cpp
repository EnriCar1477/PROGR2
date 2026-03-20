//
// Created by enric on 26/11/2025.
//

#include "MetricaCalidad.h"

MetricaCalidad::MetricaCalidad() {

}

int MetricaCalidad::getBitrate_promedio() const {
    return bitrate_promedio_kbps;
}

double MetricaCalidad::getPorcentaje_frames_perdidos() const {
    return porcentaje_frames_perdidos;
}

int MetricaCalidad::getFps_promedio() const {
    return fps_promedio;
}

void MetricaCalidad::setBitrate_promedio(int bitrate_promedio) {
    this->bitrate_promedio_kbps = bitrate_promedio;
}

void MetricaCalidad::setPorcentaje_frames_perdidos(double porcentake_frames_promedio) {
    this->porcentaje_frames_perdidos=porcentake_frames_promedio;
}

void MetricaCalidad::setFps_promedio(int fps_promedio) {
    this->fps_promedio=fps_promedio;
}

void MetricaCalidad::leer(ifstream &arch) {
    Metrica::leer(arch);
    char c;
    arch>>bitrate_promedio_kbps>>c>>porcentaje_frames_perdidos>>c>>fps_promedio;
    arch.get();
}

int MetricaCalidad::getTipo() {
    return 2;
}

void MetricaCalidad::imprimir(ofstream &arch) {
    arch<<"MQ-"<<setw(4)<<setfill('0');
    Metrica::imprimir(arch);
    arch<<bitrate_promedio_kbps<<setw(6)<<porcentaje_frames_perdidos<<setw(10)<<fps_promedio<<endl;
}

