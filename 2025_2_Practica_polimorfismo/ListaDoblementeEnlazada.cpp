//
// Created by enric on 15/11/2025.
//

#include "ListaDoblementeEnlazada.h"

ListaDoblementeEnlazada::ListaDoblementeEnlazada() {
    cabeza=nullptr;
    longitud=0;
}

// ListaDoblementeEnlazada::~ListaDoblementeEnlazada() {
//     Nodo *recorrido=cabeza;
//     Nodo *actual=recorrido;
//     while (recorrido!=nullptr) {
//         delete actual;
//         recorrido=recorrido->siguiente;
//     }
// }

void ListaDoblementeEnlazada::insertar(Streamer *streamer) {
    Nodo *nuevoNodo=new Nodo;
    nuevoNodo->dato=streamer;
    if (cabeza==nullptr) {
        cabeza=nuevoNodo;
    }else {
        Nodo *actual=cabeza;
        while (actual->siguiente!=nullptr) {
            actual=actual->siguiente;
        }
        actual->siguiente=nuevoNodo;
        nuevoNodo->anterior=actual;
    }
    longitud++;

}

Nodo * ListaDoblementeEnlazada::buscarNodo(int idStreamer) {
    Nodo* local=cabeza;
    while (local->siguiente!=nullptr) {
        if (local->dato->getId()==idStreamer) return local;
        local=local->siguiente;
    }
    return nullptr;
}


