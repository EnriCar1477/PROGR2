//
// Created by alulab14 on 7/11/2025.
//

#ifndef STREAMERSHERENCIA_COMUNES_H
#define STREAMERSHERENCIA_COMUNES_H
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
char *extraerCadena(char *cadena);
void aperturaIfstream(ifstream &arch,const char *nomArch);
void aperturaOfstream(ofstream &arch,const char *nomArch);
void liberar(char *cadena);
#endif //STREAMERSHERENCIA_COMUNES_H