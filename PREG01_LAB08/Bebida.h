/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Bebida.h
 * Author: alulab14
 *
 * Created on 22 de noviembre de 2024, 10:17 AM
 */

#ifndef BEBIDA_H
#define BEBIDA_H
#include <fstream>

#include "Producto.h"
using namespace std;
class Bebida :public Producto{
public:
    Bebida();
    Bebida(const Bebida& orig);
    virtual ~Bebida();
    
    void SetTamano(char*);
    void GetTamano(char*)const;
    
    void lee(ifstream&);
    void imprime(ofstream&);
    bool elimina(int);
    
private:
    
    char*tamano;
    
};

#endif /* BEBIDA_H */

