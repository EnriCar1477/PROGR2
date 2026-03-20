//
// Created by enric on 6/11/2025.
//

#include "EstanteHorizontal.h"
EstanteHorizontal::EstanteHorizontal() {
    cantidad_novelas = 0;
}
int EstanteHorizontal::getCantidadNovelas() {
    return cantidad_novelas;
}
void EstanteHorizontal::setCantidadNovelas(int cant) {
    cantidad_novelas = cant;
}

int EstanteHorizontal::CalcularEspacioSobrante() {
    static int actual=getAnchura();
    for (int i=0;i<cantidad_novelas;i++) {
        actual-=this->novelas[i].getAncho();
    }
    return actual;
}

