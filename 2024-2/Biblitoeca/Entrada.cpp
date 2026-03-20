#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>

using namespace std;

#include "Entrada.h"

//CONSTRUCTORES
Entrada::Entrada() {

}
Entrada::Entrada(const Entrada &og) : Producto(og) {
    set_picante(og.picante);
}
Entrada::~Entrada() {

}
void Entrada::operator = (const Entrada &og) {
    Producto::operator=(og);
    set_picante(og.picante);
}
//SELECTORES
bool Entrada::is_picante() const {
    return picante;
}
void Entrada::set_picante(bool picante) {
    this->picante = picante;
}

//METODOS
istream& Entrada::leer(istream &in) {
    //Quesadillas,5.5,sin picante
    Producto::leer(in);
    if (in.eof()) return in;
    char pica[15]{};
    in.getline(pica, 15, '\n');
    set_picante(strcmp(pica, "picante") == 0);
    return in;
}
ostream& Entrada::imprimir(ostream &out) const {
    Producto::imprimir(out);
    if (picante) {
        out<<left<<setw(15)<<"Picante"<<endl;
    }
    out<<left<<setw(15)<<"Sin Picante"<<endl;
    out<<endl;
    return out;
}
Producto* Entrada::clona() {
    return new Entrada(*this);
}
bool Entrada::eliminable(int prote) {
    return false;
}