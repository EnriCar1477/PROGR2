//
// Created by enric on 15/11/2025.
//

#ifndef INC_2025_2_PRACTICA_POLIMORFISMO_METRICAS_H
#define INC_2025_2_PRACTICA_POLIMORFISMO_METRICAS_H
#include "Comunes.h"

class Metricas {
private:
    int id;
    char *descripcion;
    int fecha_calculo;
    int fecha_expiracion;
    bool estado;
public:
    Metricas();
    ~Metricas();
    char *getDescripcion();
    virtual void leer(ifstream &arch);
    virtual void escribir(ofstream &arch);
};


#endif //INC_2025_2_PRACTICA_POLIMORFISMO_METRICAS_H