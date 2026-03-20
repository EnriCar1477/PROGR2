//
// Created by enric on 26/11/2025.
//

#include "Streamer.h"

#include <algorithm>

Streamer::Streamer() {
    cuenta=nullptr;
    categoria=nullptr;
}

Streamer::Streamer(const Streamer &s) {
    *this=s;
}

void Streamer::operator=(const Streamer &s) {
    this->id=s.id;
    cuenta=colecCadena(s.cuenta);
    categoria=colecCadena(s.categoria);
    this->seguidores=s.getSeguidores();

}

Streamer::~Streamer() {
    liberarEspacio(cuenta);
    liberarEspacio(categoria);
}

int Streamer::getId() const {
    return id;
}

char * Streamer::getCuenta() const {
    return cuenta;
}

char * Streamer::getCategoria() const {
    return categoria;
}

int Streamer::getSeguidores() const {
    return seguidores;
}

void Streamer::setId(int id) {
    this->id = id;
}

void Streamer::setCuenta(char *cuenta) {
    this->cuenta=colecCadena(cuenta);
}

void Streamer::setCategoria(char *categoria) {
    this->categoria=colecCadena(categoria);
}

void Streamer::setSeguidores(int seguidores) {
    this->seguidores=seguidores;
}

void Streamer::leer(ifstream &arch) {
    char c,bufferCuenta[MAX], bufferCategoria[MAX];
    arch>>id;
    arch.get();
    arch.getline(bufferCuenta,MAX,',');
    arch.getline(bufferCategoria,MAX,',');
    cuenta=colecCadena(bufferCuenta);
    categoria=colecCadena(bufferCategoria);
    arch>>seguidores>>c;

}

void Streamer::agregar(Metrica *metrica) {
    this->metricas.push_back(metrica);
    this->ordenarMetricas();
}

void Streamer::imprimir(ofstream &arch) {
    arch<<id<<setw(5)<<" "<<cuenta<<setw(40-strlen(cuenta))<<categoria<<setw(40-strlen(categoria))
        <<seguidores;
}

void Streamer::imprimirMetricas(ofstream &arch) {
    for (auto &metrica : metricas) {
        metrica->imprimir(arch);
    }
}
bool comparar(Metrica *&a,Metrica *&b) {
    int pa =a->getTipo();
    int pb = b->getTipo();
    if (pa != pb) return pa < pb;                    // por tipo
    //     // segundo criterio: descripción ascendente (trim y case-insensitive si quieres)
    std::string da = colecCadena(a->getDescripcion());
    std::string db = b->getDescripcion();
    // opcional: transformar a minúsculas y quitar espacios
    return da < db;
}
void Streamer::ordenarMetricas() {
     sort(metricas.begin(), metricas.end(),comparar);
         //[](Metrica *&a,Metrica *&b) {
    //    return a<b;
    //  });
}