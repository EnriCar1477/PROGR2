#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>

using namespace std;

#include "Producto.h"

//CONSTRUCTORES
Producto::Producto() {
    nombre = nullptr;
    precio = 0;
}
Producto::Producto(const Producto &og) {
    nombre = nullptr;
    *this = og;
}
Producto::~Producto() {
    if (nombre != nullptr) delete nombre;
}
void Producto::operator = (const Producto &og) {
    set_nombre(og.nombre);
    set_precio(og.precio);
}
//SELECTORES
void Producto::get_nombre(char *nombre) const {
    if (not this->nombre) *nombre = '\0';
    else strcpy(nombre, this->nombre);
}
void Producto::set_nombre(const char *nombre) {
    if (this->nombre) delete this->nombre;
    this->nombre = new char[strlen(nombre) + 1];
    strcpy(this->nombre, nombre);
}
double Producto::get_precio() const {
    return precio;
}
void Producto::set_precio(double precio) {
    this->precio = precio;
}
//METODOS
istream& Producto::leer(istream &in) {
    //Cafe,2,
    char nomb[40]{};
    in.getline(nomb, 40,',');
    if (in.eof()) return in;
    set_nombre(nomb);
    in>>precio;
    in.get();
    return in;
}
ostream& Producto::imprimir(ostream &out) const {
    out<<left
        <<setw(20)<<"Nombre: "<<nombre<<endl
        <<setw(20)<<"Precio: "<<right<<precio<<endl;
    return out;
}