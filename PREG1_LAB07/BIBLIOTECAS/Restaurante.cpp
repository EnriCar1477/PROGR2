//
// Created by gesuby on 05/11/2025.
//
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
using namespace std;
#include "Restaurante.h"

Restaurante::Restaurante() {
    cantidad_comandas=0;
}
Restaurante::~Restaurante() {

}

void Restaurante::cargar_comandas() {
    ifstream archCom("ARCHIVOS/comandas.csv",ios::in);
    if (not archCom.is_open()) {
        cout<<"NO SE PUDO ABRIR comandas.csv"<<endl;
        exit(1);
    }
    int id_comanda;
    char nombProd[100],tipProd,c;
    double precProd;

    while (true) {
        archCom>>id_comanda;
        if (archCom.eof())break;
        archCom.get();
        bool encontro=buscarAtencion(id_comanda,cantidad_comandas);//con id_comanda buscar la hora atencion y hora de servicio
        if (encontro) {
            archCom>>tipProd>>c;
            archCom.getline(nombProd,100,',');
            archCom>>precProd>>c;


            comandas[cantidad_comandas].set_id(id_comanda);
            if (tipProd=='B') {
                char tam[100];
                archCom.getline(tam,100,'\n');
                comandas[cantidad_comandas].llenarBebidas(tam,nombProd,precProd);
            }
            else if (tipProd=='E') {
                char esPicante[100];
                archCom.getline(esPicante,100,'\n');
                comandas[cantidad_comandas].llenarEntradas(esPicante,nombProd,precProd);
            }
            else {
                int ind0=0,ind1=0,ind2=0,ind3=0;
                archCom>>ind0>>c>>ind1>>c>>ind2>>c>>ind3;
                comandas[cantidad_comandas].llenarPlatos_fondos(ind0,ind1,ind2,ind3,nombProd,precProd);
            }

            cantidad_comandas++;
        }
        else {
            while (archCom.get()!='\n');
        }
    }

}

bool Restaurante::buscarAtencion(int id_comanda,int cantidad_comandas) {
    ifstream archAten("ARCHIVOS/atenciones.csv",ios::in);
    if (not archAten.is_open()) {
        cout<<"NO SE PUDO ABRIR atenciones.csv"<<endl;
        exit(1);
    }
    int id_comanda2,hA,mA,hS,mS;
    char c;

    while (true) {
        archAten>>id_comanda2>>c;
        if (archAten.eof())break;
        if (id_comanda==id_comanda2) {
            archAten>>hA>>c>>mA>>c;
            archAten>>hS>>c>>mS;

            int horaAtenSeg=hA*3600+mA*60;
            int horaServSeg=hS*3600+mS*60;

            comandas[cantidad_comandas].set_hora_atencion(horaAtenSeg);
            comandas[cantidad_comandas].set_hora_servicio(horaServSeg);

            return true;
        }
        else {
            while (archAten.get()!='\n');
        }
    }
    return false;
}







void Restaurante::actualizar_comandas() {

}

void Restaurante::imprimir_comandas() {

}