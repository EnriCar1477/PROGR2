//
// Created by alulab14 on 7/11/2025.
//

#ifndef STREAMERSHERENCIA_STREAMER_H
#define STREAMERSHERENCIA_STREAMER_H
#include "Comunes.h"

class Streamer {
private:
    int id;
    char *cuenta;
    int n_seguidores;
    char *categoria;
public:
    Streamer();
    ~Streamer();
    Streamer(const Streamer &s);
    void setId(int id);
    void setCuenta(char *cuenta);
    void setNseguidores(int n_seguidores);
    void setCategoria(char *categoria);
    int getId();
    char *getCuenta();
    int getNseguidores();
    char *getCategoria();
    virtual void leer(ifstream &arch);

};


#endif //STREAMERSHERENCIA_STREAMER_H