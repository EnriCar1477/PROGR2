//
// Created by enric on 19/11/2025.
//

#include "Biblioteca.h"

#include "Enciclopedia.h"
#include "Novela.h"
#include "Revista.h"

void Biblioteca::carga() {
    ifstream arch;
    aperturaIfstream(arch,"Estantes2.csv");
    int contador=0;
    char clase,c;
    double peso;
    int id;
    while (true) {
        arch>>clase;
        if (arch.eof()) break;
        arch>>c>>id>>c>>peso;
        AEstantes[contador].setId(id);
        AEstantes[contador].setClase(clase);
        AEstantes[contador].setCapacidad(peso);
        contador++;
    }
}

void Biblioteca::insertar(Libro *libro) {
    for (int i=0;i<10;i++) {
        if (AEstantes[i].verificar(libro)) {
            AEstantes->insertar(libro);
            break;
        }
    }
}

void Biblioteca::llena() {
    ifstream arch;
    aperturaIfstream(arch,"Libros3.csv");
    char tipo;
    while (true) {
        Libro *libro;
        arch>>tipo;
        if (arch.eof()) break;
        arch.get();
        if (tipo=='E') {
            libro=new Enciclopedia();
        }else if (tipo='N') {
            libro=new Novela();
        }else {
            libro=new Revista();
        }
        libro->leer(arch);
        this->insertar(libro);
    }
}

void Biblioteca::muestra() {
    ofstream arch;
    aperturaOfstream(arch,"Reporte.csv");
    for (int i=0;i<5;i++) {
        AEstantes[i].imprimir(arch);
    }
}

void Biblioteca::baja() {
    for (int i=0;i<5;i++) {
        AEstantes[i].bajar();
    }
}
