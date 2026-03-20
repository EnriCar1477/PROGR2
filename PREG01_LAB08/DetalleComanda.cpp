/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   DetalleComanda.cpp
 * Author: alulab14
 * 
 * Created on 22 de noviembre de 2024, 10:24 AM
 */
#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
using namespace std;
#include "DetalleComanda.h"
#include "Bebida.h"
#include "Entrada.h"
#include "PlatoFondo.h"

DetalleComanda::DetalleComanda() {
    id=0;
    pedido=nullptr;
}

DetalleComanda::DetalleComanda(const DetalleComanda& orig) {
}

DetalleComanda::~DetalleComanda() {
}

void DetalleComanda::SetId(int id) {
    this->id = id;
}

int DetalleComanda::GetId() const {
    return id;
}

void DetalleComanda::generandoMemoria(char tipo){
    if(tipo=='B')pedido=new Bebida;
    if(tipo=='E')pedido=new Entrada;
    if(tipo=='P')pedido=new PlatoFondo;
}

void DetalleComanda::lecturaPolimorfica(ifstream&arch){
    pedido->lee(arch);
}

void DetalleComanda::operator=(const DetalleComanda&comandaOrigen) {
    id=comandaOrigen.GetId();
    pedido=comandaOrigen.pedido;
}

void DetalleComanda::imprimiendo(ofstream&arch){
    arch<<"Codigo de Comanda: "<<id<<endl;
    pedido->imprime(arch);
}

bool DetalleComanda::seElimina(int numProt){
    bool seElmina;
    seElmina=pedido->elimina(numProt);
}