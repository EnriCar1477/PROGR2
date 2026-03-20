//
// Created by gesuby on 05/11/2025.
//

#ifndef PREG1_LAB07_BEBIDA_H
#define PREG1_LAB07_BEBIDA_H

#include "Producto.h"
class Bebida: public Producto {
private:
    char *tamano;

public:
    Bebida();
    ~Bebida();

    void get_tamano(char *cad) const;
    void set_tamano(const char *cad);
};


#endif //PREG1_LAB07_BEBIDA_H