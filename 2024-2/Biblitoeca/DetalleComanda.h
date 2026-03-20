/*
 * File: DetalleComanda
 * Author: gaelarias
 * 
 * Created on: 10/11/25, 6:19 PM 
*/

#ifndef INC_2024_2_DETALLECOMANDA_H
#define INC_2024_2_DETALLECOMANDA_H

#include "Producto.h"

class DetalleComanda {
private:
    int id;
    Producto *pedido;
public:
    //CONSTRUCTORES
    DetalleComanda();
    DetalleComanda(const DetalleComanda &og);
    ~DetalleComanda();
    void operator = (const DetalleComanda &og);
    //SELECTORES
    int get_id() const;
    void set_id(int id);
    void get_pedido(Producto *&pedido) const;
    void set_pedido(Producto *pedido);
    //METODOS
    istream & leer(istream &in);
    ostream & imprimir(ostream &out) const;
    bool eliminable(int prote);

};


#endif //INC_2024_2_DETALLECOMANDA_H