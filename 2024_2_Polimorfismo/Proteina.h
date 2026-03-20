//
// Created by enric on 12/11/2025.
//

#ifndef INC_2024_2_POLIMORFISMO_PROTEINA_H
#define INC_2024_2_POLIMORFISMO_PROTEINA_H

#include "Comunes.h"
#include "Producto.h"

class Proteina:public Producto{
private:
    int proteina;
public:
    Proteina();
    void leer(ifstream &arch) override;
    void copiar(const Proteina &orig);
    bool confirmar(int protein) override;
    void imprimir(ofstream &arch) override;
};


#endif //INC_2024_2_POLIMORFISMO_PROTEINA_H