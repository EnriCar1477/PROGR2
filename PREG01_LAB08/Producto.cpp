/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Producto.cpp
 * Author: alulab14
 * 
 * Created on 22 de noviembre de 2024, 10:14 AM
 */
#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
using namespace std;
#include "Producto.h"

Producto::Producto() {
    precio=0;
    nombre=nullptr;
}

Producto::Producto(const Producto& orig) {
}

Producto::~Producto() {
    if(nombre)delete nombre;
}

void Producto::SetPrecio(double precio) {
    this->precio = precio;
}

double Producto::GetPrecio() const {
    return precio;
}

void Producto::SetNombre(char*cadena){
    if(nombre)delete nombre;
    nombre=new char[strlen(cadena)+1];
    strcpy(nombre,cadena);
}
void Producto::GetNombre(char*cadena)const{
    if(nombre)strcpy(cadena,nombre);
}
/*
 142,B,Cafe,2,grande
142,B,Agua Mineral,2.5,pequeno
142,E,Quesadillas,5.5,sin picante
142,E,Bruschetta,4,picante
142,P,Pasta Alfredo,10,4
142,P,Pollo a la Brasa,15,1
161,B,Agua Mineral,2.5,mediano
161,B,Coca-Cola,3.5,grande
161,E,Quesadillas,5.5,sin picante*/
void Producto::lee(ifstream&arch){
    char nombre[200];
    arch.getline(nombre,200,',');
    arch>>precio;
    arch.get();
    SetNombre(nombre);
}

void Producto::imprime(ofstream&arch){
    char nombre[200];
    GetNombre(nombre);
    arch<<"Nombre: "<<nombre<<endl;
    arch<<"Precio: "<<precio<<endl;
}