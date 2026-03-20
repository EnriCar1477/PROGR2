//
// Created by gesuby on 05/11/2025.
//

#ifndef PREG1_LAB07_PRODUCTO_H
#define PREG1_LAB07_PRODUCTO_H


class Producto {
private:
    char *nombre;
    double precio;

public:
    Producto();
    ~Producto();

    void get_nombre(char *cad) const;
    void set_nombre(const char *cad);

    double get_precio() const;
    void set_precio(double precio);
};


#endif //PREG1_LAB07_PRODUCTO_H