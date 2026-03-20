//
// Created by cueva.r on 24/10/2025.
//

#include <iostream>
#include <iomanip>
#include <cstring>
#include "medico.h"
using namespace std;

medico::medico() {
    codigo=0;
    nombre=nullptr;
    especialidad = nullptr;

}

medico::medico(const medico& orig) {
    *this = orig;
}

medico::~medico() {
}

void medico::operator=(const medico &orig) {
    nombre=nullptr;
    especialidad=nullptr;
    codigo=orig.codigo;
    SetNombre(orig.nombre);
    SetEspecialidad(orig.especialidad);
}
 bool medico::operator<(const medico &orig) const {
     return strcmp(nombre,orig.nombre)<0;
}


void medico::SetNombre(char *cad) {
    if (nombre != NULL) delete[]nombre;
    nombre = new char[strlen(cad)+1];
    strcpy(nombre,cad);
}

void medico::GetNombre(char* cad) const {
    strcpy(cad,nombre);
}

void medico::SetCodigo(int codigo) {
    this->codigo = codigo;
}

int medico::GetCodigo() const {
    return codigo;
}

void medico::SetEspecialidad(char* cad) {
    if(especialidad!=nullptr) delete especialidad;
    especialidad = new char[strlen(cad)+1];
    strcpy(especialidad,cad);
}

void medico::GetEspecialidad(char *cad) const {
    strcpy(cad,especialidad);
}
void medico::imprime(ofstream &arch) {
    arch <<setw(10) << codigo <<setw(50)<< nombre <<setw(50)<< especialidad << endl;
}


ifstream &operator >>(ifstream &arch,medico &f){
    int codigo;
    char nombre[50],espe[50];

    arch >> codigo;
    if(!arch.eof()){
        arch.get();
        arch.getline(nombre,50,',');
        f.SetCodigo(codigo);
        f.SetNombre(nombre);
        arch.getline(espe,50);
        f.SetEspecialidad(espe);
    }
    return arch;
}