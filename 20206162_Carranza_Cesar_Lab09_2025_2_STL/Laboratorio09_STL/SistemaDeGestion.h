//
// Created by alulab14 on 28/11/2025.
//

#ifndef LABORATORIO09_STL_SISTEMADEGESTION_H
#define LABORATORIO09_STL_SISTEMADEGESTION_H

#include <list>
#include <map>

#include "Streamer.h"
#include "Comentario.h"
class SistemaDeGestion {
private:
    list<Categoria> categorias;
    list<Comentario> comentarios;
    map<string,Etiqueta> codigos;
    list<Streamer> streamers;
public:
    void cargarCategorias(const char * nomArch);
    void cargarComentarios(const char * nomArch);
    void cargarEtiquetas(const char * nomArch);
    void cargarStreamers(const char * nomArch);
};


#endif //LABORATORIO09_STL_SISTEMADEGESTION_H