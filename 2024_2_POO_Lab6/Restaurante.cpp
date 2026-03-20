//
// Created by enric on 28/10/2025.
//
#include <iostream>
#include <cstring>
#include <fstream>
#include <iomanip>
using namespace std;
#include "Restaurante.h"
Restaurante::Restaurante() {
    clientes=nullptr;
    cantidadClientes=0;
    capacidadClientes=0;
    platos=nullptr;
    cantidadPlatos=0;
    capacidadPlatos=0;
}
Restaurante::~Restaurante() {
    if (clientes!=nullptr) delete [] clientes;
    if (platos!=nullptr) delete [] platos;
}

void Restaurante::incrementarEspacioClientes() {
    capacidadClientes+=5;
    if (clientes==nullptr) {
        clientes=new Cliente[capacidadClientes]{};
    }else {
        Cliente *clientesLocal=new Cliente[capacidadClientes];
        for (int i=0;i<cantidadClientes;i++) {
            clientesLocal[i]=clientes[i];
        }
        delete [] clientes;
        clientes=clientesLocal;
    }
}

void Restaurante::incrementarEspacioPlatos() {
    capacidadPlatos+=5;
    if (platos==nullptr) {
        platos=new Plato[capacidadPlatos];
    }else {
        Plato *platosLocal=new Plato[capacidadPlatos];
        for (int i=0;i<cantidadPlatos;i++) {
            platosLocal[i]=platos[i];
        }
        delete [] platos;
        platos=platosLocal;
    }
}

int Restaurante::buscarCliente(int dni) {
    for (int i=0;i<cantidadClientes;i++) {
        if (clientes[i].getDNI()==dni) return i;
    }
    return-1;
}

int Restaurante::buscarPlato(char *codPlato) {
    for (int i=0;i<cantidadClientes;i++) {
        if (strcmp(platos[i].getCodigo(),codPlato)==0) return i;
    }
    return -1;
}

void Restaurante::ingresarCliente(Cliente &cliente) {
     if (capacidadClientes==cantidadClientes) {
            incrementarEspacioClientes();
        }
        cantidadClientes++;
        clientes[cantidadClientes-1]=cliente;
}

void Restaurante::ingresarPlato(Plato &plato) {
    if (capacidadPlatos==cantidadPlatos) {
            incrementarEspacioPlatos();
        }
        cantidadPlatos++;
        platos[cantidadPlatos-1]=plato;
}

void Restaurante::imprimirPlatos(ofstream &arch) {
    for (int i=0;i<cantidadPlatos;i++) {
        arch<<setw(2)<<setfill('0')<<i+1<<setfill(' ');
        arch<<platos[i];
    }
}

void Restaurante::imprimirClientes(ofstream &arch) {
    for (int i=0;i<cantidadClientes;i++) {
        arch<<setw(2)<<setfill('0')<<i+1<<setfill(' ');
        arch<<clientes[i];
    }
}
void operator<(Restaurante &restaurante, const char *nomArch) {
    ifstream arch;
    aperturaIfstream(arch,nomArch);
    //restaurante.capacidadClientes=0;
    Cliente clienteLocal;
    while (true) {
        arch>>clienteLocal;
        if (arch.eof()) break;

        restaurante.ingresarCliente(clienteLocal);
    }
}

void operator<=(Restaurante &restaurante, const char *nomArch) {
    ifstream arch;
    aperturaIfstream(arch,nomArch);
    Plato platoLocal;
    while (true) {
        arch>>platoLocal;
        if (arch.eof()) break;
        restaurante.ingresarPlato(platoLocal);
    }
}

void operator<<=(Restaurante &restaurante, const char *nomArch) {
    ifstream arch;
    aperturaIfstream(arch,nomArch);
    int dni,numPedido,cant;
    char codPlato[8],c;
    while (true) {
        arch>>numPedido;
        if (arch.eof())break;
        arch>>c>>dni>>c;
        int posicionCliente=restaurante.buscarCliente(dni);
        while (true) {
            arch.getline(codPlato,8,',');
            int posicionPlato=restaurante.buscarPlato(codPlato);
            arch>>cant;
            int stock=restaurante.platos[posicionPlato].getPreparados();
            int atendidos=restaurante.platos[posicionPlato].getAtendidos();
            int actual=stock-atendidos;
            restaurante.platos[posicionPlato].actualizarTotales(cant,actual);
            restaurante.clientes[posicionCliente].actualizarTotal(cant,actual,
                    restaurante.platos[posicionPlato].getPrecio(),restaurante.platos[posicionPlato].getDescuento());
            if (arch.get()=='\n') break;
        }
    }
}

void operator>>(Restaurante &restaurante, const char *nomArch) {
    ofstream arch;
    aperturaOfstream(arch,nomArch);
    arch<<"Reporte Platos"<<endl;
    restaurante.imprimirPlatos(arch);
    arch<<endl;
    arch<<"Reporte Clientes"<<endl;
    restaurante.imprimirClientes(arch);
}
