#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>

using namespace std;

#include "PlatoFondo.h"

//CONSTRUCTORES
PlatoFondo::PlatoFondo() {

}
PlatoFondo::PlatoFondo(const PlatoFondo &og) : Producto(og) {
    set_proteina(og.proteina);
}
PlatoFondo::~PlatoFondo() {

}
void PlatoFondo::operator = (const PlatoFondo &og) {
    PlatoFondo::operator=(og);
    set_proteina(og.proteina);
}
//SELECTORES
int PlatoFondo::get_proteina() const {
    return proteina;
}
void PlatoFondo::set_proteina(int proteina) {
    this->proteina = proteina;
}

//METODOS
istream& PlatoFondo::leer(istream &in) {
    //Pollo a la Brasa,15,1
    Producto::leer(in);
    if (in.eof()) return in;
    in>>proteina;
    in.get();
    return in;
}
ostream& PlatoFondo::imprimir(ostream &out) const {
    Producto::imprimir(out);
    switch (proteina) {
        case 1:
            out<<"Pollo"<<endl;
            break;
        case 2:
            out<<"Carne"<<endl;
            break;
        case 3:
            out<<"Pescado"<<endl;
            break;
        case 4:
            out<<"Lacteos"<<endl;
            break;
        default:
            break;
    }
    out<<endl;
    return out;
}
Producto* PlatoFondo::clona() {
    return new PlatoFondo(*this);
}
bool PlatoFondo::eliminable(int prote) {
    return proteina == prote;
}

