//
// Created by enric on 19/11/2025.
//

#include "Nodo.h"

Nodo::Nodo() {
    libro=nullptr;
    siguiente=nullptr;
}

Nodo::~Nodo() {
   /* if (libro!=nullptr) delete libro;
    if (siguiente!=nullptr) delete siguiente;*/
}

