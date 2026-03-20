//
// Created by alulab14 on 7/11/2025.
//

#include "MetricaEngagement.h"

MetricaEngagement::MetricaEngagement() {
    usuarios_unicos_chat=0;
    chip_generados=0;
    mensajes_chat=0;
}

void MetricaEngagement::setMensajes_chat(int mensajes_chat) {
    this->mensajes_chat=mensajes_chat;
}

int MetricaEngagement::getMensajes_chat() {
    return this->mensajes_chat;
}

void MetricaEngagement::setUsuarios_chat(int usuarios_chat) {
    this->usuarios_unicos_chat=usuarios_chat;
}

int MetricaEngagement::getUsuarios_chat() {
    return usuarios_unicos_chat;
}

void MetricaEngagement::setChip_generados(int chip_generados) {
    this->chip_generados=chip_generados;
}

int MetricaEngagement::getChip_generados() {
    return chip_generados;
}

void MetricaEngagement::leer(ifstream &arch) {
    Metrica::leer(arch);
    char c;
    arch>>mensajes_chat>>c>>usuarios_unicos_chat>>c>>chip_generados;
    arch.get();
}



