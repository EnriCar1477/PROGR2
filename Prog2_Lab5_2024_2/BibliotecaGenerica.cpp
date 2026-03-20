//
// Created by enric on 23/09/2025.
//
#include <iostream>
#include <fstream>
#include <iomanip>
#include "BibliotecaGenerica.h"
#include "ListaconEnteros.h"
using namespace std;
void crearlista(void *&lista,void *(*funcion_lectura)(ifstream &arch),
                        const char *nombre_archivo) {
    ifstream archivo(nombre_archivo,ios::in);
    if (!archivo) {
        cout<<"Error al abrir el archivo "<<nombre_archivo<<endl;
        exit(1);
    }
    lista=nullptr;
    while (true) {
        void *datos_dupa=funcion_lectura(archivo);
        if (archivo.eof()) break;
        insertarFinal(lista,datos_dupa);
    }
}
void cargarlista(void *&lista,bool (*funcion_comparar)(void * a,void *b),
                void *(*funcion_lectura)(ifstream &arch),const char *nombre_archivo) {
    ifstream archivo(nombre_archivo,ios::in);
    if (!archivo) {
        cout<<"Error al abrir el archivo "<<nombre_archivo<<endl;
        exit(1);
    }
    while (true) {
        void *datosArreglo=funcion_lectura(archivo);
        if (archivo.eof()) break;
        void **nodos=(void **)lista;
        void **nodo=(void **)nodos[0];
        // void **valores=(void **)datosArreglo;
        // void **informacion=(void **)valores[1];
        // cout<<*(int *)informacion[0]<<"  "<<*(int *)informacion[1]<<setw(5)<<" "<<(char *)informacion[2]<<endl;
        while (nodo!=nullptr) {
            if (funcion_comparar(nodo[0],datosArreglo)) {
                void **dupla=(void **)nodo[0];
                void **arregloDupla=(void **)dupla[1];
                for (int i=0;i<20;i++) {
                    if (arregloDupla[i]==nullptr) {
                        void **valores=(void **)datosArreglo;
                        arregloDupla[i]=valores[1];
                        break;
                    }
                }

            }
            nodo=(void **)nodo[1];
        }
    }
}
void muestralista(void *lista,void (*funcion_imprimir)(ofstream &archivo,void *nodo),
                const char *nombre_archivo) {
    ofstream archivo (nombre_archivo,ios::out);
    if (!archivo) {
        cout<<"Error al abrir el archivo "<<nombre_archivo<<endl;
        exit(1);
    }
    void **nodos=(void **)lista;
    void **nodo=(void **)nodos[0];
    while (nodo!=nullptr) {
        funcion_imprimir(archivo,nodo[0]);
        nodo=(void **)nodo[1];
    }
}
void insertarFinal(void *&lista,void *datos_dupa) {
    void **nodo=new void *[2];
    void **espacioDupla=new void *[2]{};
    espacioDupla[0]=datos_dupa;
    void **arreglo=new void *[20]{};
    espacioDupla[1]=arreglo;
    nodo[0]=espacioDupla;
    nodo[1]=nullptr;
    void **listaAux;
    if (eslistavacia(lista)) {
        listaAux=new void *[3]{};
        listaAux[0]=nodo;
        listaAux[1]=nodo;
        listaAux[2]=new int;
        *(int *)listaAux[2]=1;
        lista=listaAux;
    }else {
        listaAux=(void **)lista;
        void **ultimoNodo=(void **)listaAux[1];
        ultimoNodo[1]=nodo;
        listaAux[1]=nodo;
        *(int *)listaAux[2]+=1;
    }
}
bool eslistavacia(void *lista) {
    return lista==nullptr;
}