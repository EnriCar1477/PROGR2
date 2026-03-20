//
// Created by enric on 17/09/2025.
//

#ifndef PROG2_PUNTEROSVOID_2025_2_20206162_CESAR_CARRANZA_CAFETERIA_H
#define PROG2_PUNTEROSVOID_2025_2_20206162_CESAR_CARRANZA_CAFETERIA_H
#include <iostream>
using namespace std;
void cargarInventario(const char *nomArch,void *&inventario) ;
char* extraerCadena(const char *cadena);
void incrementarEspacios(void *&inventario,int &contador,int &capacidad) ;
void ingresarDatosInventario(void *item,char *punteroCodigo,char *punteroNombre,char *punteroUnidad,double cantidad);
void cargarMenu(const char *nomArch,void *&menu);
int *referenciaInt(int variable);
void ingresarDatosMenu(void *arreglo,char *punteroCodigo,char *punteroNombre,char *punteroDescripcion,char tipo,
                        int cantidad,double precio);
void actualizarMenu(const char *nomArch,void *inventario,void *menu) ;
int buscar(char *codigo,void *arreglo);
void reporteMenu(const char *nomArch,void *menu);
#endif //PROG2_PUNTEROSVOID_2025_2_20206162_CESAR_CARRANZA_CAFETERIA_H