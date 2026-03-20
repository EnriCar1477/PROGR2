//
// Created by enric on 4/11/2025.
//

#ifndef INC_2024_2_POO_HERENCIA_ENTRADA_H
#define INC_2024_2_POO_HERENCIA_ENTRADA_H
#include "Producto.h"


class Entrada : public Producto{
private:
    bool picante;
public:
    Entrada();
    void setPicante(bool picante);
    bool getPicante();

};




#endif //INC_2024_2_POO_HERENCIA_ENTRADA_H
