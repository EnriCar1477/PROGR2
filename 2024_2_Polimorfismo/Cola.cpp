//
// Created by enric on 12/11/2025.
//

#include "Cola.h"

#include "Lista.h"

Cola::Cola() {
    longitud=0;
    cabeza=nullptr;
    cola=nullptr;
}

Cola::~Cola() {
    this->vaciar();
}

void Cola::encolar(DetalleComandada &comandada) {
    Nodo *nuevoNodo=new Nodo();
    nuevoNodo->dato=comandada;
    nuevoNodo->sig=nullptr;
    if (cabeza==nullptr) {
        cabeza=nuevoNodo;
        cola=cabeza;
    }else {
        cola->sig=nuevoNodo;
        cola=nuevoNodo;
    }
    longitud++;
}

DetalleComandada Cola::desencolar() {
    if (this->cabeza!=nullptr) {
        DetalleComandada desencolado=cabeza->dato;
        Nodo *nuevoNodo=cabeza;
        cabeza=cabeza->sig;
        nuevoNodo->sig=nullptr;
        delete nuevoNodo;
        longitud--;
        return desencolado;
        //  Lista lista;
        // lista.cabeza=this->cabeza;
        // Nodo *recorrido=lista.cabeza;
        // Nodo *anterior=nullptr;
        // while (recorrido->sig!=nullptr) {
        //     anterior=recorrido;
        //     recorrido=recorrido->sig;
        // }
        //
        // cola=anterior;
        // return desencolado;
    }
}

void Cola::lectura(ifstream &arch, char tipo, int id) {
    DetalleComandada comandada;
    comandada.setId(id);
    comandada.leer(arch,tipo);
    this->encolar(comandada);
}

void Cola::vaciar() {
    int contador=longitud;
    for (int i=0;i<contador;i++) {
        DetalleComandada local=desencolar();
    }
    cout<<"e";
}

void Cola::eliminarProteina(int i) {
    Lista listaNoProteinas;
    Lista listaProteinas;
    listaProteinas.cabeza=nullptr;
    listaNoProteinas.cabeza=nullptr;
    Nodo *recorrido=this->cabeza;
    int longitudNoeliminar=0,longitudEliminar=0,contador=0;
    while (recorrido!=nullptr) {
        if (recorrido->dato.verificar(i)) {
            listaProteinas.insert(recorrido->dato);
            longitudEliminar++;
        }else {
            listaNoProteinas.insert(recorrido->dato);
            longitudNoeliminar++;
        }
        recorrido=recorrido->sig;
        contador++;
        if (contador==18) {
            cout<<"t"<<endl;
        }
    }
    this->vaciar();
    recorrido=listaNoProteinas.cabeza;
    while (recorrido!=nullptr) {
        this->encolar(recorrido->dato);
        recorrido=recorrido->sig;
    }
    // for (int j=0;j<longitudNoeliminar;j++) {
    //     this->encolar(recorrido->dato);
    //     recorrido=recorrido->sig;
    // }
    recorrido=listaProteinas.cabeza;
    Nodo *eliminar;
    while (recorrido!=nullptr) {
        eliminar=recorrido;
        recorrido=recorrido->sig;
        delete eliminar;
    }
    cout<<"h";
}

void Cola::imprimir(ofstream &arch) {
    Lista lista;
    lista.cabeza=cabeza;
    Nodo *recorrido=lista.cabeza;
    while (recorrido!=nullptr) {
        recorrido->dato.imprimir(arch);
        recorrido=recorrido->sig;
    }
}
