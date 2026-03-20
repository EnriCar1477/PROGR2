//
// Created by enric on 12/11/2025.
//

#ifndef INC_2024_2_POLIMORFISMO_RESTAURANTE_H
#define INC_2024_2_POLIMORFISMO_RESTAURANTE_H

#include "Comunes.h"
#include "Lista.h"
#include "Cola.h"
class Restaurante {
private:
    Cola Ccomanda;
public:
    void cargar();

    void eliminar(int i);

    void impirmir();
};


#endif //INC_2024_2_POLIMORFISMO_RESTAURANTE_H