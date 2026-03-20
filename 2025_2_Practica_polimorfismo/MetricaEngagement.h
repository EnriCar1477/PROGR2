//
// Created by enric on 15/11/2025.
//

#ifndef INC_2025_2_PRACTICA_POLIMORFISMO_METRICAENGAGEMENT_H
#define INC_2025_2_PRACTICA_POLIMORFISMO_METRICAENGAGEMENT_H
#include "Metricas.h"


class MetricaEngagement:public Metricas {
private:
    int mensajes_chat;
    int usuarios_unicos;
    int clips_generados;
public:
    void leer(ifstream &arch) override;
    void escribir(ofstream &arch) override;
};


#endif //INC_2025_2_PRACTICA_POLIMORFISMO_METRICAENGAGEMENT_H