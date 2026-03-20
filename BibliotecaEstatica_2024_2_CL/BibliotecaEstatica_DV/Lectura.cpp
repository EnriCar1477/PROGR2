//
// Created by enric on 26/08/2025.
//
#include <iostream>
#include <fstream>
#include "LibreriaEstatica/Estructuras.h"
using namespace std;

void operator >>(ifstream &arch,Plato &plato) {

    arch.getline(plato.codigo,7,',');
    if (arch.eof()) return;
    arch.getline(plato.nombre,70,',');
    arch>>plato.precio;
    while(arch.get()!='\n');
    plato.totalDePedidos=0;
    plato.totalRecaudado=0.0;
}

void operator >>(ifstream &arch,Repartidor &repartidor) {
    arch.getline(repartidor.codigo,7,',');
    if (arch.eof()) return;
    arch.getline(repartidor.nombre,70,',');
    arch.getline(repartidor.tipoDeVehiculo,30,'\n');
    repartidor.cantidadDeOrdenes=0;
}
void operator >>(ifstream &arch,Pedido &pedido) {
    arch>>pedido.dniDelCliente;
    if (arch.eof()) return;
    while (arch.get()==' ');
    arch.unget();
    arch.getline(pedido.codigoDelPlato,7,' ');
    arch>>pedido.cantidad;
    while (arch.get()==' ');
    arch.unget();
    arch.getline(pedido.codigoDelRepartidor,7,' ');
    arch>>pedido.distanciaARecorrer;
}