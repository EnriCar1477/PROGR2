//
// Created by enric on 4/11/2025.
//

#ifndef INC_2024_2_POO_HERENCIA_BEBIBLES_H
#define INC_2024_2_POO_HERENCIA_BEBIBLES_H
#include "Producto.h"


class Bebibles: public Producto  {
private:
    char *tamano;
public:
    Bebibles();
    ~Bebibles();
    void setTamano(char *tamaño);
    char *getTamano();
};


#endif //INC_2024_2_POO_HERENCIA_BEBIBLES_H