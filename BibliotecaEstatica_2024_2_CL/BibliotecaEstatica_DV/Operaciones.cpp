//
// Created by enric on 26/08/2025.
//
#include <cstring>
#include <iostream>
#include "LibreriaEstatica/Estructuras.h"
using namespace std;

bool operator <=(Pedido pedido,Plato *platos) {
    int contador=0;
    while (strcmp(platos[contador].codigo,"FIN")!=0) {
        if (strcmp(platos[contador].codigo,pedido.codigoDelPlato)==0) {
            platos[contador].totalDePedidos+=pedido.cantidad;
            platos[contador].totalRecaudado=platos[contador].totalDePedidos*platos[contador].precio;
            return true;
        }
        contador++;
    }
    return false;
}