//
// Created by alulab14 on 28/11/2025.
//

#include "Streamer.h"

Streamer::Streamer() {
    canal = nullptr;
    idioma=nullptr;
}

Streamer::~Streamer() {

}

int Streamer::getFecha() {
    return fecha;
}

// Categoria Streamer::getCategoria() {
//     return Categoria(categoria);
// }

string Streamer::getCanal() {
    return canal;
}

string Streamer::getIdioma() {
    return idioma;
}

void Streamer::setCanal(const string canal) {
    this->canal=canal;
}

void Streamer::setFecha(const int fecha) {
    this->fecha=fecha;
}

void Streamer::setidioma(const string idioma) {
    this->idioma=idioma;
}

void Streamer::setEtiqueta(const string etiquetaStr) {
    this->etiquetaStr=etiquetaStr;
}

void Streamer::operator>>(ifstream &arch) {
    char bufferCanal[MAX],codigoCategoria[MAX],etiquetasCanal[MAX],
            idiomaBuffer[MAX],c;
    int dd,mm,aa;
    arch.getline(bufferCanal,MAX,',');
    if (arch.eof()) return;
    arch>>dd>>c>>mm>>c>>aa>>c;
    arch.getline(codigoCategoria,MAX,',');
    while (true) {
        arch.get(etiquetasCanal,7);
        if (arch.get()==',') break;
    }
    arch.getline(idiomaBuffer,MAX,',');
    this->setCanal(bufferCanal);
    this->setidioma(idiomaBuffer);
}

// void Streamer::operator>>(ifstream &arch) {
//
// }
