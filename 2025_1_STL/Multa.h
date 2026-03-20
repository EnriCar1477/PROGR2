//
// Created by enric on 27/11/2025.
//

#ifndef INC_2025_1_STL_MULTA_H
#define INC_2025_1_STL_MULTA_H

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
class Multa {
private:
    int fecha;
    char *placa;
    char *codMulta;
    double multa;
    bool pagada;
    int fechaPago;
public:
    Multa();
    ~Multa();
    Multa(const Multa &orig);
    int getFecha();
    int getFechaPago();
    char *getPlaca();
    char *getCodMulta();
    double getMulta();
    bool getPagada();
    void setFecha(int fecha);
    void setPlaca(char *placa);
    void setCodMulta(char *codMulta);
    void setMulta(double multa);
    void setPagada(bool pagada);
    void setFechaPago(int fechaPago);
    void operator =(const Multa &e);
    friend bool operator >>(ifstream &arch, Multa &e);
    friend void operator <<(ofstream &archconst,const Multa &e);
};


#endif //INC_2025_1_STL_MULTA_H