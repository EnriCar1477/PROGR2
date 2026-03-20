/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Producto.h
 * Author: alulab14
 *
 * Created on 22 de noviembre de 2024, 10:14 AM
 */

#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <fstream>
using namespace std;
class Producto {
public:
    Producto();
    Producto(const Producto& orig);
    virtual ~Producto();
    void SetPrecio(double precio);
    double GetPrecio() const;
    
    void SetNombre(char*);
    void GetNombre(char*)const;
    
    virtual void lee(ifstream&);
    virtual void imprime(ofstream&);
    virtual bool elimina(int)=0;
private:
    char*nombre;
    double precio;
};

#endif /* PRODUCTO_H */

