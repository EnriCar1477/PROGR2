//
// Created by enric on 12/11/2025.
//

#ifndef INC_2024_2_POLIMORFISMO_LISTA_H
#define INC_2024_2_POLIMORFISMO_LISTA_H

#include "Comunes.h"
#include "Nodo.h"
class Lista {
private:
    Nodo *cabeza;
public:
    friend class Cola;

    void insert(DetalleComandada &detalle);
};


#endif //INC_2024_2_POLIMORFISMO_LISTA_H