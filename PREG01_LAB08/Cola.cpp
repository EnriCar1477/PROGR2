/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Cola.cpp
 * Author: alulab14
 * 
 * Created on 22 de noviembre de 2024, 10:27 AM
 */
#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
using namespace std;
#include "Cola.h"

Cola::Cola() {
    
    cabeza=nullptr;
    cola=nullptr;
    longitud=0;
}

Cola::Cola(const Cola& orig) {
}

Cola::~Cola() {
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
void Cola::leyendoComanda(ifstream&arch){
    DetalleComanda auxDetalle;
    int IDcomanda;
    char tipo;
    arch>>IDcomanda;
    if(arch.eof())return;
    arch.get();
//    cout<<IDcomanda<<endl;
    arch>>tipo;
//    cout<<tipo<<endl;
    arch.get();
    auxDetalle.generandoMemoria(tipo);
    auxDetalle.SetId(IDcomanda);
    auxDetalle.lecturaPolimorfica(arch);
//    while(arch.get()!='\n');
    encola(auxDetalle);
    
}

void Cola::encola(DetalleComanda&comandaInsertar){
    Nodo*nodoInsertar;
    nodoInsertar=new Nodo;
    nodoInsertar->dato=comandaInsertar;
    
    if(esColaVacia()){
        cabeza=nodoInsertar;
        cola=nodoInsertar;
        longitud++;
    }else{
        cola->sig=nodoInsertar;
        cola=nodoInsertar;
        longitud++;
    }
//    cout<<longitud<<endl;
}

bool Cola::esColaVacia(){
    if(cabeza==nullptr)return true;
    return false;
}

void Cola::setLongitud(int longitud) {
    this->longitud = longitud;
}

int Cola::getLongitud() const {
    return longitud;
}

DetalleComanda Cola::desencola(){
    Nodo *nodoBorrar;
    DetalleComanda auxRetorna;
    auxRetorna=cabeza->dato;
    nodoBorrar=cabeza;
    cabeza=cabeza->sig;
    delete nodoBorrar;
    return auxRetorna;
}

void Cola::imprimiendo(ofstream&arch){
    DetalleComanda auxComanda;
    for(int i=0;i<getLongitud();i++){
        auxComanda=desencola();
        auxComanda.imprimiendo(arch);
        arch<<endl;
    }
}

void Cola::actualizando(int proteinaEliminar){
    int longCola=longitud;
//    cout<<longitud<<endl;
    DetalleComanda auxComanda;
    for(int i=0;i<longCola;i++){
        auxComanda=desencola();
        longitud--;
        if(!auxComanda.seElimina(proteinaEliminar)){
            encola(auxComanda);
        }
//        cout<<"Par: "<<longitud<<endl;
    }
//    cout<<longitud;
}
