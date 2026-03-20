//
// Created by gesuby on 05/11/2025.
//

#ifndef PREG1_LAB07_COMANDA_H
#define PREG1_LAB07_COMANDA_H

#include "Bebida.h"
#include "Entrada.h"
#include "PlatoFondo.h"
class Comanda {
private:
    int id;
    class Bebida bebidas[100];
    class Entrada entradas[100];
    class PlatoFondo paltos_fondo[100];

    int cantidad_bebidas;
    int cantidad_entradas;
    int cantidad_platos_fondo;

    int hora_atencion;
    int hora_servicio;
    int tiempo_preparacion;
    double total;
    char *estado;
public:
    Comanda();
    ~Comanda();

    int get_cantidad_bebidas() const;
    void set_cantidad_bebidas(int cantidad_bebidas);

    int get_id() const;
    void set_id(int id);

    int get_cantidad_entradas() const;
    void set_cantidad_entradas(int cantidad_entradas);

    int get_cantidad_platos_fondo() const;
    void set_cantidad_platos_fondo(int cantidad_platos_fondo);

    int get_hora_atencion() const;
    void set_hora_atencion(int hora_atencion);

    int get_hora_servicio() const;
    void set_hora_servicio(int hora_servicio);

    int get_tiempo_preparacion() const;
    void set_tiempo_preparacion(int tiempo_preparacion);

    double get_total() const;
    void set_total(double total);

    void get_estado(char *cad) const;
    void set_estado(const char *cad);


    void llenarBebidas(const char* tam,const char*nombProd,double precProd);
    void llenarEntradas(const char* esPicante,const char*nombProd,double precProd);
    void llenarPlatos_fondos(int ind0,int ind1,int ind2,int ind3,const char*nombProd,double precProd);
};


#endif //PREG1_LAB07_COMANDA_H