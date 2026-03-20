//
// Created by enric on 28/10/2025.
//
#include <iostream>
#include <fstream>
#include <iomanip>
#include "Plato.h"

#include <cstring>

#include "Comunes.h"
using namespace std;
#define MAX 200
Plato::Plato() {
    codigo=nullptr;
    nombre=nullptr;
    precio=0;
    totalBruto = 0;
    categoria=nullptr;
    preparados=0;
    descuento=0.0;
    atendidos=0;
    noAtendidos=0;
    totalNeto=0;
    totalBruto=0;
    totalEsperado=0;
}
Plato::~Plato() {
    this->LiberarEspacio();
}
Plato::Plato(char *codigo,char *nombre,double precio,char *categorias,int preparados,double descuento) {
    this->codigo=extraerCadena(codigo);
    this->nombre=extraerCadena(nombre);
    this->precio=precio;
    this->categoria=extraerCadena(categorias);
    this->preparados=preparados;
    this->descuento=descuento;
    this->atendidos=0;
    this->noAtendidos=0;
    this->totalBruto=0.0;
    this->totalEsperado=0.0;
    this->totalNeto=0.0;
}
void Plato::copiaPlatos(const Plato &orig) {
    this->descuento=orig.descuento;
    this->totalBruto=orig.totalBruto;
    this->totalNeto=orig.totalNeto;
    this->totalEsperado=orig.totalEsperado;
    this->codigo=extraerCadena(orig.codigo);
    this->nombre=extraerCadena(orig.nombre);
    this->precio=orig.precio;
    this->categoria=extraerCadena(orig.categoria);
    this->preparados=orig.preparados;
    this->atendidos=orig.atendidos;
    this->noAtendidos=orig.noAtendidos;
}

void * Plato::setCodigo(char *codigo) {
    if (this->codigo!=nullptr) delete this->codigo;
    this->codigo=extraerCadena(codigo);
}

void * Plato::setNombre(char *nombre) {
    if (this->nombre!=nullptr) delete this->nombre;
    this->nombre=extraerCadena(nombre);
}

void * Plato::setCategoria(char *categoria) {
    if (this->categoria!=nullptr) delete this->categoria;
    this->categoria=extraerCadena(categoria);
}

void Plato::setPreparados(int preparados) {
    this->preparados=preparados;
}

void Plato::setDescuento(double descuento) {
    this->descuento=descuento;
}

void Plato::setAtendidos(int atendidos) {
    this->atendidos=atendidos;
}

void Plato::setNoAtendidos(int noAtendidos) {
    this->noAtendidos=noAtendidos;
}

void Plato::setTotalEsperado(double totalEsperado) {
    this->totalEsperado=totalEsperado;
}

void Plato::setTotalBruto(double totalBruto) {
    this->totalBruto=totalBruto;
}

void Plato::setTotalNeto(double totalNeto) {
    this->totalNeto=totalNeto;
}

void Plato::setPrecio(double precio) {
    this->precio=precio;
}

char * Plato::getCodigo() {
    return extraerCadena(this->codigo);
}

char * Plato::getNombre() {
    return extraerCadena(this->nombre);
}

char * Plato::getCategoria() {
    return extraerCadena(this->categoria);
}

int Plato::getPreparados() {
    return this->preparados;
}

double Plato::getDescuento() {
    return descuento;
}

int Plato::getAtendidos() {
    return this->atendidos;
}

int Plato::getNoAtendidos() {
    return noAtendidos;
}

double Plato::getTotalEsperado() {
    return totalEsperado;
}

double Plato::getTotalBruto() {
    return totalBruto;
}

double Plato::getTotalNeto() {
    return totalNeto;
}

double Plato::getPrecio() {
    return precio;
}

void Plato::LiberarEspacio() {
    if (codigo!=nullptr) delete codigo;
    if (categoria!=nullptr) delete categoria;
    if (nombre!=nullptr) delete nombre;
}

void Plato::operator=(const Plato &orig) {
    this->LiberarEspacio();
    this->copiaPlatos(orig);
}

void Plato::actualizarTotales(int cant, int actual) {
    totalEsperado+=cant*precio;
    if (actual>=cant) {
        this->atendidos+=cant;
        totalBruto+=cant*precio;
        totalNeto+=cant*cant*precio*(1-(descuento/100));
    }else {
        if (actual!=0){
            this->atendidos+=actual;
            totalBruto+=actual*precio;
            totalNeto+=actual*precio*(1-(descuento/100));
            this->noAtendidos+=cant-actual;
        }else {
             this->noAtendidos+=cant;
        }


    }
}

void operator>>(ifstream &arch, Plato &plato) {
    char codigo[MAX],nombre[MAX],categoria[MAX],c;
    double descuento=0,precio;
    int preparados;
    arch.getline(codigo,8,',');
    if (arch.eof()) return;
    arch.getline(nombre,MAX,',');
    arch>>precio;
    arch.get();
    arch.getline(categoria,MAX,',');
    arch>>preparados;
    if (arch.get()!='\n') {
        arch>>descuento>>c;
        arch.get();
    }
    Plato platoLocal(codigo,nombre,precio,categoria,preparados,descuento);
    plato=platoLocal;
}

void operator<<(ofstream &arch, Plato &plato) {
    arch<<fixed<<setprecision(2);
    arch<<plato.getCodigo()<<"  "<<plato.getNombre()<<
        setw(50-strlen(plato.getNombre()))<<plato.getPrecio()
        <<"  "<<plato.getCategoria()<<setw(20-strlen(plato.getCategoria()))<<
            plato.getDescuento()<<"%"<<setw(10)<<plato.getPreparados()<<setw(20)<<
                plato.getAtendidos()<<setw(20)<<plato.getNoAtendidos()<<
                    setw(20)<<plato.getTotalEsperado()<<setw(20)<<
                        plato.getTotalBruto()<<setw(20)<<plato.getTotalNeto()<<endl;
}
