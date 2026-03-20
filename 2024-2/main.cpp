/*
 * File: ${NAME}
 * Author: gaelarias
 * 
 * Created on: 10/11/25, 5:40 PM
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>

using namespace std;

#include "Biblitoeca/Restaurante.h"

/*
 *
*/

int main(int argc, char **argv) {

    Restaurante restaurante;
    restaurante.leer();
    restaurante.actualizar(3);
    restaurante.imprimir();
    return 0;
}