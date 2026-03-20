//
// Created by enric on 19/11/2025.
//

#ifndef INC_2024_1_POLIMORFISMO_AUTOREFERENCIA_BIBLIOTECA_H
#define INC_2024_1_POLIMORFISMO_AUTOREFERENCIA_BIBLIOTECA_H
#include "Estante.h"


class Biblioteca {
private:
    Estante AEstantes[10];
public:
    void carga();

    void insertar(Libro * libro);

    void llena();

    void muestra();

    void baja();
};


#endif //INC_2024_1_POLIMORFISMO_AUTOREFERENCIA_BIBLIOTECA_H