//
// Created by enric on 6/11/2025.
//

#include "Biblioteca.h"
Biblioteca::Biblioteca() {
    cantidad_enciclopedia=0;
    cantidad_novelas=0;
    cantidad_estante_horizontal=0;
    cantidad_estante_vertical=0;
}

void Biblioteca::setCantidadNovelas(int cantidad) {
    cantidad_novelas=cantidad;
}

void Biblioteca::setCantidadEstante_horizontal(int cant) {
    cantidad_estante_horizontal=cant;
}
void Biblioteca::setCantidadEstante_vertical(int cant) {
    cantidad_estante_vertical=cant;
}
void Biblioteca::setCantidadEnciclopedia(int cant) {
    cantidad_enciclopedia=cant;
}
int Biblioteca::getCantidadEnciclopedia() {
    return cantidad_enciclopedia;
}

void Biblioteca::cargar_libros() {
    ifstream arch;
    aperturaIfstream(arch,"libros2.csv");
    char tipoLibro,c,codigo[7],titulo[50],tipo[50];
    int ancho,alto,volumen;
    double peso;
    while (true) {
        arch>>tipoLibro;
        if (arch.eof()) break;
        arch.get();
        arch.get();
        arch.getline(codigo,7,',');
        arch.getline(titulo,50,',');
        arch>>ancho>>c>>alto>>c;
        if (tipoLibro=='N') {
            arch.getline(tipo,50,',');
            arch>>peso;
            insertarNovela(codigo,titulo,ancho,alto,peso,tipo);
        }else {
            arch>>volumen>>c>>peso;
            insertarEnciclopedia(codigo,titulo,ancho,alto,peso,volumen);
        }
    }
}

void Biblioteca::insertarNovela(char *codigo, char *titulo, int ancho, int alto, int peso, char *tipo) {
    this->novelas[cantidad_novelas].setCodigo(codigo);
    this->novelas[cantidad_novelas].setNombre(titulo);
    this->novelas[cantidad_novelas].setPeso(peso);
    this->novelas[cantidad_novelas].setTipo(tipo);
    this->novelas[cantidad_novelas].setAncho(ancho);
    this->novelas[cantidad_novelas].setAlto(alto);
    this->cantidad_novelas++;
}

void Biblioteca::insertarEnciclopedia(char *codigo, char *titulo, int ancho, int alto, int peso, int volumen) {
    this->enciclopedia[cantidad_enciclopedia].setCodigo(codigo);
    this->enciclopedia[cantidad_enciclopedia].setNombre(titulo);
    this->enciclopedia[cantidad_enciclopedia].setPeso(peso);
    this->enciclopedia[cantidad_enciclopedia].setVolumen(volumen);
    this->enciclopedia[cantidad_enciclopedia].setAlto(alto);
    this->enciclopedia[cantidad_enciclopedia].setAncho(ancho);
    this->cantidad_enciclopedia++;
}

void Biblioteca::insertarEstanteHorizontal(char *codigo, int ancho, int altura) {
    this->estante_horizontal[cantidad_estante_horizontal].setCodigo(codigo);
    this->estante_horizontal[cantidad_estante_horizontal].setAnchura(ancho);
    this->estante_horizontal[cantidad_estante_horizontal].setAltura(altura);
    this->estante_horizontal[cantidad_estante_horizontal].setEspacios(ancho,altura);
    cantidad_estante_horizontal++;
}

void Biblioteca::insertarEstanteVertical(char *codigo, int ancho, int altura) {
    this->estante_vertical[cantidad_estante_vertical].setCodigo(codigo);
    this->estante_vertical[cantidad_estante_vertical].setAltura(altura);
    this->estante_vertical[cantidad_estante_vertical].setAnchura(ancho);
    cantidad_estante_vertical++;

}

void Biblioteca::posicionarLibros() {
    int i,j,contadorEstantes=0,contadorNovelas=0;
    for (i=contadorEstantes;i<cantidad_novelas;i++) {
        for (j=contadorNovelas;j<cantidad_estante_horizontal;j++) {
            int espaciosSobranteH=this->estante_horizontal[i].CalcularEspacioSobrante();
            if (this->novelas[j].getAlto()<this->estante_horizontal[i].getAltura()) {
                if (espaciosSobranteH>this->novelas[j].getAncho() and
                this->estante_horizontal[i].getPesoActual()+this->novelas[j].getPeso()
                <this->estante_horizontal[i].getPesoSoportado()){
                    this->estante_horizontal[i]
                }
            }

        }

    }
}

void Biblioteca::cargarEstantes() {
    ifstream arch;
    aperturaIfstream(arch,"estantes2.csv");
    char tipoEstante,codigo[4],c;
    int ancho,altura;
    while (true) {
        arch>>tipoEstante;
        if (arch.eof()) break;
        arch.get();
        arch.get();
        arch.getline(codigo,4,',');
        arch>>ancho>>c>>altura;
        if (tipoEstante=='H') {
            insertarEstanteHorizontal(codigo,ancho,altura);
        }else{
            insertarEstanteVertical(codigo,ancho,altura);
        }
    }
}

int Biblioteca::getCantidadNovelas() {
    return cantidad_novelas;
}
int Biblioteca::getCantidadEstante_horizontal() {
    return cantidad_estante_horizontal;
}
int Biblioteca::getCantidadEstante_vertical() {
    return cantidad_estante_vertical;
}




