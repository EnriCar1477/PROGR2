//
// Created by enric on 8/09/2025.
//
#include <iostream>
#include <fstream>
#include "ConjuntoArreglos.h"

#include <cstring>
#define INCREMENTO 5
using namespace std;
char *extraerCadena(const char *cadena) {
    char *cadenaDinamica=new char[strlen(cadena)+1];
    strcpy(cadenaDinamica,cadena);
    return cadenaDinamica;
}
void cargar_conjunto_de_arreglos(ConjuntoArreglos &conjuntoArreglos, const char *nombre_archivo) {
    ifstream arch(nombre_archivo,ios::in);
    if (not arch.is_open()) {
        cout << "Error al abrir archivo " << nombre_archivo << endl;
        exit(10);
    }
    int capacidad=INCREMENTO,i;
    conjuntoArreglos.cantidad=0;
    conjuntoArreglos.codigo=new int[INCREMENTO];
    conjuntoArreglos.cursos=new char **[INCREMENTO];
    conjuntoArreglos.nombre=new char *[INCREMENTO];
    char nombre[100],curso[7];
    while (true) {
        if (conjuntoArreglos.cantidad==capacidad) incrementarEspacios(conjuntoArreglos.codigo,conjuntoArreglos.nombre,
                                                            conjuntoArreglos.cursos,conjuntoArreglos.cantidad,capacidad);
        i=conjuntoArreglos.cantidad;
        arch>>conjuntoArreglos.codigo[i];
        if (arch.eof()) break;
        arch.get();
        arch.getline(nombre,100,',');
        conjuntoArreglos.nombre[i]=extraerCadena(nombre);
        int cantidadCursos=0,capacidadCursos=INCREMENTO;
        conjuntoArreglos.cursos[i]=new char*[capacidadCursos];
        while (true) {
            if (cantidadCursos+2>capacidadCursos) incrementarEspaciosCursos(conjuntoArreglos.cursos[i],capacidadCursos,cantidadCursos);
            char **arregloCursos=conjuntoArreglos.cursos[i];
            arch.get(curso,7);
            arregloCursos[cantidadCursos]=extraerCadena(curso);
            cantidadCursos++;
            if (arch.get()=='\n') {
                arregloCursos[cantidadCursos]=nullptr;
                break;
            }
        }
        conjuntoArreglos.cantidad++;
    }
}
void incrementarEspacios(int *&codigo,char **&nombres,char ***&cursos,int cantidad,int &capacidad){
    capacidad+=INCREMENTO;
    int *codigoAuxliares=new int[capacidad];
    char **nombreAuxliares=new char*[capacidad];
    char ***cursosAuxliares=new char **[capacidad];
    for (int i=0;i<cantidad;i++) {
        codigoAuxliares[i]=codigo[i];
        nombreAuxliares[i]=nombres[i];
        cursosAuxliares[i]=cursos[i];
    }
    delete []codigo;
    delete []nombres;
    delete []cursos;
    codigo=codigoAuxliares;
    nombres=nombreAuxliares;
    cursos=cursosAuxliares;
}
void incrementarEspaciosCursos(char ** &cursos,int &capacidad,int cantidad) {
    capacidad+=INCREMENTO;
    char **cursosAuxliares=new char *[capacidad];
    for (int i=0;i<cantidad;i++) {
        cursosAuxliares[i]=cursos[i];
    }
    delete[] cursos;
    cursos=cursosAuxliares;
}
