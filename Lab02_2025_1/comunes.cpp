//
// Created by Emyr11 on 10/09/2025.
//

#include "comunes.h"
#include <cstring>

using namespace std;

char * miStrdup(const char *cadena) {
    char *cadenaNueva;
    cadenaNueva=new char[strlen(cadena)+1];
    strcpy(cadenaNueva,cadena);
    return cadenaNueva;
}
