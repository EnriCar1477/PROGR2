//
// Created by enric on 6/11/2025.
//

#ifndef POO_2024_1_HERENCIA_COMUNES_H
#define POO_2024_1_HERENCIA_COMUNES_H
#include <iostream>
#include <fstream>
#include <cstring>
#define  MAX 100
using namespace std;
char *extraerCadena(char *cadena);
void aperturaIfstream(ifstream &arch,const char *nomArch);
void aperturaOfstream(ofstream &arch,const char *nomArch);
void liberarEspacio(char *heap);
#endif //POO_2024_1_HERENCIA_COMUNES_H