/*
 * File: Entrada
 * Author: gaelarias
 * 
 * Created on: 10/11/25, 6:07 PM 
*/

#ifndef INC_2024_2_ENTRADA_H
#define INC_2024_2_ENTRADA_H

#include "Producto.h"

class Entrada : public Producto {
private:
    bool picante;
public:
    //CONSTRUCTORES
    Entrada();
    Entrada(const Entrada &og);
    ~Entrada();
    void operator = (const Entrada &og);
    //SELECTORES
    bool is_picante() const;

    void set_picante(bool picante);

    //METODOS
    istream& leer(istream &in);
    ostream& imprimir(ostream &out) const;
    Producto* clona();
    bool eliminable(int prote);
};


#endif //INC_2024_2_ENTRADA_H