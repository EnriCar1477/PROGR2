//
// Created by alulab14 on 7/11/2025.
//

#ifndef STREAMERSHERENCIA_GESTORSTREAMERS_H
#define STREAMERSHERENCIA_GESTORSTREAMERS_H
#include "Comunes.h"
#include "StreamerGratuito.h"
#include "StreamerPago.h"


class GestorStreamers {
private:
    StreamerPago *streamerPago;
    StreamerGratuito *streamerGratuito;
    int cantidad_gratuitos;
    int cantidad_pagos;
public:
    GestorStreamers();
    ~GestorStreamers();
    void setCantidadGratuitos(int cantidad_gratuitos);
    void setCantidadPagos(int cantidad_pago);
    int  getGratuitos();
    int getPago();
    void cargar_datos_streamers(const char* file_name);
    void actualizar_datos_metricas(const char* file_name);

};


#endif //STREAMERSHERENCIA_GESTORSTREAMERS_H