//
// Created by enric on 14/09/2025.
//
#include <iostream>
#include "Tablas.h"
#define INCREM_COLUM 2
#define INCREM_FILA 5
#include <cstring>
#include <fstream>
using namespace std;
void inicializar_tabla(Tablas &tabla) {
    tabla.filas=NULL;
    tabla.columnas=NULL;
    tabla.cantidad_columnas=0;
    tabla.cantidad_filas=0;
    tabla.capacidad_columnas= 0;
    tabla.capacidad_filas = 0;
}
void insertar_columna(Tablas &tabla,const char *tipo) {
    char *nuevo_tipo=extraerCadena(tipo);
    tabla.cantidad_columnas++;
    if (tabla.cantidad_columnas>=tabla.capacidad_columnas) incrementarColumnas(tabla.columnas,tabla.cantidad_columnas,
                                                                                tabla.capacidad_columnas);
    void **columnas=(void **)tabla.columnas;
    columnas[tabla.cantidad_columnas-1]=nuevo_tipo;

}
// void insertar_fila(Tablas &tabla) {
//     tabla.cantidad_filas++;
//     if (tabla.cantidad_filas>=tabla.capacidad_filas) incrementarFila(tabla.filas,tabla.cantidad_filas,tabla.capacidad_filas);
//     void **fila=(void **)tabla.filas;
//     // void **nuevaFila=new void *[tabla.cantidad_columnas]{};
//     fila[tabla.cantidad_filas-1]=new void *[tabla.cantidad_columnas]{};
// }
// void incrementarFila(void *&fila,int &cantidad,int &capacidad) {
//     capacidad+=INCREM_FILA;
//     void **filaAux=(void **)fila;
//     if (fila==nullptr) {
//         fila=new void *[capacidad]{};
//         cantidad=1;
//     }else {
//         void **aux=new void *[capacidad];
//         for (int i=0;i<cantidad;i++) {
//             aux[i]=filaAux[i];
//         }
//         fila=aux;
//         delete [] filaAux;
//     }
// }
void insertar_fila(Tablas &tabla) {
    tabla.cantidad_filas++;
    if (tabla.cantidad_filas>=tabla.capacidad_filas) incrementarFila(tabla.filas,tabla.cantidad_filas,tabla.capacidad_filas);
    void ***fila=(void ***)tabla.filas;
    // void **nuevaFila=new void *[tabla.cantidad_columnas]{};
    fila[tabla.cantidad_filas-1]=new void *[tabla.cantidad_columnas]{};
}
void incrementarFila(void *&fila,int &cantidad,int &capacidad) {
    capacidad+=INCREM_FILA;
    void ***filaAux=(void ***)fila;
    if (fila==nullptr) {
        fila=new void **[capacidad]{};
        cantidad=1;
    }else {
        void ***aux=new void **[capacidad];
        for (int i=0;i<cantidad;i++) {
            aux[i]=filaAux[i];
        }
        fila=aux;
        delete [] filaAux;
    }
}
void leerInfracciones(const char *nomArch,Tablas &tabla) {
    ifstream archivo(nomArch,ios::in);
    if (not archivo.is_open()) {
        cout<<"Error al abrir el archivo "<<nomArch<<endl;
        exit(10);
    }
    int *codigo=new int;
    char* descripcion,*tipo;
    char bufferDescripcion[200]{},bufferTipo[200]{};
    double *valor=new double;
    while (true) {
        archivo>>*codigo;
        if (archivo.eof()) break;
        archivo.get();
        archivo.getline(bufferDescripcion,200,';');
        archivo.getline(bufferTipo,200,';');
        descripcion=extraerCadena(bufferDescripcion);
        tipo=extraerCadena(bufferTipo);
        archivo>>*valor;
        insertar_fila(tabla);
        void ***boqueFila=(void ***)tabla.filas;
        void **fila=boqueFila[tabla.cantidad_filas-1];
        insertarCampo(tabla,fila,1,codigo);
        insertarCampo(tabla,fila,2,descripcion);
        insertarCampo(tabla,fila,3,tipo);
        insertarCampo(tabla,fila,4,valor);

    }
}
void insertarCampo(Tablas tabla,void **&fila,int numeroCampo,void *dato) {
    void **auxcolumnas=(void **)tabla.columnas;
    if (strcmp((char *)auxcolumnas[numeroCampo-1],"INT")==0) {
        fila[numeroCampo-1]=retornar_referencia_entero(*(int *)dato);
    }else if (strcmp((char *)auxcolumnas[numeroCampo-1],"VARCHAR")==0) {
        fila[numeroCampo-1]=dato;
    }else {
        fila[numeroCampo-1]=retornar_referencia_real(*(double *)dato);
    }
}

void incrementarColumnas(void *&columna,int &cantidad,int &capacidad) {
    capacidad+=INCREM_COLUM;
    void **columnaAux=(void **)columna;
    if (columna==nullptr) {
        columna=new void*[capacidad]{};
        cantidad=1;
    }else {;
        void **aux=new void*[capacidad]{};
        for (int i=0;i<cantidad;i++) {
            aux[i]=columnaAux[i];
        }
        columna=aux;
        delete []columnaAux;

    }
}
// void *abrir_cursor(Tablas tabla) {
//     if (tabla.cantidad_filas == 0)
//         return nullptr;
//     return tabla.filas;
// }
//
bool hay_siguiente(void *&cursor) {
    static bool primera_llamada = true;
    if (cursor == nullptr)
        return false;
    void ***bloque_filas = (void***)cursor;
    if (primera_llamada) {
        primera_llamada = false;
    } else {
        bloque_filas++;
    }
    cursor = bloque_filas;
    if (*bloque_filas == nullptr)
        return false;
    return true;
}

void *obtener_campo(void *cursor, int num_campo) {
    void ***bloque_filas = (void***)cursor;
    void **bloque_fila = *bloque_filas;
    return bloque_fila[num_campo-1];
}
// bool hay_siguiente(void *&cursor) {
//     if (cursor==nullptr) return false;
//     void **bloque=(void **)cursor;
//     if (bloque++==nullptr) return false;
//     else {
//         cursor=bloque;
//         return true;
//     }
// }
// void *obtener_campo(void *cursor,int numeroCcampo) {
//     void **fila=(void **)cursor;
//     return fila[numeroCcampo-1];
// }
void *abrir_cursor(Tablas tabla) {
    if (tabla.cantidad_filas>=1) return tabla.filas;
    return nullptr;

}
char *extraerCadena(const char* cadena) {
    char *nuevaCadena=new char[strlen(cadena)+1];
    strcpy(nuevaCadena,cadena);
    return nuevaCadena;
}
void *retornar_referencia_entero(int e) {
    int *ptrE = new int;
    *ptrE = e;
    return ptrE;
}

void *retornar_referencia_real(double r) {
    double *ptrR = new double;
    *ptrR = r;
    return ptrR;
}
