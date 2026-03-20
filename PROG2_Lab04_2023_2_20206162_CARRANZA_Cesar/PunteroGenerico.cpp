//
// Created by enric on 18/09/2025.
//
#include <iostream>
#include <cstring>
#include <fstream>
#define MAX 600
#define INCREM 5
#include "PunteroGenerico.h"
using namespace std;

void cargarProductos(void *&productos){
    ifstream arch("Productos2.csv",ios::in);
    if (not arch.is_open()) {
        cout<<"Error al abrir el archivo "<<endl;
        exit(10);
    }
    void **bufferProductos[MAX];
    int contador=0;
    char codigo[MAX],descripcion[MAX],c,tipoLinea,*punteroCodigo,*punteroDescripcion,*punteroLinea;
    double precio,*punteroPrecio;
    while (true) {
        arch.getline(codigo,8,',');
        if (arch.eof()) break;
        arch.getline(descripcion,MAX,',');
        arch>>precio>>c>>tipoLinea;
        arch.get();
        punteroCodigo=extraerCadena(codigo);
        punteroDescripcion=extraerCadena(descripcion);
        punteroPrecio=referenciaDouble(precio);
        punteroLinea=referenciaChar(tipoLinea);
        bufferProductos[contador]=new void *[4]{};
        void **temp=bufferProductos[contador];
        temp[0]=punteroCodigo;
        temp[1]=punteroDescripcion;
        temp[2]=punteroPrecio;
        temp[3]=punteroLinea;
        contador++;
    }
    bufferProductos[contador]=NULL;
    void **auxiliar=new void *[contador+1]{};
    for (int i=0;i<contador;i++) {
        auxiliar[i]=bufferProductos[i];
    }
    productos=auxiliar;
}
void cargarclientes(void *&clientes) {
    ifstream arch("Clientes2.csv",ios::in);
    if (not arch.is_open()) {
        cout<<"Error al abrir el archivo "<<endl;
        exit(10);
    }
    int dni,telefono,lineaDeCredito,contador=0,*punteroDNI,*punteroLinea;
    char nombre[MAX]{},*punteroNombre,c;
    void **bufferClientes[MAX]{};
    while (true) {
        arch>>dni;
        if (arch.eof()) break;
        arch.get();
        arch.getline(nombre,MAX,',');
        punteroNombre=extraerCadena(nombre);
        arch>>telefono>>c>>lineaDeCredito;
        punteroDNI=referenciaInt(dni);
        punteroLinea=referenciaInt(lineaDeCredito);
        bufferClientes[contador]=new void *[4]{};
        void **temp=bufferClientes[contador];
        temp[0]=punteroDNI;
        temp[1]=punteroNombre;
        temp[2]=nullptr;
        temp[3]=punteroLinea;
        contador++;
    }
    bufferClientes[contador]=nullptr;
    void **auxiliar=new void *[contador+1]{};
    for (int i=0;i<contador;i++) {
        auxiliar[i]=bufferClientes[i];
    }
    clientes=auxiliar;
}
void cargarpedidos(void *&productos,void *&clientes){
    ifstream arch("Pedidos2.csv",ios::in);
    if (not arch.is_open()) {
        cout<<"Error al abrir el archivo "<<endl;
        exit(10);
    }
    char codigo[8],c;
    int dni,cantidad,cantidaPedidos[MAX]{},capacidad[MAX]{};
    while (true) {
        arch.getline(codigo,8,',');
        if (arch.eof()) break;
        arch>>dni>>c>>cantidad;
        arch.get();
        int posicionClientes=buscarClientes(clientes,dni);
        int posicionProductos=buscarProductos(productos,codigo);
        ingresarPedidos(productos,clientes,posicionClientes,posicionProductos,
                        cantidaPedidos[posicionClientes],capacidad[posicionClientes],cantidad,codigo);
    }
    void **auxiliar=(void **)clientes;
    for (int i=0;auxiliar[i]!=nullptr;i++) {
        void **temp=(void **)auxiliar[i];
        void **elementos=(void **)temp[2];

        for (int j=0;elementos[j] != NULL;j++) {
             void **temp2=(void **)elementos[j];
             cout<<(char *)temp2[0]<<" "<<*(int *)temp2[1]<<" "<<*(double *)temp2[2]<<endl;
        }
    }
}
void ingresarPedidos(void *productos,void *&clientes,int posicionClientes,int posicionProductos,int &cantidaPedidos,
                        int &capacidad,int cantidad,char *codigo) {
    void **tempProductos=(void **)productos;
    void **tempCliente=(void **)clientes;
    void **auxiliar=(void **)tempCliente[posicionClientes];
    void **auxiliarProducto=(void **)tempProductos[posicionProductos];
    cantidaPedidos++;
    if (cantidaPedidos>=capacidad) incrementarEspacio(auxiliar[2],cantidaPedidos,capacidad);
    void** datosPedido=new void*[3]{};
    datosPedido[0]=extraerCadena(codigo);
    datosPedido[1]=referenciaInt(cantidad);
    datosPedido[2]=referenciaDouble(*(double *)auxiliarProducto[2]*cantidad);
    void **tem=(void **)auxiliar[2];
    tem[cantidaPedidos-1]=datosPedido;
    // tem[cantidaPedidos]=nullptr;
    auxiliar=tem;
}
int calcularCantidad(void *puntero) {
    int cantidad=0;
    void **temp=(void **)puntero;
    for (int i=0;temp[i]!=nullptr;i++) {
        cantidad++;
    }
    return cantidad;
}
void incrementarEspacio(void *&pedidos,int &cantidad,int &capacidad) {
    void **temp=(void **)pedidos;
    capacidad+=INCREM;
    if (pedidos==nullptr) {
        temp=new void *[capacidad]{};
        cantidad=1;
        pedidos=temp;
    }else {
         void **auxiliar=new void *[capacidad]{};
        for (int i=0;i<cantidad;i++) {
            auxiliar[i]=temp[i];
        }
        pedidos=auxiliar;
        delete [] temp;
    }
}
int buscarProductos(void *productos,char *codigo) {
    void **temp=(void **)productos;
    for (int i=0;temp[i]!=nullptr;i++) {
        void **auxiliar=(void **)temp[i];
        if (strcmp((char *)auxiliar[0],codigo)==0) return i;
    }
    return -1;
}
int buscarClientes(void *clientes,int dni) {
    void **temp=(void **)clientes;
    for (int i=0;temp[i]!=nullptr;i++) {
        void **auxiliar=(void **)temp[i];
        if (dni==*(int *)auxiliar[0]) return i;
    }
    return -1;
}
double *referenciaDouble(double variable) {
    double *referencia=new double;
    *referencia=variable;
    return referencia;
}
int *referenciaInt(int variable) {
    int *referencia=new int;
    *referencia=variable;
    return referencia;
}
char  *referenciaChar(char variable) {
    char *referencia=new char;
    *referencia=variable;
    return referencia;
}
char *extraerCadena(const char *cadena) {
    char *nuevaCadena=new char[strlen(cadena)+1];
    strcpy(nuevaCadena,cadena);
    return nuevaCadena;
}