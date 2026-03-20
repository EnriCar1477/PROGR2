//
// Created by enric on 11/11/2025.
//

#ifndef INC_2025_1_POO_POLIMORFISMO_ARBOL_H
#define INC_2025_1_POO_POLIMORFISMO_ARBOL_H

#include "Nodo.h"
class Arbol {
private:
    Nodo *raiz;
public:
    Arbol();
    ~Arbol();
    void liberarArbol();
    void liberarNodos_PostOrden(Nodo *&nodo);
    void InsertarNodo(Nodo *&nodo, Dron *drone);
    void insert(Dron *drone);

    void contarNodos_Semaforos(Nodo * nodo, int &cantidad);

    void contarSemaforos(int &cantidad);

    void contarNodos_Estacionamiento(Nodo * nodo, int &cantidad_estacionamientos);

    void contarEstacionamiento(int &cantidad_estacionamientos);

    void actualizarNodo(Nodo * nodo, int &cantidad_semaforos, int &cantidad_estacionamientos);

    void AplicarActualizacion(int cantidad_semaforos, int cantidad_estacionamientos);

    void contarNodo(Nodo * nodo, int &cantidad_estacionamientos, int &cantidad_semaforos);

    void contar(int &cantidad_Estacionamientos,int &cantidad_Semaforos);

    void imprimirNodos(Nodo * nodo, ofstream & arch);

    void imprimir(ofstream & arch);

};


#endif //INC_2025_1_POO_POLIMORFISMO_ARBOL_H