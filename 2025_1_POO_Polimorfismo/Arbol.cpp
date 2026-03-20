//
// Created by enric on 11/11/2025.
//

#include "Arbol.h"

#include "DroneEstacionamiento.h"
#include "DroneSemaforo.h"

Arbol::Arbol() {
    raiz = nullptr;
}

Arbol::~Arbol() {
    this->liberarArbol();
}

void Arbol::liberarArbol() {
    liberarNodos_PostOrden(raiz);
}

void Arbol::liberarNodos_PostOrden(Nodo *&nodo) {
    if (nodo != nullptr) {
        liberarNodos_PostOrden(nodo->izq);
        liberarNodos_PostOrden(nodo->der);
        delete nodo;
        nodo = nullptr;
    }
}

void Arbol::InsertarNodo(Nodo *&nodo, Dron *drone) {
    if (nodo==nullptr) {
        nodo = new Nodo;
        nodo->dron=drone;
    }else {
        char *id_Nodo=nodo->dron->getId();
        char *id_Drone=drone->getId();
        if (strcmp(id_Nodo,id_Drone)==1) {
            InsertarNodo(nodo->izq,drone);
        }else {
            InsertarNodo(nodo->der,drone);
        }
        delete id_Nodo;
        delete id_Drone;
    }
}

void Arbol::insert(Dron *drone) {
    if (drone!=nullptr) {
        InsertarNodo(raiz,drone);
    }

}

void Arbol::contarNodos_Semaforos(Nodo *nodo, int &cantidad) {
    if (nodo==nullptr) {
        return;
    }else {
        char tipo=nodo->dron->determinarTipo();
        if (tipo=='S') cantidad++;
        contarNodos_Semaforos(nodo->izq,cantidad);
        contarNodos_Semaforos(nodo->der,cantidad);
    }
}

void Arbol::contarSemaforos(int &cantidad) {
    contarNodos_Semaforos(this->raiz,cantidad);
}

void Arbol::contarNodos_Estacionamiento(Nodo *nodo, int &cantidad) {
    if (nodo==nullptr) {
        return;
    }else {
        char tipo=nodo->dron->determinarTipo();
        if (tipo=='E') cantidad++;
        contarNodos_Estacionamiento(nodo->izq,cantidad);
        contarNodos_Estacionamiento(nodo->der,cantidad);
    }
}

void Arbol::contarEstacionamiento(int &cantidad_estacionamientos) {
    contarNodos_Estacionamiento(this->raiz,cantidad_estacionamientos);
}

void Arbol::actualizarNodo(Nodo *nodo, int &cantidad_semaforos,
    int &cantidad_estacionamientos) {
    if (nodo==nullptr) {
        return;
    }
    char tipo=nodo->dron->determinarTipo();
    if (tipo=='S') {
        nodo->dron->actualizar();
    }else if (tipo=='E'){
        nodo->dron->actualizar();
    }
    if (cantidad_semaforos==0 and cantidad_estacionamientos==0) {
        return;
    }else {
        actualizarNodo(nodo->izq,cantidad_semaforos,cantidad_estacionamientos);
        actualizarNodo(nodo->der,cantidad_semaforos,cantidad_estacionamientos);
    }
}

void Arbol::AplicarActualizacion(int cantidad_semaforos, int cantidad_estacionamientos) {
    actualizarNodo(raiz,cantidad_semaforos,cantidad_estacionamientos);
}

void Arbol::contarNodo(Nodo *nodo, int &cantidad_estacionamientos, int &cantidad_semaforos) {
    // if (nodo == nullptr)
    //     return;
    // char aux[100], tipo[3];
    // strcpy(aux,nodo->dron->getId());
    // aux[2] = 0;
    // strcpy(tipo, aux);
    // if (strcmp(tipo, "DS") == 0) {
    //     cantidad_semaforos++;
    // } else if (strcmp(tipo, "DE")==0 ) {
    //     cantidad_estacionamientos++;
    // }
    // contarNodo(nodo->der, cantidad_estacionamientos, cantidad_semaforos);
    // contarNodo(nodo->izq, cantidad_estacionamientos, cantidad_semaforos);
    if (nodo==nullptr) {
        return;
    }
    char aux[100];
    strcpy(aux,nodo->dron->getId());
    aux[2] = 0;
    if (strcmp(aux,"DE")==0) {
        cantidad_estacionamientos++;
    }else if (strcmp(aux,"DS")==0){
        cantidad_semaforos++;
    }
    contarNodo(nodo->der,cantidad_estacionamientos,cantidad_semaforos);
    contarNodo(nodo->izq,cantidad_estacionamientos,cantidad_semaforos);
}

void Arbol::contar(int &cantidad_Estacionamientos, int &cantidad_Semaforos) {
    contarNodo(raiz,cantidad_Estacionamientos,cantidad_Semaforos);
}

void Arbol::imprimirNodos(Nodo *nodo, ofstream &arch) {
    if (nodo==nullptr) {
        return;
    }
    nodo->imprimir(arch);
    imprimirNodos(nodo->izq,arch);
    imprimirNodos(nodo->der,arch);
}

void Arbol::imprimir(ofstream &arch) {
    arch<<"REPORTE DE DRONES"<<endl;
    imprimirNodos(raiz,arch);
}




