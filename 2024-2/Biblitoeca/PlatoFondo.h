/*
 * File: PlatoFondo
 * Author: gaelarias
 * 
 * Created on: 10/11/25, 6:14 PM 
*/

#ifndef INC_2024_2_PLATOFONDO_H
#define INC_2024_2_PLATOFONDO_H

#include "Producto.h"

class PlatoFondo : public Producto {
private:
    int proteina;
public:
    //CONSTRUCTORES
    PlatoFondo();
    PlatoFondo(const PlatoFondo &og);
    ~PlatoFondo();
    void operator = (const PlatoFondo &og);
    //SELECTORES
    int get_proteina() const;

    void set_proteina(int proteina);

    //METODOS
    istream& leer(istream &in);
    ostream& imprimir(ostream &out) const;
    Producto* clona();
    bool eliminable(int prote);
};


#endif //INC_2024_2_PLATOFONDO_H