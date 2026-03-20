//
// Created by enric on 12/11/2025.
//

#ifndef INC_2024_2_POLIMORFISMO_NODO_H
#define INC_2024_2_POLIMORFISMO_NODO_H

#include "Comunes.h"
#include "DetalleComandada.h"

class Nodo {
private:
    DetalleComandada dato;
    Nodo *sig;
public:
    Nodo();
    ~Nodo();
    friend class Cola;
    friend class Lista;
};


#endif //INC_2024_2_POLIMORFISMO_NODO_H