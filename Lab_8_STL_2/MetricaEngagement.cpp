//
// Created by enric on 26/11/2025.
//

#include "MetricaEngagement.h"

MetricaEngagement::MetricaEngagement() {

}

int MetricaEngagement::getMensajes_chat() const {
    return this->mensajes_chat;
}

void MetricaEngagement::setMensajes_chat(int mensajes_chat) {
    this->mensajes_chat = mensajes_chat;
}

int MetricaEngagement::getUsuarios_unicos_chat() const {
    return this->usuarios_unicos_chat;
}

void MetricaEngagement::setUsuarios_unicos_chat(int usuarios_unicos_chat) {
    this->usuarios_unicos_chat= usuarios_unicos_chat;
}

int MetricaEngagement::getClipGenerados() const {
    return this->clip_generados;
}

void MetricaEngagement::setClipGenerados(int clip_generados) {
    this->clip_generados= clip_generados;
}

void MetricaEngagement::leer(ifstream &arch) {
    Metrica::leer(arch);
    char c;
    arch>>mensajes_chat>>c>>usuarios_unicos_chat>>c>>clip_generados;
    arch.get();
}

int MetricaEngagement::getTipo() {
    return 3;
}

void MetricaEngagement::imprimir(ofstream &arch) {
    arch<<"ME-"<<setw(4)<<setfill('0');
    Metrica::imprimir(arch);
    arch<<mensajes_chat<<setw(10)<<usuarios_unicos_chat<<setw(10)<<clip_generados<<endl;

}
