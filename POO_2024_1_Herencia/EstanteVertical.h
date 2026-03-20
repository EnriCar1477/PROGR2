//
// Created by enric on 6/11/2025.
//

#ifndef POO_2024_1_HERENCIA_ESTANTEVERTICAL_H
#define POO_2024_1_HERENCIA_ESTANTEVERTICAL_H
#include "Comunes.h"
#include "Enciclopedia.h"
#include "Estante.h"

class EstanteVertical:public Estante{
private:
    Enciclopedia enciclopedias[MAX];
    int cantidad_enciclopedias;
public:
    EstanteVertical();
    void setCantidadEnciclopedias(int cantidad);
    int getCantidadEnciclopedias();

};


#endif //POO_2024_1_HERENCIA_ESTANTEVERTICAL_H