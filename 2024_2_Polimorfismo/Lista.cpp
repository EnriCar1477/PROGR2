//
// Created by enric on 12/11/2025.
//

#include "Lista.h"

void Lista::insert(DetalleComandada &detalle) {
    Nodo *nuevoNodo = new Nodo;
    nuevoNodo->sig=nullptr;
    nuevoNodo->dato=detalle;
    if (cabeza==nullptr) {
        cabeza=nuevoNodo;
    }else {
        Nodo *recorrida=cabeza;
        while (recorrida->sig!=nullptr) {
            recorrida=recorrida->sig;
        }
        recorrida->sig=nuevoNodo;
    }
}
