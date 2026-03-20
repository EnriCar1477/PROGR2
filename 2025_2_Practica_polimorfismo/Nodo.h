//
// Created by enric on 15/11/2025.
//

#ifndef INC_2025_2_PRACTICA_POLIMORFISMO_NODO_H
#define INC_2025_2_PRACTICA_POLIMORFISMO_NODO_H

#include "Comunes.h"
#include "Metricas.h"
class Nodo {
private:
    Metricas *dato;
    Nodo *siguiente;
    Nodo *anterior;
public:
    Nodo();
    ~Nodo();

    void insertar(char* tipo,Metricas * metrica);

    friend class ListaDoblementeEnlazada;
};


#endif //INC_2025_2_PRACTICA_POLIMORFISMO_NODO_H