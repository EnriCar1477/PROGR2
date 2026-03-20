/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Bebida.cpp
 * Author: alulab14
 * 
 * Created on 22 de noviembre de 2024, 10:17 AM
 */
#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
using namespace std;
#include "Bebida.h"

Bebida::Bebida() {
    tamano=nullptr;
}

Bebida::Bebida(const Bebida& orig) {
}

Bebida::~Bebida() {
    if(tamano)delete tamano;
}

void Bebida::SetTamano(char*cadena){

    if(tamano)delete tamano;
    tamano=new char[strlen(cadena)+1];
    strcpy(tamano,cadena);
}
void Bebida::GetTamano(char*cadena)const{
    if(tamano)strcpy(cadena,tamano);
}

void Bebida::lee(ifstream&arch){
    Producto::lee(arch);
    char tam[200];
    arch.getline(tam,200,'\n');
    SetTamano(tam);
}

void Bebida::imprime(ofstream&arch){
    Producto::imprime(arch);
    char tam[200];
    GetTamano(tam);
    arch<<"Tamano: "<<tam<<endl;
}

bool Bebida::elimina(int numprot){
    return false;
}