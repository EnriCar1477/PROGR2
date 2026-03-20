//
// Created by enric on 26/11/2025.
//

#ifndef LAB_8_STL_2_METRICAENGAGEMENT_H
#define LAB_8_STL_2_METRICAENGAGEMENT_H
#include "Metrica.h"


class MetricaEngagement:public Metrica{
private:
    int mensajes_chat;
    int usuarios_unicos_chat;
    int clip_generados;
public:
    MetricaEngagement();
    int getMensajes_chat() const;
    void setMensajes_chat(int mensajes_chat);
    int getUsuarios_unicos_chat() const;
    void setUsuarios_unicos_chat(int usuarios_unicos_chat);
    int getClipGenerados() const;
    void setClipGenerados(int clip_generados);
    void leer(ifstream &arch) override;
    int getTipo() override;
    void imprimir(ofstream &arch) override;
};


#endif //LAB_8_STL_2_METRICAENGAGEMENT_H