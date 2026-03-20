//
// Created by enric on 27/11/2025.
//

#include "MinisterioDeTransporte.h"

void MinisterioDeTransporte::cargaDeInfracciones(const char *nomArch) {
    ifstream arch;
    apertIfstream(arch, nomArch);
    Infraccion infraccion;
    while (arch>>infraccion) {
        tablaInracciones.push_back(infraccion);
    }
}
