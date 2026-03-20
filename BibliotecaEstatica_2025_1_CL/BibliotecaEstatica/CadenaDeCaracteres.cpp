//
// Created by enric on 27/08/2025.
//
#include <iostream>
#include <cstring>
#include <fstream>
#include "CadenaDeCaracteres.h"
using namespace std;
void operator !(CadenaDeCaracteres &cadenaDeCaracteres) {
    cadenaDeCaracteres.cadena=nullptr;
    cadenaDeCaracteres.capacidad=0;
    cadenaDeCaracteres.longitud=0;
}
void operator <=(CadenaDeCaracteres &cadenaDeCaracteres,char *dato) {
    if (cadenaDeCaracteres.cadena != nullptr) {
        delete[] cadenaDeCaracteres.cadena;
    }
    cadenaDeCaracteres.cadena=new char[strlen(dato)+1];
    strcpy(cadenaDeCaracteres.cadena,dato);
    cadenaDeCaracteres.capacidad=strlen(dato)+1;
    cadenaDeCaracteres.longitud=strlen(cadenaDeCaracteres.cadena);
}
void operator <=(CadenaDeCaracteres &cadenaDeCaracteres,int capacidad) {
    if (cadenaDeCaracteres.cadena != nullptr) {
        delete[] cadenaDeCaracteres.cadena;
    }

    // Crear nueva memoria exacta
    cadenaDeCaracteres.cadena = new char[capacidad];
    cadenaDeCaracteres.capacidad = capacidad;
    cadenaDeCaracteres.longitud = 0;

    // Inicializar en vacío
    cadenaDeCaracteres.cadena[0] = '\0';
}
void operator <=(CadenaDeCaracteres &cadenaDeCaracteres1,CadenaDeCaracteres &cadenaDeCaracteres2) {
    int capacidad2=cadenaDeCaracteres2.capacidad,capacidad1=cadenaDeCaracteres1.capacidad;
    if (cadenaDeCaracteres1.cadena == nullptr or capacidad1>=capacidad2) cadenaDeCaracteres1<=cadenaDeCaracteres2.cadena;
    else {
        cadenaDeCaracteres1<=cadenaDeCaracteres2.cadena;
    }
}
void operator +=(CadenaDeCaracteres &cadenaDeCaracteres,char *dato){
    char *aux=cadenaDeCaracteres.cadena;
    strcat(aux,dato);
    cadenaDeCaracteres<=aux;
}
void operator +=(CadenaDeCaracteres &cadenaDeCaracteres1,CadenaDeCaracteres &cadenaDeCaracteres2) {
    cadenaDeCaracteres1+=cadenaDeCaracteres2.cadena;
}


