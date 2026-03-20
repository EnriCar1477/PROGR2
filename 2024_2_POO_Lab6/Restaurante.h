//
// Created by enric on 28/10/2025.
//

#ifndef INC_2024_2_POO_LAB6_RESTAURANTE_H
#define INC_2024_2_POO_LAB6_RESTAURANTE_H

#include <iostream>
#include "Cliente.h"
#include "Comunes.h"
#include "Plato.h"
using namespace std;
class Restaurante {
private:
    Cliente *clientes;
    int cantidadClientes;
    int capacidadClientes;
    Plato *platos;
    int cantidadPlatos;
    int capacidadPlatos;
public:
    Restaurante();
    ~Restaurante();
    friend void operator <(Restaurante &restaurante,const char *nomArch);
    friend void operator <=(Restaurante &restaurante,const char *nomArch);
    friend void operator <<=(Restaurante & restaurante,const char *nomArch);
    void incrementarEspacioClientes();
    void incrementarEspacioPlatos();
    int buscarCliente(int dni);
    int buscarPlato(char *codPlato);
    void ingresarCliente(Cliente &cliente);
    void ingresarPlato(Plato &plato);
    void imprimirPlatos(ofstream &arch);
    void imprimirClientes(ofstream &arch);
    friend void operator >>(Restaurante &restaurante,const char *nomArch);

};


#endif //INC_2024_2_POO_LAB6_RESTAURANTE_H