//
// Created by enric on 4/11/2025.
//

#include "PlatoFondo.h"

PlatoFondo::PlatoFondo() {
    proteina =nullptr;
}
PlatoFondo::~PlatoFondo() {
    if (proteina!=nullptr) delete [] proteina;
}

void PlatoFondo::setProteina(int *proteina) {
    if (this->proteina!=nullptr) delete  this->proteina;
    else {
        this->proteina = new int[4];
        for (int i=0;i<4;i++) {
            this->proteina[i] = proteina[i];
        }
    }
}

int PlatoFondo::getProteina(int indice) {
    return proteina[indice];
}

