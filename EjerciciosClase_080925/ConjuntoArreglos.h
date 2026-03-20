//
// Created by enric on 8/09/2025.
//

#ifndef EJERCICIOSCLASE_080925_CONJUNTOARREGLOS_H
#define EJERCICIOSCLASE_080925_CONJUNTOARREGLOS_H
#include <fstream>

using namespace std;

typedef struct {
    int *codigo;
    char **nombre;
    char ***cursos;
    int cantidad;
} ConjuntoArreglos;

void cargar_conjunto_de_arreglos(ConjuntoArreglos &conjuntoArreglos, const char *nombre_archivo);

void reporte_de_alumnos(ConjuntoArreglos conjuntoArreglos, const char *nombre_archivo);

char *sacar_nombre(ifstream &archivo);

char **sacar_cursos(ifstream &archivo);
void incrementarEspacios(int *&codigo,char **&nombres,char ***&cursos,int cantidad,int &capacidad);
void incrementarEspaciosCursos(char ** &cursos,int &capacidad,int cantidad);
#endif //EJERCICIOSCLASE_080925_CONJUNTOARREGLOS_H