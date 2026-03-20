#include <iostream>
#include <fstream>
#include <cassert>
#include "conductores.h"
#include "infracciones.h"
#include "faltas.h"
#include "LibreriaApertura/AperturaDeArchivos.h"
#include <cstring>
#include "comunes.h"
using namespace std;
int main() {
    Faltas faltas;
    cargar_faltas_de_los_conductores(faltas);
    imprimir_faltas_de_los_conductores(faltas);

    return 0;
}