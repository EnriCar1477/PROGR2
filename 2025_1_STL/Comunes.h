//
// Created by enric on 27/11/2025.
//

#ifndef INC_2025_1_STL_COMUNES_H
#define INC_2025_1_STL_COMUNES_H
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
#define  MAX 100
using namespace std;
char *colecCadena(const char *cadena);
void liberarCadena(char *&cadena);
void apertIfstream(ifstream &fin,const char *nomArch);
void apertOfstream(ofstream &fout,const char *nomArch);
#endif //INC_2025_1_STL_COMUNES_H