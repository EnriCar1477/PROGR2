//
// Created by enric on 15/11/2025.
//

#ifndef INC_2025_2_PRACTICA_POLIMORFISMO_METRICA_BASICA_H
#define INC_2025_2_PRACTICA_POLIMORFISMO_METRICA_BASICA_H

#include "Metricas.h"
class Metrica_Basica:public Metricas{
private:
       double horas_transmitidas;
       int espectadores_promedio;
public:
       Metrica_Basica();
       void leer(ifstream &arch) override;
       void escribir(ofstream &arch) override;
};


#endif //INC_2025_2_PRACTICA_POLIMORFISMO_METRICA_BASICA_H