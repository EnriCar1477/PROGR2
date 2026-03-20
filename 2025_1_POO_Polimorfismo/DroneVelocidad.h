//
// Created by enric on 11/11/2025.
//

#ifndef INC_2025_1_POO_POLIMORFISMO_DRONEVELOCIDAD_H
#define INC_2025_1_POO_POLIMORFISMO_DRONEVELOCIDAD_H
#include "Dron.h"


class DroneVelocidad: public Dron{
private:
    double velocidad_maxima;
public:
    DroneVelocidad();
    void leer(ifstream &archive) override;
    void imprimir(ofstream &archive) override;
    void actualizar() override;
};


#endif //INC_2025_1_POO_POLIMORFISMO_DRONEVELOCIDAD_H