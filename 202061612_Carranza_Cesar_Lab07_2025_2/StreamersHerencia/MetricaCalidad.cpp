//
// Created by alulab14 on 7/11/2025.
//

#include "MetricaCalidad.h"

MetricaCalidad::MetricaCalidad() {
    fps_promedio=0;
    porcentaje_frames_perdidos=0.0;
    bitrate_promedio_kbps=0;
}

void MetricaCalidad::setBitrate_promedio_kbps(int bitrate) {
    this->bitrate_promedio_kbps=bitrate;
}
int MetricaCalidad::getBitrate_promedio_kbps() {
    return bitrate_promedio_kbps;
}

void MetricaCalidad::setPorcentaje_frames_perdidos(double porcentaje_frames_perdidos) {
    this->porcentaje_frames_perdidos=porcentaje_frames_perdidos;
}
double MetricaCalidad::getPorcentaje_frames_perdidos() {
    return porcentaje_frames_perdidos;
}

void MetricaCalidad::setFps_promedio(int fps_promedio) {
    this->fps_promedio=fps_promedio;
}
int MetricaCalidad::getFps_promedio() {
    return fps_promedio;
}

void MetricaCalidad::leer(ifstream &arch) {
    Metrica::leer(arch);
    char c;
    arch>>bitrate_promedio_kbps>>c>>porcentaje_frames_perdidos>>c>>fps_promedio;
    arch.get();
}



