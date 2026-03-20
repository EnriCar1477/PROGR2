//
// Created by alulab14 on 7/11/2025.
//

#ifndef STREAMERSHERENCIA_METRICAENGAGEMENT_H
#define STREAMERSHERENCIA_METRICAENGAGEMENT_H
#include "Metrica.h"


class MetricaEngagement:public Metrica {
private:
    int mensajes_chat;
    int usuarios_unicos_chat;
    int chip_generados;
public:
    MetricaEngagement();
    void setMensajes_chat(int mensajes_chat);
    int getMensajes_chat();
    void setUsuarios_chat(int usuarios_chat);
    int getUsuarios_chat();
    void setChip_generados(int chip_generados);
    int getChip_generados();
    void leer(ifstream& arch);
};


#endif //STREAMERSHERENCIA_METRICAENGAGEMENT_H