//
// Created by arian on 9/11/2025.
//

#ifndef ARBOLESYPOLIMORFISMO_LAB08_2025_1_ARBOL_H
#define ARBOLESYPOLIMORFISMO_LAB08_2025_1_ARBOL_H
#include "Nodo.h"


class Arbol {

public:
    void inicializa();

    Arbol();
    virtual ~Arbol();

    void insertar(class Dron *dron);

    void eliminaArbol();
    void mostrar(ofstream &arch);
private:
    Nodo *raiz;
    void eliminarR(Nodo *&raiz);
    void insertarR(class Nodo*&raiz, class Dron *dron);

    void mostrarR(ofstream &arch, const class Nodo *raiz);


};


#endif //ARBOLESYPOLIMORFISMO_LAB08_2025_1_ARBOL_H