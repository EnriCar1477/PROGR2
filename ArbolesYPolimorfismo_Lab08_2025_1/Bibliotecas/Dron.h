//
// Created by arian on 9/11/2025.
//

#ifndef ARBOLESYPOLIMORFISMO_LAB08_2025_1_DRON_H
#define ARBOLESYPOLIMORFISMO_LAB08_2025_1_DRON_H
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
#include <cstring>

class Dron {

public:
    Dron();
    void inicializa();
    virtual void leer(ifstream & arch);
    virtual void imprimir(ofstream &arch);

    Dron(const Dron& orig);
    void operator=(const Dron &orig);
    void get_id(char *iden) const;
    void set_id(char *iden);
    void get_ubicacion(char *location) const;
    void set_ubicacion(char *location);
    int get_capacidad() const;
    void set_capacidad(int capacidad);
    virtual ~Dron();
private:
    char *id;
    char *ubicacion;
    int capacidad;

};


#endif //ARBOLESYPOLIMORFISMO_LAB08_2025_1_DRON_H