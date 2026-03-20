//
// Created by enric on 12/11/2025.
//

#ifndef INC_2024_2_POLIMORFISMO_PRODUCTO_H
#define INC_2024_2_POLIMORFISMO_PRODUCTO_H

#include "Comunes.h"
class Producto {
private:
    char *nombre;
    double precio;
public:
    Producto();
    virtual ~Producto();
    virtual void leer(ifstream &arch);
    void copiar(const Producto &orig);
    virtual void operator =(const Producto &orig);
    virtual bool confirmar(int proteina)=0;

    virtual void imprimir(ofstream & arch);
};


#endif //INC_2024_2_POLIMORFISMO_PRODUCTO_H