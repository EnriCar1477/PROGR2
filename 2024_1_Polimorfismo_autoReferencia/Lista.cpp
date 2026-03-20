//
// Created by enric on 19/11/2025.
//

#include "Lista.h"

Lista::Lista() {
    ini=nullptr;
    peso=0.0;
}

Lista::~Lista() {
    this->eliminar();
}

void Lista::eliminar() {
    Nodo *aux;
    Nodo *recorrido=ini;
    while (recorrido!=nullptr) {
        aux=recorrido;
        recorrido=recorrido->siguiente;
        delete aux;
    }
    ini=nullptr;
}

double Lista::getPeso() {
    return peso;
}

void Lista::insertar(Libro *libro) {
    Nodo *nuevoNodo=new Nodo;
    nuevoNodo->libro=libro;
    if (ini==nullptr) {
        ini=nuevoNodo;
    }else {
        Nodo *recorrido=ini;
        while (recorrido->siguiente!=nullptr) {
        recorrido=recorrido->siguiente;
        }
        recorrido->siguiente=nuevoNodo ;
    }

}

void Lista::imprimir(ofstream &arch) {
    Nodo *recorrido;
    recorrido=ini;
    while (recorrido!=nullptr) {
        recorrido->libro->imprimir(arch);
        recorrido=recorrido->siguiente;
    }
}

void Lista::bajar() {
    Nodo *recorrido;
    recorrido=ini;
    while (recorrido!=nullptr) {
        recorrido->libro->actualizar();
        recorrido=recorrido->siguiente;
    }
}

