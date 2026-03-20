/*
 * File: Cola
 * Author: gaelarias
 * 
 * Created on: 10/11/25, 7:12 PM 
*/

#ifndef INC_2024_2_COLA_H
#define INC_2024_2_COLA_H

#include "Nodo.h"

class Cola {
private:
    Nodo *cabeza;
    Nodo *cola;
    int longitud;
public:
    Cola();

    bool empty();
    int size() {
        return longitud;
    }
    void push(const DetalleComanda &detalle);
    DetalleComanda pop();
};


#endif //INC_2024_2_COLA_H