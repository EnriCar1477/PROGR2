//
// Created by enric on 30/09/2025.
//

#ifndef LAB5_2023_2_FLOTAGENERICA_H
#define LAB5_2023_2_FLOTAGENERICA_H
#include <iostream>
using namespace std;
void cargacamiones(void *&flota,int numcaminiones,const double pesomaximo,void* (*funcion_lee)(ifstream &arch),
                       void* (*calcula)(void *datos,double &peso),const char *nombreArch);
void **crearCamion() ;
void muestracamiones(void *flota,int numcaminiones,void (*imprime)(ofstream &arch,void *nodo),const char *nombreArch);
int cmpnumero(const void *a,const void *b) ;
double *referenciaDouble(double valor);
void push(void *&camion,void *carga,int indiceCamiones);
#endif //LAB5_2023_2_FLOTAGENERICA_H