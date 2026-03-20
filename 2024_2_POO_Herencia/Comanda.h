//
// Created by enric on 4/11/2025.
//

#ifndef INC_2024_2_POO_HERENCIA_COMANDA_H
#define INC_2024_2_POO_HERENCIA_COMANDA_H
#define MAX 50
#include <iostream>
#include "Bebibles.h"
#include "Entrada.h"
#include "PlatoFondo.h"
using namespace std;
class Comanda {
private:
    int id;
    Bebibles bebidas[MAX];
    Entrada entradas[MAX];
    PlatoFondo platoFondo[MAX];
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
    void setId(int id);
    void setCantidadBebidas(int cantidad_bebidas);
    void setCantidadEntradas(int cantidad_entradas);
    void setCantidadPlatosFondo(int cantidad_platos_fondo);
    void setHoraAtencion(int hora_atencion);
    void setHoraServicio(int hora_servicio);
    void setEstado(char *estado);
    void setTiempoPreparacion(int tiempo_preparacion);
    void setTotal(double total);
    char *getEstado();
    int getHoraAtencion();
    int getHoraServicio();
    int getTiempoPreparacion();
    int getCantidadBebidas();
    int getCantidadEntradas();
    int getCantidadPlatosFondo();
    int getId();
    double getTotal();
    void insertarBebidas(char *nombre,double precio,char *tamaño);
    void insertarEntradas(char *nombre,double precio,bool picante);
    void insertarPlatosFondo(char *nombre,double precio,int *proteinas);
    void imprimirBebidas(ofstream &arch);
    void imprimirEntradas(ofstream &arch);
    void imprimirPlatosFondo(ofstream &arch);
};


#endif //INC_2024_2_POO_HERENCIA_COMANDA_H