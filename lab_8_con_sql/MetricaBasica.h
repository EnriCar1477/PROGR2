//
// Created by enric on 25/11/2025.
//

#ifndef LAB_8_CON_SQL_METRICABASICA_H
#define LAB_8_CON_SQL_METRICABASICA_H
#include "Metrica.h"


class MetricaBasica:public Metrica {
private:
        double horas_trasmitidas;
        int espectadores_promedio;
public:
        MetricaBasica();
        double getHorasTrasmitidas();
        void setHorasTrasmitidas(double horas_trasmitidas);
        int getEspectadoresPromedio();
        void setEspectadoresPromedio(int espectadores_promedio);
        void leer(ifstream &archivo) override;
        int getTipo() override;
        void imprimir(ofstream &archivo) override;

};


#endif //LAB_8_CON_SQL_METRICABASICA_H