//
// Created by enric on 27/11/2025.
//

#ifndef INC_2025_1_STL_INFRACCION_H
#define INC_2025_1_STL_INFRACCION_H
#include "Comunes.h"
class Infraccion {
private:
    char *codigo;
    double multa;
    char *gravedad;
    char *descripcion;
public:
    Infraccion();
    Infraccion(const Infraccion &orig);
    ~Infraccion();
    void setCodigo(char *codigo);
    void setDescripcion(char *descripcion);
    char *getCodigo();
    char *getDescripcion();
    void setMulta(double multa);
    double getMulta();
    void setGravedad(char *gravedad);
    char *getGravedad();
    friend void operator <<(ofstream &arch,const Infraccion &e);
    friend bool operator>>(istream &arch, Infraccion &e);
    void operator=(const Infraccion &e);
};


#endif //INC_2025_1_STL_INFRACCION_H