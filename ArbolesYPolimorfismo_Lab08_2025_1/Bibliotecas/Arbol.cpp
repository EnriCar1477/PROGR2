//
// Created by arian on 9/11/2025.
//

#include "Arbol.h"

void Arbol::inicializa() {
    raiz = nullptr;
}

Arbol::Arbol() {
    inicializa();
}

Arbol::~Arbol() {
    eliminaArbol();
}

void Arbol::insertar(class Dron *dron) {
    insertarR(raiz, dron);
}

void Arbol::eliminaArbol() {
    eliminarR(raiz);
}

void Arbol::eliminarR(Nodo *&raiz) {
    if (raiz != nullptr) {
        eliminarR(raiz->izq);
        eliminarR(raiz->der);
        delete raiz;
        raiz = nullptr;
    }
}

void Arbol::insertarR(class Nodo *&raiz, class Dron *dron) {
    if (raiz == nullptr) {
        raiz = new class Nodo;
        raiz->dron = dron;
        return;
    }
    char cadenaRaiz[100];
    raiz->dron->get_id(cadenaRaiz);
    char cadenaDron[100];
    dron->get_id(cadenaDron);
    if (strcmp(cadenaRaiz,cadenaDron)>0) {
        insertarR(raiz->izq,dron);
    } else {
        insertarR(raiz->der, dron);
    }

}

void Arbol::mostrarR(ofstream &arch, const class Nodo *raiz) {
    if (raiz != nullptr) {

        raiz->dron->imprimir(arch);

        mostrarR(arch,raiz->izq);
        mostrarR(arch,raiz->der);
    }
}

void Arbol::mostrar(ofstream &arch) {
    mostrarR(arch,raiz);
}