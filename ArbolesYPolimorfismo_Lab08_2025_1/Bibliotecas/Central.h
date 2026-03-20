//
// Created by arian on 9/11/2025.
//

#ifndef ARBOLESYPOLIMORFISMO_LAB08_2025_1_CENTRAL_H
#define ARBOLESYPOLIMORFISMO_LAB08_2025_1_CENTRAL_H
#include "Arbol.h"


class Central {
public:
    Central();

    ~Central();

    void carga(const char *nombArch);

    void insertar(class Dron *dron);

    void muestra(const char *nombArch);

    void elaborarLinea(ofstream &arch, int max, char c);

private:
    Arbol abbDrones;
};


#endif //ARBOLESYPOLIMORFISMO_LAB08_2025_1_CENTRAL_H