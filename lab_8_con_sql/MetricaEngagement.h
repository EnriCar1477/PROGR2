//
// Created by enric on 25/11/2025.
//

#ifndef LAB_8_CON_SQL_METRICAENGAGEMENT_H
#define LAB_8_CON_SQL_METRICAENGAGEMENT_H
#include "Metrica.h"


class MetricaEngagement:public Metrica{
private:
    int mensajes_chat;
    int usuarios_unicos_chat;
    int clips_generados;
public:
    MetricaEngagement();
    int get_mensajes_chat();
    int get_usuarios_unicos_chat();
    int get_clips_generados();
    void set_mensajes_chat(int mensajes_chat);
    void set_usuarios_unicos_chat(int usuarios);
    void set_clips_generados(int clips_generados);
    void leer(ifstream &archivo) override;
    void imprimir(ofstream &archivo) override;
    int getTipo() override;
};


#endif //LAB_8_CON_SQL_METRICAENGAGEMENT_H