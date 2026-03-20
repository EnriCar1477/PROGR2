//
// Created by enric on 19/11/2025.
//

#ifndef INC_2024_1_POLIMORFISMO_AUTOREFERENCIA_ESTANTE_H
#define INC_2024_1_POLIMORFISMO_AUTOREFERENCIA_ESTANTE_H

#include "Lista.h"
class Estante {
private:
    char clase;
    int id;
    double capacidad;
    Lista Llibros;
public:
    Estante();
    void setId(int id);
    void setCapacidad(double capacidad);
    void setClase(char clase);
    int getId();
    double getCapacidad();
    void insertar(Libro * libro);

    bool verificar(Libro * libro);

    void imprimirList(ofstream & arch);

    void imprimir(ofstream & arch);

    void bajar();
};


#endif //INC_2024_1_POLIMORFISMO_AUTOREFERENCIA_ESTANTE_H