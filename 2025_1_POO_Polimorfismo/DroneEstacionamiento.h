//
// Created by enric on 11/11/2025.
//

#ifndef INC_2025_1_POO_POLIMORFISMO_DRONEESTACIONAMIENTO_H
#define INC_2025_1_POO_POLIMORFISMO_DRONEESTACIONAMIENTO_H
#include "Dron.h"


class DroneEstacionamiento:public Dron{
private:
    int zona_carga;
public:
    DroneEstacionamiento();
    void leer(ifstream &archive) override;
    void actualizar() override;
    void imprimir(ofstream &archive) override;
};


#endif //INC_2025_1_POO_POLIMORFISMO_DRONEESTACIONAMIENTO_H