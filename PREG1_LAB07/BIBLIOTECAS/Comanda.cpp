//
// Created by gesuby on 05/11/2025.
//

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
using namespace std;
#include "Comanda.h"


Comanda::Comanda() {
     id=0;

    cantidad_bebidas=0;
     cantidad_entradas=0;
     cantidad_platos_fondo=0;

     hora_atencion=0;
     hora_servicio=0;
     tiempo_preparacion=0;
     total=0;
    estado=nullptr;
}
Comanda::~Comanda() {
    if (estado!=nullptr)delete estado;
}

int Comanda::get_cantidad_bebidas() const {
    return cantidad_bebidas;
}

void Comanda::set_cantidad_bebidas(int cantidad_bebidas) {
    this->cantidad_bebidas = cantidad_bebidas;
}


int Comanda::get_id() const {
    return id;
}

void Comanda::set_id(int id) {
    this->id = id;
}

int Comanda::get_cantidad_entradas() const {
    return cantidad_entradas;
}

void Comanda::set_cantidad_entradas(int cantidad_entradas) {
    this->cantidad_entradas = cantidad_entradas;
}

int Comanda::get_cantidad_platos_fondo() const {
    return cantidad_platos_fondo;
}

void Comanda::set_cantidad_platos_fondo(int cantidad_platos_fondo) {
    this->cantidad_platos_fondo = cantidad_platos_fondo;
}

int Comanda::get_hora_atencion() const {
    return hora_atencion;
}

void Comanda::set_hora_atencion(int hora_atencion) {
    this->hora_atencion = hora_atencion;
}

int Comanda::get_hora_servicio() const {
    return hora_servicio;
}

void Comanda::set_hora_servicio(int hora_servicio) {
    this->hora_servicio = hora_servicio;
}

int Comanda::get_tiempo_preparacion() const {
    return tiempo_preparacion;
}

void Comanda::set_tiempo_preparacion(int tiempo_preparacion) {
    this->tiempo_preparacion = tiempo_preparacion;
}

double Comanda::get_total() const {
    return total;
}

void Comanda::set_total(double total) {
    this->total = total;
}

void Comanda::get_estado(char *cad) const {
    if (estado==nullptr)cad[0]=0;
    else {
        strcpy(cad,estado);
    }
}

void Comanda::set_estado(const char *cad) {
    if (estado!=nullptr)delete estado;
    estado = new char[strlen(cad)+1];
    strcpy(estado, cad);
}


void Comanda::llenarBebidas(const char* tam,const char*nombProd,double precProd) {
    bebidas[cantidad_bebidas].set_tamano(tam);
    bebidas[cantidad_bebidas].set_nombre(nombProd);
    bebidas[cantidad_bebidas].set_precio(precProd);
    cantidad_bebidas++;
}

void Comanda::llenarEntradas(const char* esPicante,const char*nombProd,double precProd) {
    if (strcmp(esPicante,"picante")==0) {
        entradas[cantidad_entradas].set_picante(true);
    }
    else {
        entradas[cantidad_entradas].set_picante(false);
    }
    entradas[cantidad_bebidas].set_nombre(nombProd);
    entradas[cantidad_entradas].set_precio(precProd);

    cantidad_entradas++;

}

void Comanda::llenarPlatos_fondos(int ind0,int ind1,int ind2,int ind3,const char*nombProd,double precProd) {

}