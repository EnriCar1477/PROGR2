//
// Created by enric on 30/10/2025.
//

#ifndef INC_2025__1_LAB6_POO_MINISTERIODETRANSPORTE_H
#define INC_2025__1_LAB6_POO_MINISTERIODETRANSPORTE_H
#include <iostream>
#include "Comunes.h"
#include "Infraccion.h"
#include "Empresa.h"
using namespace std;
class MinisterioDeTransporte {
private:
    Infraccion *infracciones;
    int numInf;
    Empresa empresas[50];
    int numEmpr;
public:
    MinisterioDeTransporte();
    ~MinisterioDeTransporte();
    friend void operator <(MinisterioDeTransporte &ministerio,const char *nomArch);
    friend void operator <=(MinisterioDeTransporte &ministerio,const char *nomArch);
    void ingresarInfraccion(Infraccion &infraLocal,int &capacidad);
    void incrementarEspacioInfraccion(int &capacidad);
    void ingresarEmpresa(Empresa &empresaLocal,int i);
};


#endif //INC_2025__1_LAB6_POO_MINISTERIODETRANSPORTE_H