//
// Created by enric on 6/11/2025.
//

#ifndef POO_2024_1_HERENCIA_BIBLIOTECA_H
#define POO_2024_1_HERENCIA_BIBLIOTECA_H

#include "Comunes.h"
#include "EstanteHorizontal.h"
#include "EstanteVertical.h"
class Biblioteca {
private:
    EstanteVertical estante_vertical[MAX];
    EstanteHorizontal estante_horizontal[MAX];
    int cantidad_estante_vertical;
    int cantidad_estante_horizontal;
    Enciclopedia enciclopedia[MAX];
    int cantidad_enciclopedia;
    Novelas novelas[MAX];
    int cantidad_novelas;
public:
    Biblioteca();
    void setCantidadNovelas(int cantidad);
    void setCantidadEstante_horizontal(int cant);
    void setCantidadEstante_vertical(int cant);
    void setCantidadEnciclopedia(int cant);
    int getCantidadNovelas();
    int getCantidadEstante_horizontal();
    int getCantidadEstante_vertical();
    int getCantidadEnciclopedia();
    void cargar_libros();
    void insertarNovela(char *codigo,char *titulo,int ancho,int alto,int peso,char *tipo);
    void insertarEnciclopedia(char *codigo,char *titulo,int ancho,int alto,int peso,int volumen);
    void insertarEstanteHorizontal(char *codigo,int ancho,int altura);
    void insertarEstanteVertical(char *codigo,int ancho,int altura);
    void posicionarLibros();
    void cargarEstantes();

};


#endif //POO_2024_1_HERENCIA_BIBLIOTECA_H