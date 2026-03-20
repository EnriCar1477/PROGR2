//
// Created by arian on 9/11/2025.
//

#ifndef ARBOLESYPOLIMORFISMO_LAB08_2025_1_DRONESEMAFORO_H
#define ARBOLESYPOLIMORFISMO_LAB08_2025_1_DRONESEMAFORO_H
#include "Dron.h"


class DroneSemaforo:public Dron {
public:
    DroneSemaforo();

    int get_luz_roja() const;

    void set_luz_roja(int luz_roja);
    void leer(ifstream & arch);
    void imprimir(ofstream &arch);

private:
    int luz_roja;

};


#endif //ARBOLESYPOLIMORFISMO_LAB08_2025_1_DRONESEMAFORO_H