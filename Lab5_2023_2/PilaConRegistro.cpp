//
// Created by enric on 30/09/2025.
//

#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>
#include "PilaConRegistro.h"
#include "PilaConEnteros.h"
#include "FlotaGenerica.h"
using namespace std;
void *leeregistros(ifstream &arch) {
    void **datos=new void *[3];
    char codigo[8]{},c;
    long long dni;
    int cantidad;
    double peso;
    arch.getline(codigo,8,',');
    arch>>dni>>c>>cantidad>>c>>peso;
    arch.get();
    datos[0]=extraerCadena(codigo);
    datos[1]=referenciaEntero(cantidad);
    datos[2]=referenciaDouble(peso);
    void *punteros=datos;
    return punteros;
}
void imprimeregistro(ofstream &arch,void *nodo) {
    void **recorrido=(void **)nodo;
    while (recorrido!=nullptr) {
        void **temp=(void **)recorrido[1];
        arch<<(char *)temp[0]<<setw(10)<<*(int *)temp[1]<<setw(10)<<*(double*)temp[2]<<endl;
        recorrido=(void **)recorrido[0];
    }
}
int cmpregistro(const void *a, const void *b) {
    //     void *datosA=*(void **)a;
    //     void *datosB=*(void **)b;
    //     void **pesosA=(void **)datosA;
    //     void **pesosB=(void **)datosB;
    void **pesosA=(void **)a;
    void **pesosB=(void **)b;
    if (*(double *)pesosA[1] > *(double *)pesosB[1]) return 1;
    else if (*(double *)pesosA[1] < *(double *)pesosB[1]) return -1;
}
void *calculaRegistro(void *datos,double &peso) {
    void **nodo=new void *[2];
    nodo[0]=nullptr;
    nodo[1]=datos;
    void **temp=(void **)datos;
    peso=*(double *)temp[2];
    void *puntero=nodo;
    return puntero;
}
char *extraerCadena(const char *cadena) {
    char *nuevaCadena=new char[strlen(cadena)+1];
    strcpy(nuevaCadena,cadena);
    return nuevaCadena;

}