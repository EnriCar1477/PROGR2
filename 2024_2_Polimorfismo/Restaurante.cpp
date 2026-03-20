//
// Created by enric on 12/11/2025.
//

#include "Restaurante.h"

#include "Bebible.h"
#include "Entrada.h"

void Restaurante::cargar() {
    ifstream arch("comandas2.csv",ios::in);
    if(!arch.is_open()) {
        cout<<"Error ala abrir el archivo comandas2.csv"<<endl;
        exit(1);
    }

    int id;
    char c,tipo;
    while (true) {
        arch>>id;
        if (arch.eof()) break;
        arch>>c>>tipo>>c;
        Ccomanda.lectura(arch,tipo,id);
    }
}

void Restaurante::eliminar(int i) {
    Ccomanda.eliminarProteina(3);
}

void Restaurante::impirmir() {
    ofstream arch("report.csv",ios::out);
    if(!arch.is_open()) {
        cout<<"Error al abrir el archivo report.csv"<<endl;
        exit(1);
    }
    Ccomanda.imprimir(arch);
}
