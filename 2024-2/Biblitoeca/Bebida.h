/*
 * File: Entrada
 * Author: gaelarias
 * 
 * Created on: 10/11/25, 5:59 PM 
*/

#ifndef INC_2024_2_BEBIDA_H
#define INC_2024_2_BEBIDA_H

#include "Producto.h"

class Bebida : public Producto{
private:
    char *tamano;
public:
    //CONSTRUCTORES
    Bebida();
    Bebida(const Bebida &og);
    ~Bebida();
    void operator = (const Bebida &og);
    //SELECTORES
    void get_tamano(char *tamano) const;
    void set_tamano(const char *tamano);
    //METODOS
    istream& leer(istream &in);
    ostream& imprimir(ostream &out) const;
    Producto* clona();
    bool eliminable(int prote);
};


#endif //INC_2024_2_BEBIDA_H