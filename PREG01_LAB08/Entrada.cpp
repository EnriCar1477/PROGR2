/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Entrada.cpp
 * Author: alulab14
 * 
 * Created on 22 de noviembre de 2024, 10:21 AM
 */
#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
using namespace std;
#include "Entrada.h"

Entrada::Entrada() {
    picante=false;
}

Entrada::Entrada(const Entrada& orig) {
}

Entrada::~Entrada() {
}

void Entrada::SetPicante(bool picante) {
    this->picante = picante;
}

bool Entrada::IsPicante() const {
    return picante;
}

void Entrada::lee(ifstream&arch){
    Producto::lee(arch);
    char pic[200];
    arch.getline(pic,200,'\n');
    if(strcmp(pic,"picante"))picante=true;
    else picante=false;
}

void Entrada::imprime(ofstream&arch){
    Producto::imprime(arch);
    if(picante)arch<<"Picante"<<endl;
    else arch<<"Sin picante"<<endl;
}

bool Entrada::elimina(int numprot){
    return false;
}
