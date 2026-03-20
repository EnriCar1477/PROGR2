//
// Created by enric on 6/11/2025.
//

#ifndef POO_2024_1_HERENCIA_NOVELAS_H
#define POO_2024_1_HERENCIA_NOVELAS_H
#include "Libro.h"


class Novelas: public Libro {
private:
    char *tipo;
    double peso;
public:
    Novelas();
    ~Novelas();
    void setTipo(char *tipo);
    void setPeso(double peso);
    char *getTipo();
    double getPeso();
};


#endif //POO_2024_1_HERENCIA_NOVELAS_H