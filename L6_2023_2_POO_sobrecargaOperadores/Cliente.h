//
// Created by enric on 27/10/2025.
//

#ifndef L6_2023_2_POO_SOBRECARGAOPERADORES_CLIENTE_H
#define L6_2023_2_POO_SOBRECARGAOPERADORES_CLIENTE_H
#include <iostream>
#include <fstream>
#include "Pedidos.h"
#include "ProductoEntregado.h"

using namespace std;
class Cliente {
private:
    int dni;
    char *nombre;
    int telefono;
    ProductoEntregado productos_entregados[200];
    int cant_productos_entregados;
    double monto_total;
public:
    Cliente();
    ~Cliente();
    Cliente(int dni, char *nombre, int telefono);
    void copia(const Cliente& orig);
    void inicializar();
    bool operator ==(const Pedidos &orign) ;
    void operator =(const Cliente &orig);
    friend bool operator >>(ifstream &arch,Cliente &cliente);
};


#endif //L6_2023_2_POO_SOBRECARGAOPERADORES_CLIENTE_H