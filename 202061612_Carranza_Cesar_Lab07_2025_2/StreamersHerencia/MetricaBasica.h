//
// Created by alulab14 on 7/11/2025.
//

#ifndef STREAMERSHERENCIA_METRICABASICA_H
#define STREAMERSHERENCIA_METRICABASICA_H
#include "Metrica.h"


class MetricaBasica:public Metrica{
private:
    double horas_trasmitidas;
    int espectadores_promedio;
public:
    MetricaBasica();
    void setHorasTrasmitidas(double horas_trasmitidas);
    double getHorasTrasmitidas();
    void setEspectadoresPromedio(int espectadores_promedio);
    int getEspectadoresPromedio();
    void leer(ifstream& arch);
};


#endif //STREAMERSHERENCIA_METRICABASICA_H