//
// Created by cueva.r on 21/10/2025.
//

#ifndef HERCITAS_MEDICAMENTO_H
#define HERCITAS_MEDICAMENTO_H

#include <fstream>

using namespace  std;
class medicamento {
public:
    medicamento();
    ~medicamento();
    int get_codigo() const;
    void set_codigo(int codigo);
    void get_nombre(char*) const;
    void set_nombre(char *);
    int get_cantidad() const;
    void set_cantidad(int cantidad);
    double get_precio() const;
    void set_precio(double precio);
    int get_fecha() const;
    void set_fecha(int fecha);

    virtual void leemedicamento(ifstream &,int,int,int);
    virtual void imprimemedicamento(ofstream &);

    private:
        int codigo;
        char* nombre;
        int cantidad;
        double precio;
        int fecha;

};


#endif //HERCITAS_MEDICAMENTO_H