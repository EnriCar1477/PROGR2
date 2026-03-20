//
// Created by enric on 12/11/2025.
//

#include "DetalleComandada.h"

#include "Bebible.h"
#include "Entrada.h"


DetalleComandada::DetalleComandada() {
    id = 0;
    pedido = nullptr;
}

// DetalleComandada::~DetalleComandada() {
//     if (pedido != nullptr) delete pedido;
// }

void DetalleComandada::setId(int id) {
    this->id = id;
}

void DetalleComandada::setProducto(Producto *prod) {
    this->pedido = prod;
}

void DetalleComandada::leer(ifstream &arch, char tipo) {
    if (tipo=='B') {
        this->pedido=new Bebible();
    }else if (tipo=='E') {
        this->pedido=new Entrada();
    }else this->pedido=new Proteina();
    this->pedido->leer(arch);
}

bool DetalleComandada::verificar(int proteina) {
    return pedido->confirmar(proteina);
}

void DetalleComandada::imprimir(ofstream &arch) {
    arch<<"Codigo comandad: "<<id<<endl;
    pedido->imprimir(arch);
}
