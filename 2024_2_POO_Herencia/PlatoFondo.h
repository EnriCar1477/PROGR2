//
// Created by enric on 4/11/2025.
//

#ifndef INC_2024_2_POO_HERENCIA_PLATOFONDO_H
#define INC_2024_2_POO_HERENCIA_PLATOFONDO_H
#include "Producto.h"


class PlatoFondo: public Producto{
private:
    int *proteina;
public:
    PlatoFondo();
    ~PlatoFondo();
    void setProteina(int *proteina);
    int getProteina(int indice);
};


#endif //INC_2024_2_POO_HERENCIA_PLATOFONDO_H