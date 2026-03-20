//
// Created by enric on 27/11/2025.
//

#ifndef INC_2025_1_STL_MINISTERIODETRANSPORTE_H
#define INC_2025_1_STL_MINISTERIODETRANSPORTE_H
#include <list>
#include "Infraccion.h"

class MinisterioDeTransporte {
private:
    list<class Infraccion> tablaInracciones;
    list<class Empresa> listaEmpresas;
public:
    void cargaDeInfracciones(const char * nomArch);

};


#endif //INC_2025_1_STL_MINISTERIODETRANSPORTE_H