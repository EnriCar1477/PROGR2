/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Restaurante.cpp
 * Author: alulab14
 * 
 * Created on 22 de noviembre de 2024, 10:29 AM
 */
#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
using namespace std;
#include "Restaurante.h"

Restaurante::Restaurante() {
}

Restaurante::Restaurante(const Restaurante& orig) {
}

Restaurante::~Restaurante() {
}

void Restaurante::carga(){
    ifstream arch("comandas2.csv",ios::in);
    if(!arch){
        cout<<"ERROR APETURA "<<endl;
        exit(1);
    }
    while(1){
        Ccomanda.leyendoComanda(arch);
        if(arch.eof())break;
    }
    
}

void Restaurante::atiende(){
    ofstream arch("DetalleDeComandas.txt",ios::out);
    if(!arch){
        cout<<"ERROR SALIDA "<<endl;
        exit(1);
    }
    arch<<setprecision(2)<<fixed;
    arch<<"Detalle de comandas"<<endl;
    arch<<setfill('=')<<setw(120)<<"="<<setfill(' ')<<endl;
    Ccomanda.imprimiendo(arch);
}

void Restaurante::elimina(int proteinaEliminar){
    Ccomanda.actualizando(proteinaEliminar);
    
}

