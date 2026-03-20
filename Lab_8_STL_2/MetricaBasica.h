//
// Created by enric on 26/11/2025.
//

#ifndef LAB_8_STL_2_METRICABASICA_H
#define LAB_8_STL_2_METRICABASICA_H
#include "Metrica.h"


class MetricaBasica:public Metrica {
private:
    double horas_transmitidas;
    int espectadores_promedio;
public:
    MetricaBasica();
    double getHorasTransmitidas() const;
    int getEspectadoresPromedio() const;
    void setHorasTransmitidas(double horas_transmitidas);
    void setEspectadoresPromedio(int espectadores_promedio);
    void leer(ifstream &arch) override;
    int getTipo() override;
    void imprimir(ofstream &arch) override;
};


#endif //LAB_8_STL_2_METRICABASICA_H