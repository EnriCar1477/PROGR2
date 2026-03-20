//
// Created by alulab14 on 28/11/2025.
//

#ifndef LABORATORIO09_STL_COMUNES_H
#define LABORATORIO09_STL_COMUNES_H
#include <fstream>
#include <cstring>
#include <string>
#define MAX 100
using namespace std;
char *extraerCadena(const char *cadena);
void liberarEspacio(char *&cadena);
void aperturaIfstream(ifstream &arch,const char *nomArch);
void aperturaOfstream(ofstream &arch,const char *nomArch);
#endif //LABORATORIO09_STL_COMUNES_H