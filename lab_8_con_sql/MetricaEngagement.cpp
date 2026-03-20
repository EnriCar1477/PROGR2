//
// Created by enric on 25/11/2025.
//

#include "MetricaEngagement.h"

MetricaEngagement::MetricaEngagement() {

}

int MetricaEngagement::get_mensajes_chat() {
    return mensajes_chat;
}

int MetricaEngagement::get_usuarios_unicos_chat() {
    return usuarios_unicos_chat;
}

int MetricaEngagement::get_clips_generados() {
    return clips_generados;
}

void MetricaEngagement::set_mensajes_chat(int mensajes_chat) {
    this->mensajes_chat = mensajes_chat;
}

void MetricaEngagement::set_usuarios_unicos_chat(int usuarios) {
    this->usuarios_unicos_chat = usuarios;
}

void MetricaEngagement::set_clips_generados(int clips_generados) {
    this->clips_generados = clips_generados;
}

void MetricaEngagement::leer(ifstream &archivo) {
    Metrica::leer(archivo);
    char c;
    archivo>>mensajes_chat>>c>>usuarios_unicos_chat>>c>>clips_generados;
    archivo.get();
}

void MetricaEngagement::imprimir(ofstream &archivo) {
    archivo<<"ME-"<<setw(4)<<setfill('0');
    Metrica::imprimir(archivo);
    archivo<<setw(10)<<mensajes_chat<<setw(10)<<usuarios_unicos_chat
            <<setw(10)<<clips_generados<<endl;

}

int MetricaEngagement::getTipo() {
    return 1;
}




