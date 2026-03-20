//
// Created by enric on 19/11/2025.
//

#ifndef INC_2024_1_POLIMORFISMO_AUTOREFERENCIA_NOVELA_H
#define INC_2024_1_POLIMORFISMO_AUTOREFERENCIA_NOVELA_H
#include "Libro.h"


class Novela:public Libro{
private:
    char *autor;
public:
    Novela();
    ~Novela() override;
    void leer(ifstream &arch) override;
    void imprimir(ofstream &arch) override;
    void actualizar() override;
};


#endif //INC_2024_1_POLIMORFISMO_AUTOREFERENCIA_NOVELA_H