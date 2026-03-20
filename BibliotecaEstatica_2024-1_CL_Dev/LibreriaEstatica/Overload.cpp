//
// Created by enric on 3/09/2025.
//
#include <iostream>
#include <fstream>
#include <cstring>
#include "Estructuras.h"
using namespace std;

bool  operator  >>(ifstream &arch,Libro &libro){
    arch.getline(libro.codigo,8,',');
    if (arch.eof()) return false;
    arch.getline(libro.titulo,80,',');
    arch.getline(libro.autor,60,',');
    arch>>libro.stock;
    arch.get();
    arch>>libro.precio;
    arch.get();
    return true;
}
bool  operator >>(ifstream &arch,Cliente &cliente) {
    arch>>cliente.dni;
    if (arch.eof()) return false;
    arch.get();
    arch.getline(cliente.nombre,60,'\n');
    cliente.cantDeLibros=0;
    cliente.pagoTotal=0.0;
    return true;
}
bool operator >>(LibroSolicitado &pedidos,Libro *arregloLibro) {
    for (int i=0;strcmp(arregloLibro[i].codigo,"FIN")!=0;i++) {
        if (strcmp(pedidos.codigoDelLibro,arregloLibro[i].codigo)==0) {
            if (arregloLibro[i].stock>0) {
                pedidos.atendido=true;
                pedidos.precio=arregloLibro[i].precio;
                return true;
            }else return false;
        }
    }
}
bool operator <<(Cliente &cliente,LibroSolicitado &pedido) {

}