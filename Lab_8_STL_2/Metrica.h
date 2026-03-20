//
// Created by enric on 26/11/2025.
//

#ifndef LAB_8_STL_2_METRICA_H
#define LAB_8_STL_2_METRICA_H
#include <ratio>

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
    ~Metrica();
    int getId() const;
    char *getDescripcion() const;
    int getFechaCalculo() const;
    int getFechaExpiracion() const;
    bool getEstado() const;
    virtual int getTipo()=0;
    void setId(int id);
    void setDescripcion(char *descripcion);
    void setFechaCalculo(int fecha_calculo);
    void setFechaExpiracion(int fecha_expiracion);
    void setEstado(bool estado);
    bool operator<( Metrica *&metrica) ;
    virtual void imprimir(ofstream &arch);
    virtual void leer(ifstream & arch);
};


#endif //LAB_8_STL_2_METRICA_H