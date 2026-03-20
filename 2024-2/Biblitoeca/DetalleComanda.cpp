#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>

using namespace std;

#include "DetalleComanda.h"

#include "Bebida.h"
#include "Entrada.h"
#include "PlatoFondo.h"

//CONSTRUCTORES
DetalleComanda::DetalleComanda() {
    id = 0;
    pedido = nullptr;
}
DetalleComanda::DetalleComanda(const DetalleComanda &og) {
    pedido = nullptr;
    *this = og;
}
DetalleComanda::~DetalleComanda() {
    if (pedido) delete pedido;
}
void DetalleComanda::operator = (const DetalleComanda &og) {
    set_id (og.id);
    set_pedido(og.pedido);
}
//SELECTORES
int DetalleComanda::get_id() const {
    return id;
}
void DetalleComanda::set_id(int id) {
    this->id = id;
}
void DetalleComanda::get_pedido(Producto *&pedido) const {
    pedido = this->pedido->clona();
}

void DetalleComanda::set_pedido(Producto *pedido) {
    if (this->pedido) delete pedido;
    this->pedido = pedido->clona();
}
//METODOS
istream& DetalleComanda::leer(istream &in) {
    //161,E,Quesadillas,5.5,sin picante
    in>>id;
    if (in.eof()) return in;
    in.get();
    char tipo[2];
    in.getline(tipo,2, ',');
    if (*tipo == 'B')
        pedido = new Bebida;
    else if (*tipo == 'E')
        pedido = new Entrada;
    else if (*tipo == 'P')
        pedido = new PlatoFondo;

    pedido->leer(in);
    return in;
}
ostream& DetalleComanda::imprimir(ostream &out)const {
    out<<left<<"Codigo de comanda: "<<id<<endl;
    pedido->imprimir(out);
    return out;
}
bool DetalleComanda::eliminable(int prote) {
    return pedido->eliminable(prote);
}
