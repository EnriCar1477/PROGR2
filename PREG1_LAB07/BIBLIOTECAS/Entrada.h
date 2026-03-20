//
// Created by gesuby on 05/11/2025.
//

#ifndef PREG1_LAB07_ENTRADA_H
#define PREG1_LAB07_ENTRADA_H

#include "Producto.h"
class Entrada:public Producto{
private:
    bool picante;
public:
    Entrada();
    ~Entrada();

    bool is_picante() const;
    void set_picante(bool picante);
};


#endif //PREG1_LAB07_ENTRADA_H