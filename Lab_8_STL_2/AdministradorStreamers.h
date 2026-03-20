//
// Created by enric on 26/11/2025.
//

#ifndef LAB_8_STL_2_ADMINISTRADORSTREAMERS_H
#define LAB_8_STL_2_ADMINISTRADORSTREAMERS_H

#include "Streamer.h"
#include "StreamerGratuito.h"

class AdministradorStreamers {
private:
    list<Streamer *> streamers;
public:
    void cargarDatosStreamers();
    void actualizarDatosMetricas();
    void reporte();
};


#endif //LAB_8_STL_2_ADMINISTRADORSTREAMERS_H