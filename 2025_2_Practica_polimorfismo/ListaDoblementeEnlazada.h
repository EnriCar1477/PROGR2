//
// Created by enric on 15/11/2025.
//

#ifndef INC_2025_2_PRACTICA_POLIMORFISMO_LISTADOBLEMENTEENLAZADA_H
#define INC_2025_2_PRACTICA_POLIMORFISMO_LISTADOBLEMENTEENLAZADA_H

#include "Comunes.h"
#include "Nodo.h"

class ListaDoblementeEnlazada {
private:
    Nodo *cabeza;
    int longitud;
public:
    ListaDoblementeEnlazada();
    //~ListaDoblementeEnlazada();
    void insertar(Streamer *streamer);
    friend class GestorStreamer;
    Nodo* buscarNodo(int idStreamer);
};


#endif //INC_2025_2_PRACTICA_POLIMORFISMO_LISTADOBLEMENTEENLAZADA_H