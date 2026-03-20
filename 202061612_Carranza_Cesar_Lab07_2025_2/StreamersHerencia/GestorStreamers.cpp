//
// Created by alulab14 on 7/11/2025.
//

#include "GestorStreamers.h"

GestorStreamers::GestorStreamers() {
    streamerGratuito=nullptr;
    streamerPago=nullptr;
    cantidad_gratuitos=0;
    cantidad_pagos=0;
}

GestorStreamers::~GestorStreamers() {
    if (streamerGratuito!=nullptr) delete []streamerGratuito;
    if (streamerPago!=nullptr) delete []streamerPago;
}

void GestorStreamers::setCantidadGratuitos(int cantidad_gratuitos) {
    this->cantidad_gratuitos=cantidad_gratuitos;
}

void GestorStreamers::setCantidadPagos(int cantidad_pago) {
    this->cantidad_pagos=cantidad_pago;
}

int  GestorStreamers::getGratuitos() {
    return this->cantidad_gratuitos;
}
int  GestorStreamers::getPago() {
    return this->cantidad_pagos;
}

void GestorStreamers::cargar_datos_streamers(const char *file_name) {
    ifstream arch;
    aperturaIfstream(arch, file_name);
    streamerGratuito=new StreamerGratuito[100];
    streamerPago=new StreamerPago[100];
    int contador_gratuitos=0;
    int contador_pago=0;
    char tipo[10];
    while (true) {
        arch.getline(tipo, 10,',');
        if (arch.eof()) break;
        if (strcmp(tipo,"Gratuito")==0) {
            streamerGratuito[cantidad_gratuitos].leer(arch);
            cantidad_gratuitos++;
        }else {
            streamerPago[cantidad_pagos].leer(arch);
            cantidad_pagos++;
        }
    }
    //INTENTE HACERLO POR MEMORIA EXACTA PERO POR UN ERROR QUE NO PUDE ENCONTRAR Y FALTA DE TIEMPO ASIGNE LA MEMORIA DEFRENTE
    //this->streamerGratuito=new StreamerGratuito[contador_gratuitos];
    // cantidad_gratuitos=contador_gratuitos;
    // cantidad_pagos=contador_pago;
    // for (int i=0;i<cantidad_gratuitos;i++) {
    //     streamerGratuito[i]=gratuito[i];
    // }
    // for (int j=0;j<cantidad_pagos;j++) {
    //     streamerPago[j]=pago[j];
    // }
}

void GestorStreamers::actualizar_datos_metricas(const char *file_name) {
    ifstream arch;
    aperturaIfstream(arch, file_name);
    char tipo[10],c;
    int id_streamer;
    while (true) {
        arch.getline(tipo, 10,',');
        if (arch.eof()) return;
        arch>>id_streamer>>c;
        // if (strcmp(tipo,"BASIC")==0) {
        //     int posicionBaic=this.buscarGratuitos(id_streamer);
        // }else if (strcmp(tipo,"ENGAGEMENT")==0) {
        //
        // }
    }
}



