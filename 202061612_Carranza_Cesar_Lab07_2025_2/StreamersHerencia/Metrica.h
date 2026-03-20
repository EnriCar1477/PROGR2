//
// Created by alulab14 on 7/11/2025.
//

#ifndef STREAMERSHERENCIA_METRICA_H
#define STREAMERSHERENCIA_METRICA_H

#include "Comunes.h"
class Metrica {
private:
    int id;
    char *descripcion;
    int fecha_calculo;
    int fecha_expiracion;
    bool estado;
public:
    Metrica();
    Metrica(const Metrica &metrica);
    ~Metrica();
    int getId();
    char *getDescripcion();
    int getFechaCalculo();
    int getFecaExpiracion();
    bool getEstado();
    void setId(int id);
    void setDescripcion(char *descripcion);
    void setFechaCalculo(int fecha_calculo);
    void setFecaExpiracion(int feca_expiracion);
    void setEstado(bool estado);
    virtual void leer(ifstream &arch);
};


#endif //STREAMERSHERENCIA_METRICA_H