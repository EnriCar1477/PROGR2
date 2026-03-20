//
// Created by cueva.r on 21/10/2025.
//

#ifndef HERCITAS_SINRECETA_H
#define HERCITAS_SINRECETA_H
#include "medicamento.h"

class sinreceta:public medicamento{
public:
    int get_dni() const;
    void set_dni(int dni);
    void get_nombre(char*) const;
    void set_nombre(char *);
    sinreceta();
    ~sinreceta();
    void leemedicamento(ifstream &,int,int,int);
    void imprimemedicamento(ofstream &);
    private:
        int dni;
        char *nombre;

};

#endif //HERCITAS_SINRECETA_H