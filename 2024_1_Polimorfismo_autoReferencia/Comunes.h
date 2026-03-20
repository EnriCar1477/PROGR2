//
// Created by enric on 19/11/2025.
//

#ifndef INC_2024_1_POLIMORFISMO_AUTOREFERENCIA_COMUNES_H
#define INC_2024_1_POLIMORFISMO_AUTOREFERENCIA_COMUNES_H
#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>
using namespace std;
char *colectCadena(char *cadena);
void liberarCadena(char *&cadena);
void aperturaIfstream(ifstream &arch,const char *nomArch);
void aperturaOfstream(ofstream &arch,const char *nomArch);
#endif //INC_2024_1_POLIMORFISMO_AUTOREFERENCIA_COMUNES_H