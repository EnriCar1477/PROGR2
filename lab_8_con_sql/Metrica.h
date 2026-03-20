//
// Created by enric on 25/11/2025.
//

#ifndef LAB_8_CON_SQL_METRICA_H
#define LAB_8_CON_SQL_METRICA_H

#include "Comunes.h"
class Metrica {
private:
    int id;
    char *descripcion;
    int fecha_calculo;
    int fecha_vencimiento;
    bool estado;
public:
    Metrica();
    ~Metrica();
    int getId();
    char *getDescripcion();
    int getFechaCalculo();
    int getFechaVencimiento();
    bool getEstado();
    void setId(int id);
    void setDescripcion(char *descripcion);
    void setFechaCalculo(int fecha_calculo);
    void setFechaVencimiento(int fecha_vencimiento);
    void setEstado(bool estado);
    virtual void leer(ifstream &archivo);
    virtual int getTipo()=0;
    // bool operator<(Metrica *&metrica) const;
    virtual void imprimir(ofstream &archivo);



};


#endif //LAB_8_CON_SQL_METRICA_H