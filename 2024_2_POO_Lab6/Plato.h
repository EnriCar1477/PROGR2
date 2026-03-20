//
// Created by enric on 28/10/2025.
//

#ifndef INC_2024_2_POO_LAB6_PLATOS_H
#define INC_2024_2_POO_LAB6_PLATOS_H
#include <iostream>
#include "Plato.h"
using namespace std;
class Plato {
public:
    char *codigo;
    char *nombre;
    double precio;
    char *categoria;
    int preparados;
    double descuento;
    int atendidos;
    int noAtendidos;
    double totalEsperado;
    double totalBruto;
    double totalNeto;
public:
    Plato();
    Plato(char *codigo,char *nombre,double precio,char *categorias,int preparados,double descuento);
    ~Plato();
    void copiaPlatos(const Plato &orig);
    void *setCodigo(char *codigo);
    void *setNombre(char *nombre);
    void *setCategoria(char *categoria);
    void setPreparados(int preparados);
    void setDescuento(double descuento);
    void setAtendidos(int atendidos);
    void setNoAtendidos(int noAtendidos);
    void setTotalEsperado(double totalEsperado);
    void setTotalBruto(double totalBruto);
    void setTotalNeto(double totalNeto);
    void setPrecio(double precio);
    char *getCodigo();
    char* getNombre();
    char* getCategoria();
    int getPreparados();
    double getDescuento();
    int getAtendidos();
    int getNoAtendidos();
    double getTotalEsperado();
    double getTotalBruto();
    double getTotalNeto();
    double getPrecio();
    void LiberarEspacio();
    void operator =(const Plato &orig);
    friend void operator>>(ifstream &arch,Plato &plato);
    void actualizarTotales(int cant,int actual);
    friend void operator <<(ofstream &arch,Plato &plato);
};


#endif //INC_2024_2_POO_LAB6_PLATOS_H