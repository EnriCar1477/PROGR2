//
// Created by enric on 25/11/2025.
//

#include "MetricaCalidad.h"

MetricaCalidad::MetricaCalidad() {

}

int MetricaCalidad::get_bitrate_promedio() {
    return bitrate_promedio_kbps;
}

double MetricaCalidad::get_porcentake_frames_perdidos() {
    return porcentake_frames_perdidos;
}

int MetricaCalidad::get_fps_promedio() {
    return fps_promedio;
}

void MetricaCalidad::set_bitrate_promedio(int bitrate_promedio) {
    this->bitrate_promedio_kbps = bitrate_promedio;
}

void MetricaCalidad::set_porcentake_frames_perdidos(double porcentake_frames_perdidos) {
    this->porcentake_frames_perdidos = porcentake_frames_perdidos;
}

void MetricaCalidad::set_fps_promedio(int fps_promedio) {
    this->fps_promedio = fps_promedio;
}

void MetricaCalidad::leer(ifstream &archivo) {
    Metrica::leer(archivo);
    char c;
    archivo>>bitrate_promedio_kbps>>c>>porcentake_frames_perdidos>>c>>fps_promedio;
    archivo.get();
}

void MetricaCalidad::imprimir(ofstream &archivo) {
    archivo<<"MQ-"<<setw(4)<<setfill('0');
    Metrica::imprimir(archivo);
    archivo<<setw(10)<<bitrate_promedio_kbps<<setw(7)<<porcentake_frames_perdidos<<
            setw(12)<<fps_promedio<<endl;
}

int MetricaCalidad::getTipo() {
    return 2;
}
