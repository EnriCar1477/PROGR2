//
// Created by enric on 12/11/2025.
//

#ifndef INC_2024_2_POLIMORFISMO_COLA_H
#define INC_2024_2_POLIMORFISMO_COLA_H
#include "Comunes.h"
#include "Nodo.h"
#include "DetalleComandada.h"

class Cola {
private:
    int longitud;
    Nodo *cabeza;
    Nodo *cola;
public:
    Cola();
    ~Cola();
    void encolar(DetalleComandada &comandada);
    DetalleComandada desencolar();

    void lectura(ifstream & arch, char tipo, int id);

    void vaciar();

    void eliminarProteina(int i);

    void imprimir(ofstream & arch);
};


#endif //INC_2024_2_POLIMORFISMO_COLA_H