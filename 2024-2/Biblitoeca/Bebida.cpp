#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>

using namespace std;

#include "Bebida.h"

//CONSTRUCTORES
Bebida::Bebida() {
    tamano = nullptr;
}
Bebida::Bebida(const Bebida &og) : Producto(og) {
    tamano = nullptr;

    set_tamano(og.tamano);
}
Bebida::~Bebida() {
    if (tamano) delete tamano;
}
void Bebida::operator = (const Bebida &og) {
    Producto::operator=(og);
    set_tamano(og.tamano);
}
//SELECTORES
void Bebida::get_tamano(char *tamanao) const {
    if (not this->tamano) *tamanao = 0;
    else strcpy(tamanao, this->tamano);
}
void Bebida::set_tamano(const char *tamano) {
    if (this->tamano) delete this->tamano;
    this->tamano = new char[strlen(tamano) + 1];
    strcpy(this->tamano, tamano);
}

//METODOS
istream& Bebida::leer(istream &in) {
    //Agua Mineral,2.5,pequeno
    Producto::leer(in);
    if (in.eof()) return in;
    char tam[15]{};
    in.getline(tam, 15, '\n');
    set_tamano(tam);
    return in;
}
ostream& Bebida::imprimir(ostream &out) const {
    Producto::imprimir(out);
    out<<left
        <<setw(15)<<tamano<<endl;
    return out;
}
Producto* Bebida::clona() {
    return new Bebida(*this);
}
bool Bebida::eliminable(int prote) {
    return false;
}