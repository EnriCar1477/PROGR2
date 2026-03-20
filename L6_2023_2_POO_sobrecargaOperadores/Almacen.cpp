//
// Created by enric on 27/10/2025.
//
#include <iostream>
#include <fstream>
#include "Almacen.h"
#include "Comunes.h"
#include "Pedidos.h"
#include "Cliente.h"
#include "Producto.h"

using namespace std;
Almacen::Almacen() {
    this->cantidad_clientes=0;
    this->cantidad_productos=0;
}
void Almacen::cargar_clientes() {
    ifstream arch;
    abrirArchivoIfstream(arch,"Clientes.csv");
    while (arch>>this->arreglo_clientes[this->cantidad_clientes]) this->cantidad_clientes++;
}

void Almacen::cargar_productos() {
    ifstream arch;
    abrirArchivoIfstream(arch,"Productos.csv");
    while (arch>>this->arreglo_productos[this->cantidad_productos]) this->cantidad_productos++;
}

void Almacen::cargar_pedidos() {
    ifstream arch;
    abrirArchivoIfstream(arch,"Pedidos.csv");
    Pedidos pedidos;
    int dni,posCliente,posProducto;
    char *codigo;
    while (arch>>pedidos) {
        for (int i=0;i<this->cantidad_productos;i++) {
            if (this->arreglo_productos[i]==pedidos) {
                if (this->arreglo_productos[i]+=pedidos) {
                    // for (int i=0;i<this->cantidad_clientes;i++) {
                    //     if (this->arreglo_clientes[i]==pedidos) {
                    //         this->arreglo_clientes[i]+=pedidos;
                    //     }
                    // }
                }
                break;
            }
        }
    }
}