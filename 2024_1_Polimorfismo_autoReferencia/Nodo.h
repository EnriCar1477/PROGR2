//
// Created by enric on 19/11/2025.
//

#ifndef INC_2024_1_POLIMORFISMO_AUTOREFERENCIA_NODO_H
#define INC_2024_1_POLIMORFISMO_AUTOREFERENCIA_NODO_H
#include "Libro.h"

class Nodo {
private:
    Libro *libro;
    Nodo *siguiente;
public:
    Nodo();
    ~Nodo();
    friend  class Lista;
};


#endif //INC_2024_1_POLIMORFISMO_AUTOREFERENCIA_NODO_H