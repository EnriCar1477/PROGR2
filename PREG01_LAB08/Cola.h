/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Cola.h
 * Author: alulab14
 *
 * Created on 22 de noviembre de 2024, 10:27 AM
 */

#ifndef COLA_H
#define COLA_H
#include <fstream>
using namespace std;
#include "Nodo.h"


class Cola {
public:
    Cola();
    Cola(const Cola& orig);
    virtual ~Cola();
    
    void leyendoComanda(ifstream&);
    void encola(DetalleComanda&);
    
    bool esColaVacia();
    void setLongitud(int longitud);
    int getLongitud() const;
    DetalleComanda desencola();
    
    void imprimiendo(ofstream&);
    void actualizando(int);
private:
    int longitud;
    Nodo*cabeza;
    Nodo*cola;
};

#endif /* COLA_H */

