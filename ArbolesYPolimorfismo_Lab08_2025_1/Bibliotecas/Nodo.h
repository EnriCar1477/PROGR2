//
// Created by arian on 9/11/2025.
//

#ifndef ARBOLESYPOLIMORFISMO_LAB08_2025_1_NODO_H
#define ARBOLESYPOLIMORFISMO_LAB08_2025_1_NODO_H
#include "Dron.h"


class Nodo {
public:
    Nodo();
    friend class Arbol;

private:
    Dron *dron;
    Nodo *izq;
    Nodo *der;

};


#endif //ARBOLESYPOLIMORFISMO_LAB08_2025_1_NODO_H