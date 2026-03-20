//
// Created by enric on 30/10/2025.
//

#ifndef INC_2025__1_LAB6_POO_MULTA_H
#define INC_2025__1_LAB6_POO_MULTA_H

#include <iostream>
using namespace std;
class Multa {
private:
    char *placa;
    int fechaInfraccion;
    int fechaPago;
    int codigoInfracion;
    double multa;
public:
    Multa();
    ~Multa();
    Multa(const Multa& multa);
    void operator=(Multa& multa);
    void copiar(const Multa& multa);
    void limpiar();
    void setPlaca(char *placa);
    void setFechaInfracion(int fechaInfracion);
    void setFechaPago(int fechaPago);
    void setCodigoInfracion(int codigoInfracion);
    void setMulta(double multa);
    char *getPlaca();
    int getFechaInfracion();
    int getFechaPago();
    int getCodigoInfracion();
    double getMulta();
    friend void operator>>(ifstream &arch, Multa &multa) ;


};


#endif //INC_2025__1_LAB6_POO_MULTA_H