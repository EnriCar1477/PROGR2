//
// Created by enric on 4/11/2025.
//

#ifndef INC_2024_2_POO_HERENCIA_RESTAURANTE_H
#define INC_2024_2_POO_HERENCIA_RESTAURANTE_H

#include "Comanda.h"
class Restaurante {
private:
    Comanda comandas[MAX];
    int cantidad_comandas;
public:
    Restaurante();
    void actualizar_comandas();
    void cargar_comandas();
    int buscarPosicion(int id_comandas);
    void imprimir();
};


#endif //INC_2024_2_POO_HERENCIA_RESTAURANTE_H