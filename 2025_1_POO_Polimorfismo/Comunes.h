//
// Created by enric on 11/11/2025.
//

#ifndef INC_2025_1_POO_POLIMORFISMO_COMUNES_H
#define INC_2025_1_POO_POLIMORFISMO_COMUNES_H
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
using namespace std;
void liberarCadena(char *cadena);
char *colectCadena(char *cadena);
void aperturaIfstream(ifstream &arch,const char *nomArch);
void aperturaOfstream(ofstream &arch,const char *nomArch);

#endif //INC_2025_1_POO_POLIMORFISMO_COMUNES_H