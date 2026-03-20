//
// Created by enric on 11/11/2025.
//

#ifndef INC_2025_1_POO_POLIMORFISMO_DRON_H
#define INC_2025_1_POO_POLIMORFISMO_DRON_H
#include "Comunes.h"

class Dron {
private:
    char *id;
    char *ubicacion;
    int capacidad;
public:
    Dron();
    ~Dron();
    char *getId();
    virtual void leer(ifstream &archive);
    char determinarTipo();
    virtual void actualizar()=0;
    virtual void imprimir(ofstream & arch);

    // void copiar(Dron &dron);
    // virtual void operator =(Dron &dron);
};


#endif //INC_2025_1_POO_POLIMORFISMO_DRON_H