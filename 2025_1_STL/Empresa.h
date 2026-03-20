//
// Created by enric on 27/11/2025.
//

#ifndef INC_2025_1_STL_EMPRESA_H
#define INC_2025_1_STL_EMPRESA_H
#include <map>
#include <vector>
#include "Vehiculos.h"
#include "Multa.h"
class Empresa {
private:
    int dni;
    char *nombre;
    char *distrito ;
    map<char *,class Vehiculos> vehiculos;
    vector<class Multa> multasRecibidas;
public:
    Empresa();
    ~Empresa();
    int getDNI();
    char *getNombre();
    char *getDistrito();
    void setDNI(int dni);
    void setNombre(char *nombre);
    void setDistrito(char *distrito);
};


#endif //INC_2025_1_STL_EMPRESA_H