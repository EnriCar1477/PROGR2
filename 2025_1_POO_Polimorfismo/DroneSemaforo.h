//
// Created by enric on 11/11/2025.
//

#ifndef INC_2025_1_POO_POLIMORFISMO_DRONESEMAFORO_H
#define INC_2025_1_POO_POLIMORFISMO_DRONESEMAFORO_H
#include "Dron.h"


class DroneSemaforo: public Dron {
private:
    int luz_roja;
public:
    DroneSemaforo();
    void leer(ifstream &archive) override;
    void imprimir(ofstream &archive) override;
    void actualizar() override;

};


#endif //INC_2025_1_POO_POLIMORFISMO_DRONESEMAFORO_H