//
// Created by alulab14 on 28/11/2025.
//

#ifndef LABORATORIO09_STL_COMENTARIO_H
#define LABORATORIO09_STL_COMENTARIO_H

#include "Comunes.h"
class Comentario {
private:
    string canal;
    string cometario;
public:
    Comentario();
    Comentario(const Comentario &orig);
    ~Comentario();
    void setCanal(const string canal);
    void setComentario(const string comentario);
    string getCanal();
    string getComentario();
    void operator=(const Comentario &orig);
    void operator >>(ifstream &arch);

};


#endif //LABORATORIO09_STL_COMENTARIO_H