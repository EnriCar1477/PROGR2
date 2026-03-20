/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Restaurante.h
 * Author: alulab14
 *
 * Created on 22 de noviembre de 2024, 10:29 AM
 */

#ifndef RESTAURANTE_H
#define RESTAURANTE_H
#include <fstream>
using namespace std;
#include "Cola.h"


class Restaurante {
public:
    Restaurante();
    Restaurante(const Restaurante& orig);
    virtual ~Restaurante();
    
    void carga();
    void atiende();
    void elimina(int );
    
private:
    Cola Ccomanda;
};

#endif /* RESTAURANTE_H */

