//
// Created by enric on 4/11/2025.
//
#include <iostream>
#include <fstream>
#include <iomanip>
#include "Comunes.h"
#include "Comanda.h"
using namespace std;
Comanda::Comanda() {
    id=0;
    tiempo_preparacion=0;
    hora_atencion=0;
    hora_servicio=0;
    cantidad_bebidas=0;
    cantidad_entradas=0;
    cantidad_platos_fondo=0;
    total=0.0;
    estado=nullptr;
}

Comanda::~Comanda() {
    liberar(estado);
}

void Comanda::setId(int id) {
    this->id = id;
}

void Comanda::setCantidadBebidas(int cantidad_bebidas) {
    this->cantidad_bebidas=cantidad_bebidas;
}

void Comanda::setCantidadEntradas(int cantidad_entradas) {
    this->cantidad_entradas=cantidad_entradas;
}

void Comanda::setCantidadPlatosFondo(int cantidad_platos_fondo) {
    this->cantidad_platos_fondo=cantidad_platos_fondo;
}

void Comanda::setHoraAtencion(int hora_atencion) {
    this->hora_atencion=hora_atencion;
}

void Comanda::setHoraServicio(int hora_servicio) {
    this->hora_servicio=hora_servicio;
}

void Comanda::setEstado(char *estado) {
    liberar(this->estado);
    this->estado=extraeCadena(estado);
}

void Comanda::setTiempoPreparacion(int tiempo_preparacion) {
    this->tiempo_preparacion=tiempo_preparacion;
}

void Comanda::setTotal(double total) {
    this->total=total;
}

char * Comanda::getEstado() {
    return extraeCadena(this->estado);
}

int Comanda::getHoraAtencion() {
    return hora_atencion;
}

int Comanda::getHoraServicio() {
    return hora_servicio;
}

int Comanda::getTiempoPreparacion() {
    return tiempo_preparacion;
}

int Comanda::getCantidadBebidas() {
    return cantidad_bebidas;
}

int Comanda::getCantidadEntradas() {
    return cantidad_entradas;
}

int Comanda::getCantidadPlatosFondo() {
    return cantidad_platos_fondo;
}

int Comanda::getId() {
    return id;
}

double Comanda::getTotal() {
    return total;
}

void Comanda::insertarBebidas(char *nombre, double precio, char *tamano) {
    this->bebidas[this->cantidad_bebidas].setNombre(nombre);
    this->bebidas[this->cantidad_bebidas].setPrecio(precio);
    this->bebidas[this->cantidad_bebidas].setTamano(tamano);
    this->cantidad_bebidas++;
}

void Comanda::insertarEntradas(char *nombre, double precio,bool picante) {
    this->entradas[this->cantidad_entradas].setNombre(nombre);
    this->entradas[this->cantidad_entradas].setPrecio(precio);
    this->entradas[this->cantidad_entradas].setPicante(picante);
    cantidad_entradas++;
}

void Comanda::insertarPlatosFondo(char *nombre, double precio, int *proteinas) {
    this->platoFondo[this->cantidad_platos_fondo].setNombre(nombre);
    this->platoFondo[this->cantidad_platos_fondo].setPrecio(precio);
    this->platoFondo[this->cantidad_platos_fondo].setProteina(proteinas);
    cantidad_platos_fondo++;
}

void Comanda::imprimirBebidas(ofstream &arch) {
    for (int i=0;i<cantidad_bebidas;i++) {
        arch<<bebidas[i].getNombre()<<setw(15)<<bebidas[i].getTamano()<<endl;
    }
}






