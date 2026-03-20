//
// Created by enric on 26/08/2025.
//

#ifndef BIBLIOTECAESTATICA_DV_OPERACIONES_H
#define BIBLIOTECAESTATICA_DV_OPERACIONES_H
#include "LibreriaEstatica/Estructuras.h"

bool operator <=(Pedido pedido,Plato *platos);
bool operator <=(Repartidor *repartidor,Pedido pedido);
#endif //BIBLIOTECAESTATICA_DV_OPERACIONES_H