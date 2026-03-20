//
// Created by enric on 19/11/2025.
//

#ifndef INC_2024_1_POLIMORFISMO_AUTOREFERENCIA_LIBRO_H
#define INC_2024_1_POLIMORFISMO_AUTOREFERENCIA_LIBRO_H

#include "Comunes.h"
class Libro {
private:
    char *nombre;
    int paginas;
    double peso;
public:
    Libro();
    virtual ~Libro();
    double getPeso();
    virtual void leer(ifstream &arch);
    void setNombre(char *nombre);
    void setPaginas(int paginas);
    void setPeso(double peso);
    virtual void copiar(Libro * libro);

    virtual void imprimir(ofstream &arch);

    virtual void actualizar()=0;
};


#endif //INC_2024_1_POLIMORFISMO_AUTOREFERENCIA_LIBRO_H