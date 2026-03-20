//
// Created by enric on 27/10/2025.
//

#ifndef L6_2023_2_POO_SOBRECARGAOPERADORES_ALMACEN_H
#define L6_2023_2_POO_SOBRECARGAOPERADORES_ALMACEN_H
#include "Cliente.h"
#include "Producto.h"

class Almacen {
private:
    Cliente arreglo_clientes[200];
    int cantidad_clientes;
    Producto arreglo_productos[200];
    int cantidad_productos;
public:
    Almacen();
    void cargar_clientes();
    void cargar_productos();
    void cargar_pedidos();

};


#endif //L6_2023_2_POO_SOBRECARGAOPERADORES_ALMACEN_H