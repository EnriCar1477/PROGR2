#include <iostream>

#include "Bibliotecas/Central.h"

int main() {
    Central centralDeInformaciones;
    centralDeInformaciones.carga("Archivos/Drones.csv");
    centralDeInformaciones.muestra("Reportes/reporte.txt");
    return 0;
}
