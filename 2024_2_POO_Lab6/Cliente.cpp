//
// Created by enric on 28/10/2025.
//
#include <iostream>
#include <fstream>
#include <iomanip>
#include "Cliente.h"

#include <cstring>

#include "Comunes.h"
using namespace std;
#define MAX 200
Cliente::Cliente() {
    nombre=nullptr;
    distrito=nullptr;
    totalPagado=0.0;
    descuento=0.0;
}

Cliente::~Cliente() {
    if (nombre!=nullptr) delete nombre;
    if (distrito!=nullptr) delete distrito;
}

Cliente::Cliente(int dni, char *nombre, char *distrito, double descuento) {
    this->dni=dni;
    this->nombre=extraerCadena(nombre);
    this->distrito=extraerCadena(distrito);
    this->descuento=descuento;
    this->totalPagado=0.0;
}

void Cliente::copia(const Cliente &orig) {
    this->dni=orig.dni;
    this->nombre=extraerCadena(orig.nombre);
    this->distrito=extraerCadena(orig.distrito);
    this->descuento=orig.descuento;
    this->totalPagado=orig.totalPagado;
}

void Cliente::operator=(const Cliente &orig) {
    if (this->nombre!=nullptr) delete []this->nombre;
    if (this->distrito!=nullptr) delete []this->distrito;
    this->copia(orig);
}

void Cliente::setDNI(int dni) {
    this->dni=dni;
}

void Cliente::setNombre(char *nombre) {
    this->nombre=extraerCadena(nombre);
}

void Cliente::setDistrito(char *distrito) {
    this->distrito=extraerCadena(distrito);
}

void Cliente::setTotalPagado(double totalPagado) {
    this->totalPagado=totalPagado;
}

void Cliente::setDescuento(double descuento) {
    this->descuento=descuento;
}

int Cliente::getDNI() {
    return dni;
}

char * Cliente::getNombre() {
    return extraerCadena(nombre);
}

char * Cliente::getDistrito() {
    return extraerCadena(distrito);
}

double Cliente::getTotalPagado() {
    return totalPagado;
}

double Cliente::getDescuento() {
    return descuento;
}

void Cliente::actualizarTotal(int cant, int actual, double precio, double descuentoPlato) {
    if (actual>=cant) {
            totalPagado+=cant*precio*(1-(descuentoPlato/100))*(1-(descuento/100));
    }else {
        totalPagado+=(cant-actual)*precio*(1-(descuentoPlato/100))*(1-(descuento/100));
    }
}


void operator>>(ifstream &arch, Cliente &cliente) {
    int dni;
    char nombreLocal[MAX], distritoLocal[MAX],descuento;
    double descuentoValor=0;
    arch>>dni;
    if (arch.eof()) return;
    arch.get();
    arch.getline(nombreLocal,MAX,',');
    arch.getline(distritoLocal,MAX,',');
    arch>>descuento;
    if (descuento=='S') {
        arch.get();
        arch>>descuentoValor;
        arch.get();
    }
    Cliente clienteLocal(dni,nombreLocal,distritoLocal,descuentoValor);
    cliente=clienteLocal;
}

void operator<<(ofstream &arch, Cliente &cliente) {
    arch<<fixed<<setprecision(2);
    arch<<cliente.getDNI()<<setw(5)<<" "<<cliente.getNombre()<<
        setw(60-strlen(cliente.getNombre()))<<" "<<cliente.getDistrito()<<
            setw(60-strlen(cliente.getDistrito()))<<cliente.getDescuento()<<"%"<<
                cliente.getTotalPagado()<<endl;
}
