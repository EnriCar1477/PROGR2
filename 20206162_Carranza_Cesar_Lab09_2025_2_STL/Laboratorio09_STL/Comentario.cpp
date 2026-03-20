//
// Created by alulab14 on 28/11/2025.
//

#include "Comentario.h"

Comentario::Comentario() {

}

Comentario::Comentario(const Comentario &orig) {
    *this=orig;
}

Comentario::~Comentario() {

}

void Comentario::setCanal(const string canal) {
    this->canal=canal;
}

void Comentario::setComentario(const string comentario) {
    this->cometario=comentario;
}

string Comentario::getCanal() {
    return canal;
}

string Comentario::getComentario() {
    return cometario;
}

// void Comentario::setCanal(const char *canal) {
//     this->canal=extraerCadena(canal);
// }
//
// void Comentario::setComentario(const char *comentario) {
//     this->cometario=extraerCadena(comentario);
// }
//
// char * Comentario::getCanal() {
//     return extraerCadena(canal);
// }
//
// char * Comentario::getComentario() {
//     return extraerCadena(cometario);
// }
//
void Comentario::operator=(const Comentario &orig) {
     this->cometario=orig.cometario;
    this->canal=orig.canal;
 }

void Comentario::operator>>(ifstream &arch) {
    char bufferCanal[MAX],bufferComet[MAX];
    arch.getline(bufferCanal,MAX,',');
    if (arch.eof()) return;
    arch.getline(bufferComet,MAX,'\n');
    setCanal(bufferCanal);
    setComentario(bufferComet);
}
