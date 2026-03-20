//
// Created by enric on 30/10/2025.
//

#ifndef INC_2025__1_LAB6_POO_EMPRESA_H
#define INC_2025__1_LAB6_POO_EMPRESA_H
#include <iostream>
#include "Multa.h"
using namespace std;
class Empresa {
private:
    int dni;
    char *nombre;
    char *placas[10]{};
    int numPlacas;
    int numMultas;
    Multa *multas;
public:
    Empresa();
    ~Empresa();
    void limpiar();
    void copiar(const Empresa &orig);
    int getDni();
    int getNumMultas();
    void setNumMultas(int numMultas);
    char *getNombre();
    int getNumPlacas();
    void setDni(int dni);
    void setNombre(char *nombre);
    void setNumPlacas(int numPlacas);
    Empresa(const Empresa &orig);
    void setPlacaI(char *placa,int i);
    char * getPlacaI(int i);
    void operator=(Empresa &orig);
    friend void operator >>(ifstream &arch,Empresa &empresa);
};


#endif //INC_2025__1_LAB6_POO_EMPRESA_H