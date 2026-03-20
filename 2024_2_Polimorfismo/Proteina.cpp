//
// Created by enric on 12/11/2025.
//

#include "Proteina.h"

Proteina::Proteina() {
    proteina = 0;
}

void Proteina::leer(ifstream &arch) {
    Producto::leer(arch);
    arch>>proteina;
}

void Proteina::copiar(const Proteina &orig) {
    Producto::copiar(orig);
    this->proteina=orig.proteina;
}

bool Proteina::confirmar(int protein) {
    if (this->proteina == protein) return true;
    else return false;

}

void Proteina::imprimir(ofstream &arch) {
    Producto::imprimir(arch);
    arch<<"Proteina: "<<proteina<<endl;
}
