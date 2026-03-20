//
// Created by enric on 19/11/2025.
//

#ifndef INC_2024_1_POLIMORFISMO_AUTOREFERENCIA_ENCICLOPEDIA_H
#define INC_2024_1_POLIMORFISMO_AUTOREFERENCIA_ENCICLOPEDIA_H
#include "Libro.h"


class Enciclopedia:public Libro{
private:
    int sku;
    int anho;
    int vigencia;
public:
    Enciclopedia();
    void leer(ifstream &arch) override;
    void imprimir(ofstream &arch) override;
    void actualizar() override;
};


#endif //INC_2024_1_POLIMORFISMO_AUTOREFERENCIA_ENCICLOPEDIA_H