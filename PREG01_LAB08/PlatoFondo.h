/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   PlatoFondo.h
 * Author: alulab14
 *
 * Created on 22 de noviembre de 2024, 10:22 AM
 */

#ifndef PLATOFONDO_H
#define PLATOFONDO_H
#include <fstream>

#include "Producto.h"
using namespace std;
class PlatoFondo :public Producto{
public:
    PlatoFondo();
    PlatoFondo(const PlatoFondo& orig);
    virtual ~PlatoFondo();
    
    void lee(ifstream&);
    void setProteina(int proteina);
    int getProteina() const;
    void imprime(ofstream&);
    bool elimina(int);
private:
    int proteina;
};

#endif /* PLATOFONDO_H */

