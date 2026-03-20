//
// Created by alulab14 on 28/11/2025.
//

#include "SistemaDeGestion.h"
bool compararCat(Categoria &a,Categoria &b) {
    return a.getCodigo().compare(b.getCodigo()) < 0;
}
bool compararCom(Comentario &a,Comentario&b) {
    return a.getCanal().compare(b.getCanal()) < 0;
}
void SistemaDeGestion::cargarCategorias(const char *nomArch) {
    ifstream arch;
    aperturaIfstream(arch, nomArch);
    while (true) {
        Categoria nuevo;
        Categoria aux;
        aux>>(arch);
        nuevo=aux;
        if (arch.eof()) break;
        this->categorias.push_back(nuevo);
    }
    this->categorias.sort(compararCat);

}

void SistemaDeGestion::cargarComentarios(const char *nomArch) {
    ifstream arch;
    aperturaIfstream(arch, nomArch);
    while (true) {
        Comentario nuevo;
        Comentario aux;
        aux>>(arch);
        nuevo=aux;
        if (arch.eof()) break;
        this->comentarios.push_back(nuevo);
    }
    this->comentarios.sort(compararCom);
}

void SistemaDeGestion::cargarEtiquetas(const char *nomArch) {
    ifstream arch;
    aperturaIfstream(arch, nomArch);
    while (true) {
        Etiqueta nuevo;
        Etiqueta aux;
        aux>>(arch);
        nuevo=aux;
        if (arch.eof()) return;
        this->codigos[nuevo.getCodigo()]=nuevo;
    }

}

void SistemaDeGestion::cargarStreamers(const char *nomArch) {
    ifstream arch;
    aperturaIfstream(arch, nomArch);
    while (true) {
        Streamer nuevo;
        Streamer aux;
        aux>>(arch);
        nuevo=aux;
        if (arch.eof()) return;
        this->streamers.push_back(nuevo);
    }
}
