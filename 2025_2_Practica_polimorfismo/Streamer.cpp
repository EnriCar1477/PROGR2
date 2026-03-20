//
// Created by enric on 15/11/2025.
//

#include "Streamer.h"

#include "MetricaEngagement.h"

Streamer::Streamer() {
    cuenta=nullptr;
    categoria=nullptr;
}

Streamer::~Streamer() {
    liberarCadena(cuenta);
    liberarCadena(categoria);
}

void Streamer::leer(ifstream &arch) {
    char bufferCuenta[100],bufferCategoria[100],bufferTipo[100],c;
    int dd,mm,aa;
    arch.getline(bufferTipo,100,',');
    if (arch.eof()) return;
    arch>>id>>c;
    arch.getline(bufferCuenta,100,',');
    arch.getline(bufferCategoria,100,',');
    arch>>n_seguidores>>c;
    arch>>aa>>c>>mm>>c>>dd;
    arch.get();

}

void Streamer::escribir(ostream &arch) {
    arch<<"[ST] CUENTA: "<<cuenta<<setw(20-strlen(cuenta))
    <<"|SEGUIDORES: "<<n_seguidores<<"|CATEGORIA : "<<categoria
    <<setw(20-strlen(categoria))<<" |TIPO: ";

}

int Streamer::getId() {
    return id;
}


