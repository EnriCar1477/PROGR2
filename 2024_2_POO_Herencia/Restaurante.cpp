//
// Created by enric on 4/11/2025.
//
#include <iostream>
#include <iomanip>
#include <fstream>
#include "Restaurante.h"
#include "Comunes.h"
using namespace std;
Restaurante::Restaurante() {
    cantidad_comandas = 0;
}

void Restaurante::actualizar_comandas() {
    ifstream arch;
    aperturaIfstream(arch,"comandas.csv");
    int id_comandas,proteinas[4];
    double precio;
    char nombre[MAX], tipoPlato,tamano[MAX],c;
    while (true) {
        arch>>id_comandas;
        if (arch.eof()) break;
        int posicion=this->buscarPosicion(id_comandas);
        if (posicion!=-1) {
            arch>>c>>tipoPlato>>c;
            arch.getline(nombre,MAX,',');
            arch>>precio>>c;
            this->comandas[posicion].setTotal(precio+this->comandas[posicion].getTotal());
            if (tipoPlato=='E') {
                if (arch.get()=='s') {
                    this->comandas[posicion].insertarEntradas(nombre,precio,false);
                }
                else this->comandas[posicion].insertarEntradas(nombre,precio,true);
                while (arch.get()!='\n');
            }else if (tipoPlato=='B') {
                arch.getline(tamano,MAX,'\n');
                this->comandas[posicion].insertarBebidas(nombre,precio,tamano);
            }else {
                for (int i=0;i<4;i++) {
                    arch>>proteinas[i];
                    arch.get();
                }
                this->comandas[posicion].insertarPlatosFondo(nombre,precio,proteinas);
            }
        }
    }
}

void Restaurante::cargar_comandas() {
    ifstream arch;
    aperturaIfstream(arch,"atenciones.csv");
    int id,horaA,minutosA,horaS,minutosS,tiempoAten,timepoServ;
    char c;
    while (true) {
        arch>>id;
        if (arch.eof()) break;
        arch>>c>>horaA>>c>>minutosA>>c>>horaS>>c>>minutosS;
        tiempoAten=100*horaA+minutosA;
        timepoServ=100*horaS+minutosS;
        comandas[cantidad_comandas].setId(id);
        comandas[cantidad_comandas].setHoraAtencion(tiempoAten);
        comandas[cantidad_comandas].setHoraServicio(timepoServ);
        cantidad_comandas++;
    }

}

int Restaurante::buscarPosicion(int id_comandas) {
    for (int i=0;i<cantidad_comandas;i++) {
        if (comandas[i].getId()==id_comandas) return i;
    }
    return -1;
}

void Restaurante::imprimir() {
    ofstream arch;
    aperturaOfstream(arch,"Reporte.txt");
    for (int i=0;i<cantidad_comandas;i++) {
        arch<<comandas[i].getId()<<setw(5)<<" ";
        comandas[i].imprimirBebidas(arch);
    }
}

