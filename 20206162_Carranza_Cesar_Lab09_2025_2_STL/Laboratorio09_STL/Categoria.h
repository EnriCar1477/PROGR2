//
// Created by alulab14 on 28/11/2025.
//

#ifndef LABORATORIO09_STL_CATEGORIA_H
#define LABORATORIO09_STL_CATEGORIA_H

#include "Comunes.h"
class Categoria {
private:
    string codigo;
    string nombre;
    string descripcion;
public:
    Categoria();
    ~Categoria();
    Categoria(const Categoria &orig);
    string getCodigo();
    string getNombre();
    string getDescripcion();
    void setCodigo(const string codigo);
    void setNombre(const string nombre);
    void setDescripcion(const string descripcion);
    void operator=(const Categoria &orig);
    void operator >>(ifstream &arch);

};


#endif //LABORATORIO09_STL_CATEGORIA_H