//
// Created by alulab14 on 7/11/2025.
//

#include "Streamer.h"

#include "Comunes.h"

Streamer::Streamer() {
    id = 0;
    categoria=nullptr;
    n_seguidores=0;
    cuenta=nullptr;
}

Streamer::~Streamer() {
    liberar(categoria);
    liberar(cuenta);
}

Streamer::Streamer(const Streamer &s) {
    liberar(categoria);
    liberar(cuenta);
    id=s.id;
    categoria=extraerCadena(s.categoria);
    cuenta=extraerCadena(s.cuenta);
    n_seguidores=s.n_seguidores;
}

void Streamer::setId(int id) {
    this->id = id;
}
void Streamer::setCuenta(char *cuenta) {
    liberar(this->cuenta);
    this->cuenta=extraerCadena(cuenta);
}

void Streamer::setNseguidores(int n_seguidores) {
    this->n_seguidores=n_seguidores;
}
void Streamer::setCategoria(char *categoria) {
    liberar(this->categoria);
    this->categoria=extraerCadena(categoria);
}
int Streamer::getId() {
    return this->id;
}
char* Streamer::getCuenta() {
    return extraerCadena(this->cuenta);
}
int Streamer::getNseguidores() {
    return this->n_seguidores;
}
char* Streamer::getCategoria() {
    return extraerCadena(this->categoria);
}

void Streamer::leer(ifstream &arch) {
    char c,cuentabuffer[50],categoriabuffer[50];
    arch>>id>>c;
    arch.getline(cuentabuffer,50,',');
    arch.getline(categoriabuffer,50,',');
    categoria=extraerCadena(categoriabuffer);
    cuenta=extraerCadena(cuentabuffer);
    arch>>n_seguidores>>c;

}


