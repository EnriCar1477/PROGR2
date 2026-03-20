//
// Created by enric on 6/11/2025.
//

#ifndef POO_2024_1_HERENCIA_LIBRO_H
#define POO_2024_1_HERENCIA_LIBRO_H

#include "Comunes.h"
class Libro {
private:
    char *codigo;
    char*nombre;
    int ancho;
    int alto;
    double peso;
    bool colocado;
public:
    Libro();
    ~Libro();
    void setCodigo(char *codigo);
    void setAlto(int alto);
    void setNombre(char *nombre);
    void setAncho(int ancho);
    void setPeso(double peso);
    void setColocado(bool colocado);
    char* getCodigo();
    char* getNombre();
    int getAncho();
    int getAlto();
    double getPeso();
    bool getColocado();
};


#endif //POO_2024_1_HERENCIA_LIBRO_H