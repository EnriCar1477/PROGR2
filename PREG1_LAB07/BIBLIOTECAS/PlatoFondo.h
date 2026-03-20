//
// Created by gesuby on 05/11/2025.
//

#ifndef PREG1_LAB07_PLATOFONDO_H
#define PREG1_LAB07_PLATOFONDO_H

#include "Producto.h"
class PlatoFondo:public Producto {
private:
    int *proteina[4];

public:
    PlatoFondo();
    ~PlatoFondo();

};


#endif //PREG1_LAB07_PLATOFONDO_H