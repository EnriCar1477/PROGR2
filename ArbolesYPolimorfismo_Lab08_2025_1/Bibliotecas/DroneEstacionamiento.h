//
// Created by arian on 9/11/2025.
//

#ifndef ARBOLESYPOLIMORFISMO_LAB08_2025_1_DRONEESTACIONAMIENTO_H
#define ARBOLESYPOLIMORFISMO_LAB08_2025_1_DRONEESTACIONAMIENTO_H
#include "Dron.h"


class DroneEstacionamiento: public Dron {
public:
    DroneEstacionamiento();

    int get_zona_carga() const;

    void set_zona_carga(int zona_carga);
    void leer(ifstream &arch);
    void imprimir(ofstream &arch);

private:
    int zona_carga;
};


#endif //ARBOLESYPOLIMORFISMO_LAB08_2025_1_DRONEESTACIONAMIENTO_H