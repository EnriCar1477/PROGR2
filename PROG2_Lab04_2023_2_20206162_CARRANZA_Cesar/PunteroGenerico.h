//
// Created by enric on 18/09/2025.
//

#ifndef PROG2_LAB04_2023_2_20206162_CARRANZA_CESAR_PUNTEROGENERICO_H
#define PROG2_LAB04_2023_2_20206162_CARRANZA_CESAR_PUNTEROGENERICO_H
void cargarProductos(void *&productos);
char *extraerCadena(const char *cadena);
int *referenciaInt(int variable) ;
double *referenciaDouble(double variable) ;
void cargarclientes(void *&clientes);
void cargarpedidos(void *&productos,void *&clientes);
int buscarClientes(void *clientes,int dni) ;
int buscarProductos(void *productos,char *codigo);
char  *referenciaChar(char variable) ;
void incrementarEspacio(void *&pedidos,int &cantidad,int &capacidad);
int calcularCantidad(void *puntero) ;
void ingresarPedidos(void *productos,void *&clientes,int posicionClientes,int posicionProductos,int &cantidaPedidos,
                        int &capacidad,int cantidad,char *codigo) ;
#endif //PROG2_LAB04_2023_2_20206162_CARRANZA_CESAR_PUNTEROGENERICO_H