//
// Created by enric on 23/09/2025.
//

#ifndef PROG2_LAB5_2024_2_BIBLIOTECAGENERICA_H
#define PROG2_LAB5_2024_2_BIBLIOTECAGENERICA_H
#include <iostream>
using namespace std;
void crearlista(void *&lista,void *(*funcion_lectura)(ifstream &arch),
                        const char *nombre_archivo);
void cargarlista(void *&lista,bool (*funcion_comparar)(void * a,void *b),
                void *(*funcion_lectura)(ifstream &arch),const char *nombre_archivo);
void muestralista(void *lista,void (*funcion_imprimir)(ofstream &archivo,void *nodo),
                const char *nombre_archivo);
void insertarFinal(void *&lista,void *datos_dupa);
bool eslistavacia(void *lista) ;
#endif //PROG2_LAB5_2024_2_BIBLIOTECAGENERICA_H