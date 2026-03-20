
#include "conductores.h"
#include <iostream>
#include "fstream"
#include <iomanip>
#include <cstring>
#include "LibreriaApertura/AperturaDeArchivos.h"
#include "comunes.h"
using namespace std;
//12270502,CUEVA FUENTES CINTHIA DELIA
void operator += (Conductores &conductores,const char *nombArch) {
    ifstream archConductores;
    AperturaDeUnArchivoDeTextosParaLeer(archConductores,nombArch);

    int bufferDni[MAX_CONDUC];
    char *bufferNombre[MAX_CONDUC];
    int cant=0;
    while (true) {
        int dni;
        char nombre[MAX_CONDUC];
        archConductores>>dni;
        if (archConductores.eof()) break;
        archConductores.get();
        archConductores.getline(nombre,MAX_NOMBRE);
        cant++;
        bufferDni[cant-1]=dni;
        bufferNombre[cant-1]=miStrdup(nombre);
    }
    conductores.cantidad=cant;
    conductores.dnis = new int [conductores.cantidad];
    conductores.nombres= new char* [conductores.cantidad];
    for (int i = 0; i < conductores.cantidad; i++) {
        conductores.dnis[i]=bufferDni[i];
        conductores.nombres[i]=bufferNombre[i];
    }
    archConductores.close();
}