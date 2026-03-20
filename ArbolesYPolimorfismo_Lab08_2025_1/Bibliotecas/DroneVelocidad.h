//
// Created by arian on 9/11/2025.
//

#ifndef ARBOLESYPOLIMORFISMO_LAB08_2025_1_DRONEVELOCIDAD_H
#define ARBOLESYPOLIMORFISMO_LAB08_2025_1_DRONEVELOCIDAD_H
#include "Dron.h"


class DroneVelocidad: public Dron {
public:
    DroneVelocidad();
    void leer(ifstream & arch);

    double get_velocidad_maxima_permitida() const;

    void set_velocidad_maxima_permitida(double velocidad_maxima_permitida);
    void imprimir(ofstream &arch);

private:
    double velocidad_maxima_permitida;
};


#endif //ARBOLESYPOLIMORFISMO_LAB08_2025_1_DRONEVELOCIDAD_H