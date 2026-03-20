//
// Created by enric on 12/11/2025.
//

#ifndef INC_2024_2_POLIMORFISMO_BEBIBLE_H
#define INC_2024_2_POLIMORFISMO_BEBIBLE_H

#include "Comunes.h"
#include "Producto.h"

class Bebible:public Producto{
private:
    char *tamano;
public:
    Bebible();
    ~Bebible();
    void leer(ifstream &arch) override;
    void copiar(const Bebible &orig);
    bool confirmar(int protein);
    void imprimir(ofstream &arch) override;
};


#endif //INC_2024_2_POLIMORFISMO_BEBIBLE_H