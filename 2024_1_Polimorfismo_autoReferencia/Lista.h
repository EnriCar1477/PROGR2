//
// Created by enric on 19/11/2025.
//

#ifndef INC_2024_1_POLIMORFISMO_AUTOREFERENCIA_LISTA_H
#define INC_2024_1_POLIMORFISMO_AUTOREFERENCIA_LISTA_H

#include "Nodo.h"
class Lista {
private:
    Nodo *ini;
    double peso;
public:
    Lista();
    ~Lista();
    void eliminar();
    double getPeso();
    void insertar(Libro * libro);

    void imprimir( ofstream & arch);

    void bajar();
};


#endif //INC_2024_1_POLIMORFISMO_AUTOREFERENCIA_LISTA_H