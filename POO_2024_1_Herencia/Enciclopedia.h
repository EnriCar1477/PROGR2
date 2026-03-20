//
// Created by enric on 6/11/2025.
//

#ifndef POO_2024_1_HERENCIA_ENCICLOPEDIA_H
#define POO_2024_1_HERENCIA_ENCICLOPEDIA_H
#include "Libro.h"


class Enciclopedia: public Libro{
private:
    int volumen;
    double peso;
public:
    Enciclopedia();
    void setPeso(double peso);
    double getPeso();
    void setVolumen(int volumen);
    int getVolumen();
};


#endif //POO_2024_1_HERENCIA_ENCICLOPEDIA_H