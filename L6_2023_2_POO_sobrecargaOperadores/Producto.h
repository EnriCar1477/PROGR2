//
// Created by enric on 27/10/2025.
//

#ifndef L6_2023_2_POO_SOBRECARGAOPERADORES_PRODUCTO_H
#define L6_2023_2_POO_SOBRECARGAOPERADORES_PRODUCTO_H
#include <iostream>
#include <fstream>
#include "Comunes.h"
#include "Pedidos.h"
#include "Cliente.h"
using namespace std;
class Producto {
private:
    char *codigo;
    char *descripcion;
    double precio;
    int stock;
    int clientes_servidos[200];
    int clientes_no_servidos[200];
    int cant_clientes_servidos;
    int canti_clientes_no_servidos;
public:
    Producto();
    ~Producto();
    Producto(char *codigo,char *descripcion,int precio,int stock);
    void operator=(const Producto &orig);
    bool operator==(const Pedidos &pedido);
    void copia(const Producto& orig);
    bool operator+=(const Pedidos &orig);
    double getPrecio();
    friend bool operator>>(std::ifstream &arch,Producto &producto);

};


#endif //L6_2023_2_POO_SOBRECARGAOPERADORES_PRODUCTO_H