//
// Created by enric on 19/11/2025.
//

#ifndef INC_2024_1_POLIMORFISMO_AUTOREFERENCIA_REVISTA_H
#define INC_2024_1_POLIMORFISMO_AUTOREFERENCIA_REVISTA_H
#include "Libro.h"


class Revista:public Libro{
private:
    int ISSN;
    int anho;
    int numero;
    int vigencia;
public:
    Revista();
    void leer(ifstream &arch) override;
    void imprimir(ofstream &arch) override;
    void actualizar() override;
};


#endif //INC_2024_1_POLIMORFISMO_AUTOREFERENCIA_REVISTA_H