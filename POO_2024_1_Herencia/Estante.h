//
// Created by enric on 6/11/2025.
//

#ifndef POO_2024_1_HERENCIA_ESTANTE_H
#define POO_2024_1_HERENCIA_ESTANTE_H

#include "Comunes.h"
#include "Espacio.h"

class Estante {
private:
    char *codigo;
    int anchura;
    int altura;
    Espacio *espacios;
    double pesoSoportado;
    double pesoActual;
public:
    Estante();
    ~Estante();
    void setCodigo(char *codigo);
    void setAnchura(int anchura);
    void setAltura(int altura);
    void setPesoSoportado(double pesoSoportado);
    void setPesoActual(double pesoActual);
    void setEspacios(int ancho,int altura);
    char *getCodigo();
    int getAnchura();
    int getAltura();
    double getPesoSoportado();
    double getPesoActual();
};


#endif //POO_2024_1_HERENCIA_ESTANTE_H