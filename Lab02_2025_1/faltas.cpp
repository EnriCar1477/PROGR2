//
// Created by Emyr11 on 10/09/2025.
//

#include "faltas.h"
#include <iostream>
#include "fstream"
#include <iomanip>
#include "LibreriaApertura/AperturaDeArchivos.h"
#include "comunes.h"
#include <cstring>
using namespace std;

//81485316,J5T-691,24/12/2020,128
void cargar_faltas_de_los_conductores(Faltas &faltas) {
    faltas.conductores += "Conductores.csv";
    faltas.infracciones += "Infracciones.csv";
    inicializarEstructuraPlacas(faltas);

    ifstream archFaltas;
    AperturaDeUnArchivoDeTextosParaLeer(archFaltas,"Faltas.csv");
    while (true) {
        int bufferDni;
        char bufferPlaca[8],demas[150];
        archFaltas>>bufferDni;
        if (archFaltas.eof()) break;
        archFaltas.get();
        archFaltas.getline(bufferPlaca,8,',');
        archFaltas.getline(demas,150);
        int idConductor=buscarConductor(bufferDni,faltas.conductores);
        incluirPlaca(idConductor,faltas,bufferPlaca);
    }

    archFaltas.close();
}

void inicializarEstructuraPlacas(Faltas &faltas) {
    int cantidad= faltas.conductores.cantidad;
    faltas.placas= new char **[cantidad];
    faltas.capacidades= new int[cantidad];
    for (int i = 0; i < cantidad; i++) {
        faltas.placas[i]=nullptr;
        faltas.capacidades[i]=0;
    }
}

int buscarConductor(int bufferDni,Conductores &conductores) {
    for (int i = 0; i < conductores.cantidad; i++) {
        if (bufferDni == conductores.dnis[i]) return i;
    }
    return -1;
}

void incluirPlaca(int idConductor,Faltas &faltas,char *bufferPlaca) {
    char **placasOriginal =faltas.placas[idConductor];
    int capacidadOriginal =faltas.capacidades[idConductor];

    bool existePlaca=false;
    int cantPlacas=0;
    for (int i = 0; i < capacidadOriginal && placasOriginal[i]!=nullptr; i++) {
        cantPlacas++;
        if (strcmp(placasOriginal[i],bufferPlaca) == 0) {
            existePlaca=true;
            break;
        }
    }
    if (!existePlaca) {
        if (cantPlacas+2 >= capacidadOriginal) {
            faltas.capacidades[idConductor]+=INCREMENTO;
            faltas.placas[idConductor]=new char *[faltas.capacidades[idConductor]];
        }
        for (int i = 0; i < capacidadOriginal; i++) {
            //es igual a: faltas.placas[idConductor][i] pero no se puede doble corchete
            char **bloqueConductor=faltas.placas[idConductor];
            bloqueConductor[i]=placasOriginal[i];
        }
        char **bloqueConductor=faltas.placas[idConductor];
        bloqueConductor[cantPlacas]=miStrdup(bufferPlaca);
        bloqueConductor[cantPlacas+1]=nullptr;
    }
}

void imprimir_faltas_de_los_conductores(Faltas &faltas) {
    ofstream archRep;
    AperturaDeUnArchivoDeTextosParaEscribir(archRep,"ReporteFinal.txt");
    imprimirLinea(archRep,MAX_LINEA,'=');
    archRep<<setw(7)<<"DNI"<<setw(22)<<"CLIENTE"<<setw(40)<<"CANT VEHICULOS"<<endl;
    imprimirLinea(archRep,MAX_LINEA,'-');
    for (int i = 0; i < faltas.conductores.cantidad; i++) {
        archRep<<setw(10)<<faltas.conductores.dnis[i]<<"  "<<left<<setw(40)<<faltas.conductores.nombres[i]<<
            right;
        int cantidad=0;
        for (int j = 0; j<faltas.capacidades[i]; j++) {
            if (faltas.placas[i][j]==nullptr) break;
            else cantidad++;
        }
        archRep<<setw(10)<<cantidad<<endl;;
    }
    imprimirLinea(archRep,MAX_LINEA,'=');
    archRep.close();
}

void imprimirLinea(ofstream &archRep,int cant,char c) {
    for (int i = 0; i < cant; i++) {
        archRep<<c;
    }
    archRep<<endl;
}