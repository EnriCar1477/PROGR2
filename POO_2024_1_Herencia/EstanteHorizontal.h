//
// Created by enric on 6/11/2025.
//

#ifndef POO_2024_1_HERENCIA_ESTANTEHORIZONTAL_H
#define POO_2024_1_HERENCIA_ESTANTEHORIZONTAL_H
#include "Comunes.h"
#include "Estante.h"
#include "Novelas.h"


class EstanteHorizontal: public Estante {
private:
    Novelas novelas[MAX];
    int cantidad_novelas;
public:
    EstanteHorizontal();
    int getCantidadNovelas();
    void setCantidadNovelas(int cantidad);
    int CalcularEspacioSobrante();
};


#endif //POO_2024_1_HERENCIA_ESTANTEHORIZONTAL_H