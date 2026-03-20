//
// Created by enric on 11/11/2025.
//

#ifndef INC_2025_1_POO_POLIMORFISMO_NODO_H
#define INC_2025_1_POO_POLIMORFISMO_NODO_H

#include "Dron.h"
class Nodo {
private:
    Dron *dron;
    Nodo *izq;
    Nodo *der;
public:
    Nodo();
    ~Nodo();

    void imprimir(ofstream & arch);

    friend class Arbol;
};


#endif //INC_2025_1_POO_POLIMORFISMO_NODO_H