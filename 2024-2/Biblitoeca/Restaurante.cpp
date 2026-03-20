#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>

using namespace std;

#include "Restaurante.h"

void Restaurante::leer() {
    ifstream archivo("Archivos/Comandas2.csv", ios::in);
    if (not archivo.is_open()) {
        cout<<"ERROR: No se pudo abrir Comandas2.csv"<<endl;
        exit(1);
    }
    DetalleComanda detalle;
    while (true) {
        detalle.leer(archivo);
        if (archivo.eof()) break;
        if (CRestaurante.size() ==100)
            cout<<"STOPP"<<endl;
        CRestaurante.push(detalle);
    }
}
void Restaurante::imprimir() {
    ofstream archivo("Archivos/Impresion.txt", ios::out);
    if (not archivo.is_open()) {
        cout<<"ERROR: No se pudo abrir Impresion.txt"<<endl;
        exit(1);
    }
    archivo<<fixed<<setprecision(2);

    int cantidad = CRestaurante.size();
    for (int i = 0; i<cantidad; i++) {
        //No podemos recorrer la cola por medio de sus nodos porque los tiene encapsulados
        DetalleComanda detalle = CRestaurante.pop();
        detalle.imprimir(archivo);
        CRestaurante.push(detalle);
    }
}

void Restaurante::actualizar(int proteina) {
    int cantidad = CRestaurante.size();

    for (int i = 0; i<cantidad; i++) {
        DetalleComanda detalle;//Siempre se desencola, con un nuevo while, entonces no hay problema
        detalle = CRestaurante.pop();
        if (not detalle.eliminable(proteina))
            CRestaurante.push(detalle);//Lo vuelvo  a poner, sino lo elimina para siempre.
    }
}
