/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Nodo.h
 * Author: alulab14
 *
 * Created on 22 de noviembre de 2024, 10:25 AM
 */

#ifndef NODO_H
#define NODO_H
#include <fstream>
using namespace std;
#include "DetalleComanda.h"


class Nodo {
public:
    Nodo();
    Nodo(const Nodo& orig);
    virtual ~Nodo();
    friend class Cola;
private:
    DetalleComanda dato;
    Nodo*sig;   
};

#endif /* NODO_H */

