//
// Created by enric on 27/11/2025.
//

#ifndef INC_2025_1_STL_VEHICULOS_H
#define INC_2025_1_STL_VEHICULOS_H

#include "Comunes.h"
class Vehiculos {
private:
    char *placa;
    char *marca;
    char *modelo;
public:
    Vehiculos();
    ~Vehiculos();
    Vehiculos(const Vehiculos &org);
    char *getPlaca();
    char *getMarca();
    char *getModelo();
    void setPlaca(char *placa);
    void setMarca(char *marca);
    void setModelo(char *modelo);
    void operator =(const Vehiculos &org);
    friend bool operator >>(ifstream &arch,Vehiculos &org);
    friend void operator!=(ofstream &arch,Vehiculos &org);

};


#endif //INC_2025_1_STL_VEHICULOS_H