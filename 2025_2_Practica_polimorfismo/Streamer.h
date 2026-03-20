//
// Created by enric on 15/11/2025.
//

#ifndef INC_2025_2_PRACTICA_POLIMORFISMO_STREAMER_H
#define INC_2025_2_PRACTICA_POLIMORFISMO_STREAMER_H
#include <iosfwd>

#include "Comunes.h"
#include "Metricas.h"

class Streamer {
private:
    int id;
    char *cuenta;
    int n_seguidores;
    char *categoria;
    int fecha;
    char tipo;
public:
    Streamer();
    ~Streamer();
    virtual void leer(ifstream &arch);
    virtual void escribir(ostream &arch);
    virtual void insertarMetrica(char *tipo,Metricas *metrica)=0;
    int getId() ;
};


#endif //INC_2025_2_PRACTICA_POLIMORFISMO_STREAMER_H