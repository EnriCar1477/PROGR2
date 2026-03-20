#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>

using namespace std;

#include "Cola.h"

Cola::Cola() {
    cabeza = cola = nullptr;
    longitud = 0;
}
bool Cola::empty() {
    return cabeza == nullptr;
}
void Cola::push(const DetalleComanda &detalle) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = detalle;
    if (empty()) {
        cola = nuevo;
        cabeza = nuevo;
    }
    else {
        cola->siguiente = nuevo;
        cola = nuevo;
    }
    longitud++;
}
DetalleComanda Cola::pop() {
    DetalleComanda detalle(cabeza->dato);
    Nodo *cab = cabeza;
    cabeza = cabeza->siguiente;
    cab->siguiente = nullptr;
    delete cab;
    if (empty()) // Si fue el ultimo elemento, tambien vacio la cola
        cola = nullptr;

    longitud--;
    return detalle;
}