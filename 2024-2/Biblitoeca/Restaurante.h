/*
 * File: Restaurante
 * Author: gaelarias
 * 
 * Created on: 10/11/25, 7:19 PM 
*/

#ifndef INC_2024_2_RESTAURANTE_H
#define INC_2024_2_RESTAURANTE_H

#include "Cola.h"

class Restaurante {
private:
    Cola CRestaurante;
public:
    void leer();
    void actualizar(int proteina);
    void imprimir();
};


#endif //INC_2024_2_RESTAURANTE_H