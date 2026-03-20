//
// Created by enric on 25/11/2025.
//

#ifndef LAB_8_CON_SQL_ADMINISTRARMETRICAS_H
#define LAB_8_CON_SQL_ADMINISTRARMETRICAS_H



#include "Metrica.h"
class AdministrarMetricas {
private:
    list<Metrica *> listaMetricas;
public:
    void cargarArchivo(const char *nomArch);
    void generarReporte(const char *nomArch);
};


#endif //LAB_8_CON_SQL_ADMINISTRARMETRICAS_H