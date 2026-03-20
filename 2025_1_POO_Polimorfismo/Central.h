//
// Created by enric on 11/11/2025.
//

#ifndef INC_2025_1_POO_POLIMORFISMO_CENTRAL_H
#define INC_2025_1_POO_POLIMORFISMO_CENTRAL_H
#include "Arbol.h"
#include "DroneEstacionamiento.h"
#include "DroneSemaforo.h"
#include "DroneVelocidad.h"
class Central {
private:
    Arbol ADrones;
public:
    void carga();

    void contarSemaforo(int &cantidad_semaforos);

    void actualizar();

    void muestra();
};


#endif //INC_2025_1_POO_POLIMORFISMO_CENTRAL_H