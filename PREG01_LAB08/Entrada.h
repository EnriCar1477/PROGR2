/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Entrada.h
 * Author: alulab14
 *
 * Created on 22 de noviembre de 2024, 10:21 AM
 */

#ifndef ENTRADA_H
#define ENTRADA_H
#include <fstream>
using namespace std;
#include "Producto.h"


class Entrada:public Producto {
public:
    Entrada();
    Entrada(const Entrada& orig);
    virtual ~Entrada();
    void SetPicante(bool picante);
    bool IsPicante() const;
    
    void lee(ifstream&);
    void imprime(ofstream&);
    bool elimina(int);
private:
    bool picante;
};

#endif /* ENTRADA_H */

