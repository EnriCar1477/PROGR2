//
// Created by enric on 15/11/2025.
//

#include "GestorStreamer.h"

#include "Streamer.h"


GestorStreamer::GestorStreamer() {
    cantidadStreamer = 0;
}

void GestorStreamer::cargar_datos_streamers(const char *nomArch) {
    ifstream arch(nomArch,ios::in);
    if (!arch.is_open()) {
        cout<<"Cargando datos archivo: "<<nomArch<<endl;
        exit(1);
    }
    while (true) {
        streamers[cantidadStreamer].leer(arch);
        if (arch.eof()) break;
    }
}

void GestorStreamer::actualizar_datos_metricass(const char *nomArch) {
    ifstream arch(nomArch,ios::in);
    if (!arch.is_open()) {
        cout<<"Cargando datos archivo: "<<nomArch<<endl;
        exit(1);
    }
    while (true) {
        char tipo[20];
        int idStreamer;
        arch.getline(tipo,20,',');
        if (arch.eof()) break;
        arch>>idStreamer;
        arch.get();
        Metricas *metrica;
        Nodo *Posicion=buscarenListas(idStreamer);
        if (strcmp(tipo,"ENGAGEMENT")==0) {
            metrica=new MetricaEngagement();
        }else if (strcmp(tipo,"QUALITY")==0) {
            metrica=new MetricaCalidad();
        }else {
            metrica=new Metrica_Basica();
        }
        metrica->leer(arch);
        Posicion->insertar(tipo,metrica);
    }
}

Nodo * GestorStreamer::buscarenListas(int idStreamer) {
    Nodo *PosicionGratuito;
    Nodo *PosicionPagado;
    PosicionGratuito=StreamersGratuito.buscarNodo(idStreamer);
    PosicionPagado=StreamersPagado.buscarNodo(idStreamer);
    if (PosicionGratuito!=nullptr) return PosicionGratuito;
    else return PosicionPagado;
}
