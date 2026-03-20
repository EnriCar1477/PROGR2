/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   DetalleComanda.h
 * Author: alulab14
 *
 * Created on 22 de noviembre de 2024, 10:24 AM
 */

#ifndef DETALLECOMANDA_H
#define DETALLECOMANDA_H

#include "Producto.h"
#include <fstream>
using namespace std;

class DetalleComanda {
public:
    DetalleComanda();
    DetalleComanda(const DetalleComanda& orig);
    virtual ~DetalleComanda();
    void SetId(int id);
    int GetId() const;
    
    void imprimiendo(ofstream&);
    void generandoMemoria(char);
    void lecturaPolimorfica(ifstream&);
    void operator=(const DetalleComanda&);
    
    bool seElimina(int);
    

private:
    int id;
    Producto*pedido;
};

#endif /* DETALLECOMANDA_H */

