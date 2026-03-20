//
// Created by cueva.r on 21/10/2025.
//

#ifndef HERCITAS_CONRECETA_H
#define HERCITAS_CONRECETA_H
#include "medicamento.h"


class conreceta:public medicamento {
public:
    conreceta();
    ~conreceta();
    int get_codmed() const;
    void set_codmed(int codmed);
    void get_especialidad(char*) const;
    void set_especialidad(char *);

    void leemedicamento(ifstream &,int,int,int);
    void imprimemedicamento(ofstream &);
    void operator=(const conreceta&);
private:
    int codmed;
    char* especialidad;

};

#endif //HERCITAS_CONRECETA_H