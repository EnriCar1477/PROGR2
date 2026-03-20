//
// Created by enric on 27/10/2025.
//

#include "ProductoEntregado.h"

ProductoEntregado::ProductoEntregado() {
    codigo=nullptr;
    precio=0.0;
}

ProductoEntregado::~ProductoEntregado() {
    if (codigo!=nullptr) {
        delete codigo;
    }
}
