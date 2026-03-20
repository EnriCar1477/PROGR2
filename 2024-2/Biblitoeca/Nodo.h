/*
 * File: Nodo
 * Author: gaelarias
 * 
 * Created on: 10/11/25, 7:10 PM 
*/

#ifndef INC_2024_2_NODO_H
#define INC_2024_2_NODO_H

#include "DetalleComanda.h"

class Nodo {
private:
    DetalleComanda dato;
    Nodo *siguiente;
public:
    Nodo();

    friend class Cola;
};


#endif //INC_2024_2_NODO_H