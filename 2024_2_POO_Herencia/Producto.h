//
// Created by enric on 4/11/2025.
//

#ifndef INC_2024_2_POO_HERENCIA_PRODUCTO_H
#define INC_2024_2_POO_HERENCIA_PRODUCTO_H

#include <iostream>
class Producto {
private:
    char *nombre;
    double precio;
public:
    Producto();
    ~Producto();
    void setNombre(char *nombre);
    void setPrecio(double precio);
    double getPrecio();
    char *getNombre();
};


#endif //INC_2024_2_POO_HERENCIA_PRODUCTO_H