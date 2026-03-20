//
// Created by enric on 17/09/2025.
//
#include <iostream>
#include <fstream>
#include <string.h>
#include "cafeteria.h"
#define INCREM 5
using namespace std;
void cargarInventario(const char *nomArch,void *&inventario) {
    ifstream arch(nomArch,ios::in);
    if (not arch.is_open()) {
        cout << "Error al abrir el archivo " << nomArch << endl;
        exit(10);
    }
    char codigo[5],nombre[100],unidad[3],*punteroCodigo,*punteroNombre,*punteroUnidad;
    double cantidad;
    int contador=0,capacidad=0;
    inventario=nullptr;
    while (true) {
        arch.getline(codigo,5,',');
        if (arch.eof()) break;
        punteroCodigo=extraerCadena(codigo);
        arch.getline(nombre,100,',');
        arch>>cantidad;
        arch.get();
        arch.getline(unidad,3,'\n');
        punteroNombre=extraerCadena(nombre);
        punteroUnidad=extraerCadena(unidad);
        contador++;
        if (contador>=capacidad) incrementarEspacios(inventario,contador,capacidad);
        void**estrutura=(void**)inventario;
        estrutura[contador-1]=new void *[5];
        ingresarDatosInventario(estrutura[contador-1],punteroCodigo,punteroNombre,punteroUnidad,cantidad);

    }
}
void cargarMenu(const char *nomArch,void *&menu) {
    ifstream arch(nomArch,ios::in);
    if (not arch.is_open()) {
        cout << "Error al abrir el archivo " << nomArch << endl;
        exit(10);
    }
    int contador=0;
    char *punteroNombre,*punteroDescripcion,c,*punteroCodigo,* tipoBebida,tipo,codigo[5],nombre[100],descripcion[200];
    double *punteroPrecio,precio;
    int *punteroCantidad,cantidad,capacidad=0;
    menu=nullptr;
    while (true) {
        arch.getline(codigo,5,',');
        if (arch.eof()) break;
        punteroCodigo=extraerCadena(codigo);
        arch.getline(nombre,100,',');
        punteroNombre=extraerCadena(nombre);
        arch.getline(descripcion,200,',');
        punteroDescripcion=extraerCadena(descripcion);
        arch>>tipo>>c>>precio>>c>>cantidad;
        arch.get();
        contador++;
        if (contador>=capacidad) incrementarEspacios(menu,contador,capacidad);
        void**estrutura=(void**)menu;
        estrutura[contador-1]=new void *[8];
        ingresarDatosMenu(estrutura[contador-1],punteroCodigo,punteroNombre,punteroDescripcion,tipo,cantidad,precio);
    }
}
void ingresarDatosMenu(void *arreglo,char *punteroCodigo,char *punteroNombre,char *punteroDescripcion,char tipo,
                        int cantidad,double precio) {
    void **elementos=(void**)arreglo;
    elementos[0]=punteroCodigo;
    elementos[1]=punteroNombre;
    elementos[2]=punteroDescripcion;
    char *bebida=new char;
    *bebida=tipo;
    elementos[3]=bebida;
    bool *disponible=new bool;
    *disponible=true;;
    elementos[4]=disponible;
    double *punteroPrecio=new double;
    *punteroPrecio=precio;
    elementos[5]=punteroPrecio;
    elementos[6]=referenciaInt(cantidad);
    elementos[7]=nullptr;
}
void actualizarMenu(const char *nomArch,void *inventario,void *menu) {
    ifstream arch(nomArch,ios::in);
    if (not arch.is_open()) {
        cout << "Error al abrir el archivo " << nomArch << endl;
        exit(10);
    }
    char codigoMenu[5],codigoInsumo[5],c,*codigoAnterior=nullptr;
    int cantidad,contador=0,capacidad=0;
    while (true) {
        arch.getline(codigoMenu,5,',');
        if (arch.eof()) break;
        if (codigoAnterior==nullptr) {
            codigoAnterior=new char[5];
            strcpy(codigoAnterior,codigoMenu);
        }else if (strcmp(codigoAnterior,codigoMenu)!=0){
            strcpy(codigoAnterior,codigoMenu);
            contador=0;
            capacidad=0;
        }
        arch.getline(codigoInsumo,5,',');
        arch>>cantidad>>c>>c;
        arch.get();
        int posicionMenu=buscar(codigoMenu,menu);
        int posicionInsumo=buscar(codigoInsumo,inventario);
        void **tempMenu=(void**)menu;
        void **tempInven=(void **)inventario;
        void **elementoInventario=(void**)tempInven[posicionInsumo];
        void **elementosMenu=(void**)tempMenu[posicionMenu];
        contador++;
        if (contador>=capacidad) incrementarEspacios(elementosMenu[7],contador,capacidad);
        void ***elementosInsumos=(void ***)elementosMenu[7];
        elementosInsumos[contador-1]=new void *[3];
        void **propiedadesElementosInsumos=elementosInsumos[contador-1];
        propiedadesElementosInsumos[0]=elementoInventario;
        propiedadesElementosInsumos[1]=referenciaInt(cantidad);
        propiedadesElementosInsumos[2]=&c;
        *(double*)elementoInventario[3]+=(double)(*(int *)elementosMenu[6]*cantidad);
        // elementosInsumos++;
        // elementosInsumos[7]=*elementosInsumos;
        if (*(double*)elementoInventario[3]>=*(double*)elementoInventario[2]) {
            bool *cambio=new bool;
            *cambio=false;
            elementosMenu[4]=cambio;
        }
    }
}
void reporteMenu(const char *nomArch,void *menu) {
    ofstream arch(nomArch,ios::out);
    if (not arch.is_open()) {
        cout << "Error al abrir el archivo " << nomArch << endl;
        exit(10);
    }
    void **tempMenu=(void**)menu;
    for (int i=0;tempMenu[i]!=nullptr;i++) {
        void **elementos=(void **)tempMenu[i];
        arch<<(char *)elementos[0]<<"  " <<(char *)elementos[1]<<(char *)elementos[2]<<
                (char *)elementos[3]<<(char *)elementos[4]<<*(bool*)elementos[5]<<*(double *)elementos[6]<<endl;
    }
}
int buscar(char *codigo,void *arreglo) {
    void**temp=(void **)arreglo;
    for (int i=0;temp[i]!=nullptr;i++) {
        void**elementos=(void**)temp[i];
        if (strcmp(codigo,(char *)elementos[0])==0) return i;
    }
    return -1;
}
void ingresarDatosInventario(void *item,char *punteroCodigo,char *punteroNombre,char *punteroUnidad,double cantidad) {
    void **elementos=(void **)item;
    double *puntero=new double;
    *puntero=cantidad;
    double *punteroOtro=new double;
    *punteroOtro=0;
    elementos[0]=punteroCodigo;
    elementos[1]=punteroNombre;
    elementos[2]=puntero;
    elementos[3]=punteroOtro;
    elementos[4]=punteroUnidad;
}
void incrementarEspacios(void *&inventario,int &contador,int &capacidad) {
    capacidad+=INCREM;
    void **auxiliar=(void **)inventario;
    if(inventario==nullptr) {
        auxiliar=new void *[capacidad]{};
        inventario=auxiliar;
        contador=1;
    }else {
        void **nuevoVoid=new void *[capacidad]{};
        for (int i=0;i<contador;i++) {
            nuevoVoid[i]=auxiliar[i];
        }
        delete[] auxiliar;
        inventario=nuevoVoid;

    }
}
int *referenciaInt(int variable) {
    int *puntero=new int;
    *puntero=variable;
    return puntero;
}
char* extraerCadena(const char *cadena) {
    char *nuevaCadena=new char[strlen(cadena)+1];
    strcpy(nuevaCadena,cadena);
    return nuevaCadena;
}