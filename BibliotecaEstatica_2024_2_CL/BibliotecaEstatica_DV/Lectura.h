//
// Created by enric on 26/08/2025.
//

#ifndef BIBLIOTECAESTATICA_DV_LECTURA_H
#define BIBLIOTECAESTATICA_DV_LECTURA_H
using namespace std;
void operator >>(ifstream &arch,Plato &plato);
void operator >>(ifstream &arch,Repartidor &repartidor);
void operator >>(ifstream &arch,Pedido &pedido);
#endif //BIBLIOTECAESTATICA_DV_LECTURA_H