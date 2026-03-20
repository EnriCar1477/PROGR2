//
// Created by enric on 30/10/2025.
//

#ifndef INC_2025__1_LAB6_POO_INFRACCION_H
#define INC_2025__1_LAB6_POO_INFRACCION_H

#include <iostream>
using namespace std;
class Infraccion {
private:
    int codigo;
    char *descripcion;
    char *gravedad;
    double multa;
public:
    Infraccion();
    ~Infraccion();
    Infraccion(const Infraccion &orig);
    int getCodigo();
    char *getDescripcion();
    char *getGravedad();
    double getMulta();
    void setCodigo(int codigo);
    void setDescripcion(char *descripcion);
    void setGravedad(char *gravedad);
    void setMulta(double multa);
    void operator =(Infraccion &infraccion);
    void copiar(const Infraccion &orig);
    void limpiar();
    friend void operator >>(ifstream &arch,Infraccion &infraccion);

};


#endif //INC_2025__1_LAB6_POO_INFRACCION_H