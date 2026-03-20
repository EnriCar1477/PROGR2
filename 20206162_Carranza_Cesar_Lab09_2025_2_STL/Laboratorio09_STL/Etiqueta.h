//
// Created by alulab14 on 28/11/2025.
//

#ifndef LABORATORIO09_STL_ETIQUETA_H
#define LABORATORIO09_STL_ETIQUETA_H

#include "Comunes.h"
class Etiqueta {
private:
    string codigo;
    string nombre;
public:
    Etiqueta();
    ~Etiqueta();
    Etiqueta(const Etiqueta &orig);
    string getCodigo();
    string getNombre();
    void setCodigo(const string cadena);
    void setNombre(const string cadena);
    void operator=(const Etiqueta &orig);
    friend void operator<<(ostream &os, const Etiqueta &orig);
    // friend istream &operator>>(istream &is, Etiqueta &orig);
    void operator >>(ifstream &arch);

};


#endif //LABORATORIO09_STL_ETIQUETA_H