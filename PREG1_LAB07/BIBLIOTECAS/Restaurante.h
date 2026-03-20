//
// Created by gesuby on 05/11/2025.
//

#ifndef PREG1_LAB07_RESTAURANTE_H
#define PREG1_LAB07_RESTAURANTE_H

#include "Comanda.h"

class Restaurante {
private:
    class Comanda comandas[100];
    int cantidad_comandas;
public:
    Restaurante();
    virtual ~Restaurante();

    void cargar_comandas();
    bool buscarAtencion(int id_comanda,int cantidad_comandas);


    void actualizar_comandas();
    void imprimir_comandas();
};


#endif //PREG1_LAB07_RESTAURANTE_H