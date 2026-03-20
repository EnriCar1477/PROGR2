//
// Created by enric on 7/10/2025.
//
#include <iostream>
#include <fstream>
#include "FuncionesAuxiliares.h"
#include "Lista.h"
using namespace std;
Lista::Lista() {
    inicio=nullptr;
    fin=nullptr;
}

Lista::~Lista() {
    if (inicio!=nullptr) {
        delete inicio;
    }
    if (fin!=nullptr) {
        delete fin;
    }
}

void Lista::inicializar() {
    if (inicio!=nullptr) {
        delete inicio;
    }
    if (fin!=nullptr) {
        delete fin;
    }
    inicio=nullptr;
    fin=nullptr;
}

void Lista::set_inicio(void *nodo) {
    // if (inicio!=nullptr) {
    //     delete inicio;
    // }
    inicio=nodo;
}
void *Lista::get_inicio() {
    return inicio;
}
void Lista::set_fin(void *nodo) {
    // if (fin!=nullptr) {
    //     delete fin;
    // }
    fin=nodo;
}
void *Lista::get_fin() {
    return fin;
}
void Lista::cargarLista(void* (*funcion_lee)(std::ifstream &arch),const char *nombArch) {
    ifstream arch (nombArch,ios::in);
    if (!arch.is_open()) {
        cout<<"Error al abrir el archivo "<<nombArch<<endl;
        exit(1);
    }
    inicializar();
    void *dato;
    while (true) {
        dato=funcion_lee(arch);
        if (dato==nullptr) break;
        insertar(dato);
    }
}
bool Lista::listavacia() {
    return inicio==nullptr and fin==nullptr;
}

void Lista::insertar(void *dato) {
    void **nodo=new void *[2];
    nodo[0]=dato;
    nodo[1]=nullptr;
    if (listavacia()) {
        set_inicio(nodo);
        set_fin(nodo);
    }else {
        void **ultimoNodo=(void **)fin;
        ultimoNodo[1]=nodo;
        set_fin(nodo);
    }
}

void Lista::imprime(void (*funcion_imprime)(ofstream &arch,void *nodo), const char *nombArch) {
    ofstream arch (nombArch,ios::out);
    if (!arch.is_open()) {
        cout<<"Error al abrir el archivo "<<nombArch<<endl;
        exit(1);
    }
    void **recorrido=(void **)get_inicio();
    while (recorrido!=nullptr) {
        funcion_imprime(arch,recorrido[0]);
        recorrido=(void **)recorrido[1];
    }
}

void Lista::combinar(const Lista &lista1,const Lista &lista2,bool (*funcion_comparar)(void *valor1,void *valor2)) {
    void **recorrido1=(void **)lista1.inicio;
    void **recorrido2=(void **)lista2.inicio;
    int inicio=1;
    inicializar();
    while (recorrido1!=nullptr or recorrido2!=nullptr) {
        if (funcion_comparar(recorrido1[0],recorrido2[0])){
            this->insertar(recorrido2[0]);
            recorrido2=(void **)recorrido2[1];
        }else {
            this->insertar(recorrido1[0]);
            recorrido1=(void **)recorrido1[1];
        }
        if (recorrido1==nullptr) {
            while (recorrido2!=nullptr) {
                this->insertar(recorrido2[0]);
                recorrido2=(void **)recorrido2[1];
            }
        }else if (recorrido2==nullptr) {
            while (recorrido1!=nullptr) {
                this->insertar(recorrido1[0]);
                recorrido1=(void **)recorrido1[1];
            }
        }
    }
}
        // if (inicio) {
        //     if (*(int *)recorrido1[0]>*(int *)recorrido2[0]) {
        //         this->set_inicio(recorrido2[0]);
        //         recorrido2=(void **)recorrido2[1];
        //     }else {
        //         this->set_inicio(recorrido1[0]);
        //         recorrido1=(void **)recorrido1[1];
        //     }
        // }else {
        //     if (*(int *)recorrido1[0]>*(int *)recorrido2[0]) {
        //         this->set_fin(recorrido2[0]);
        //         recorrido2=(void **)recorrido2[1];
        //     }else {
        //         this->set_fin(recorrido1[0]);
        //         recorrido1=(void **)recorrido1[1];
        //     }
        // }