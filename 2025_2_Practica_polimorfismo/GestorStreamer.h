//
// Created by enric on 15/11/2025.
//

#ifndef INC_2025_2_PRACTICA_POLIMORFISMO_GESTORSTREAMER_H
#define INC_2025_2_PRACTICA_POLIMORFISMO_GESTORSTREAMER_H
#include "Streamer.h"
#include "Comunes.h"
class GestorStreamer {
private:
    Streamer streamers[100];
    int cantidadStreamer;
public:
    GestorStreamer();
    void cargar_datos_streamers(const char *nomArch);
    void actualizar_datos_metricass(const char *nomArch);
    Nodo *buscarenListas(int idStreamer);
};


#endif //INC_2025_2_PRACTICA_POLIMORFISMO_GESTORSTREAMER_H