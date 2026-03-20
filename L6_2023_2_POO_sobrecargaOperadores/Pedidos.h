//
// Created by enric on 27/10/2025.
//

#ifndef L6_2023_2_POO_SOBRECARGAOPERADORES_PEDIDOS_H
#define L6_2023_2_POO_SOBRECARGAOPERADORES_PEDIDOS_H
#include <iosfwd>
#include <iostream>
#include "Comunes.h"
using namespace std;
class Pedidos {
private:
    char *codigo;
    int dni_cliente;
    double precio_producto;
public:
    Pedidos();
    Pedidos(char *codigo, int dni_cliente);
    void copia(const Pedidos &orig);
    void operator =(const Pedidos &orig);
    ~Pedidos();
    char * getCodigo()  const ;
    int getDni_cliente() const;
    void setPrecio_producto(double precio_producto);
    friend bool operator >>(std::ifstream &arch,Pedidos &pedidos);
};



#endif //L6_2023_2_POO_SOBRECARGAOPERADORES_PEDIDOS_H
