//
// Created by enric on 12/11/2025.
//

#ifndef INC_2024_2_POLIMORFISMO_ENTRADA_H
#define INC_2024_2_POLIMORFISMO_ENTRADA_H

#include "Comunes.h"
#include "Producto.h"

class Entrada:public Producto{
private:
    bool picante;
public:
    Entrada();
    void leer(ifstream &arch) override;
    void copiar(const Entrada &orig);
    bool confirmar(int protein) override;
    void imprimir(ofstream &arch) override;
};


#endif //INC_2024_2_POLIMORFISMO_ENTRADA_H