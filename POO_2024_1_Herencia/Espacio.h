//
// Created by enric on 6/11/2025.
//

#ifndef POO_2024_1_HERENCIA_ESPACIO_H
#define POO_2024_1_HERENCIA_ESPACIO_H


#include "Comunes.h"
class Espacio {
private:
    char contenido;
    int posx;
    int posy;
public:
    Espacio();
    void setContenido(char c);
    void setPosx(int x);
    void setPosy(int y);
    int getPosx();
    int getPosy();
    char getContenido();

};


#endif //POO_2024_1_HERENCIA_ESPACIO_H