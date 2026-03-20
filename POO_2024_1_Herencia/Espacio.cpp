//
// Created by enric on 6/11/2025.
//

#include "Espacio.h"
Espacio::Espacio() {
    posx=0;
    posy=0;
    contenido='V';
}

void Espacio::setContenido(char c) {
    this->contenido = c;
}
void Espacio::setPosx(int x) {
    this->posx = x;
}
void Espacio::setPosy(int y) {
    this->posy = y;
}
char Espacio::getContenido() {
    return this->contenido;
}
int Espacio::getPosx() {
    return this->posx;
}
int Espacio::getPosy() {
    return this->posy;
}

