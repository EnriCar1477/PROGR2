//
// Created by alulab14 on 28/11/2025.
//

#ifndef LABORATORIO09_STL_STREAMER_H
#define LABORATORIO09_STL_STREAMER_H

#include <vector>

#include "Categoria.h"
#include "Etiqueta.h"
class Streamer {
private:
    string canal;
    int fecha;
    Categoria categoria;
    string etiquetaStr;
    vector<Etiqueta> etiquetasVector;
    string idioma;
    vector<string> comentarios;
public:
    Streamer();
    ~Streamer();
    int getFecha();
    // Categoria getCategoria();
    string getCanal();
    string getIdioma();
    void setCanal(const string canal);
    void setFecha(const int fecha);
    void setidioma(const string idioma);
    void setEtiqueta(const string etiquetaStr);
    // void setCategoria(const Categoria categoria);
    void operator >>(ifstream &arch);

};


#endif //LABORATORIO09_STL_STREAMER_H