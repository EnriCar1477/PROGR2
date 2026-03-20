//
// Created by Emyr11 on 10/09/2025.
//

#include "infracciones.h"
#include <iostream>
#include "fstream"
#include <iomanip>
#include <cstring>
#include "LibreriaApertura/AperturaDeArchivos.h"
#include "comunes.h"
using namespace std;
//101,Adelantar o sobrepasar en forma indebida a otro vehículo.,Grave,316.00
void operator += (Infracciones &infracciones, const char *nombArch) {
    ifstream archInfracc;
    AperturaDeUnArchivoDeTextosParaLeer(archInfracc, nombArch);
    int bufferCodigo[MAX_INFRACCIONES];
    char *bufferDescripciones[MAX_INFRACCIONES];
    char *bufferTipo[MAX_INFRACCIONES];
    double bufferValores[MAX_INFRACCIONES];
    int cantidad=0;

    while (true) {
        int codigo;
        char descripcion[MAX_DESC], tipo[MAX_TIPO];
        double valor;
        archInfracc>>codigo;
        if (archInfracc.eof()) break;
        archInfracc.get();
        archInfracc.getline(descripcion,MAX_DESC,',');
        archInfracc.getline(tipo,MAX_TIPO,',');
        archInfracc>>valor;
        cantidad++;
        bufferCodigo[cantidad-1]=codigo;
        bufferDescripciones[cantidad-1]=miStrdup(descripcion);
        bufferTipo[cantidad-1]=miStrdup(tipo);
        bufferValores[cantidad-1]=valor;
    }
    infracciones.cantidad=cantidad;
    infracciones.codigos=new int[infracciones.cantidad];
    infracciones.descripciones=new char*[infracciones.cantidad];
    infracciones.tipos=new char*[infracciones.cantidad];
    infracciones.valores=new double[infracciones.cantidad];
    for (int i = 0; i < infracciones.cantidad; i++) {
        infracciones.codigos[i]=bufferCodigo[i];
        infracciones.descripciones[i]=bufferDescripciones[i];
        infracciones.tipos[i]=bufferTipo[i];
        infracciones.valores[i]=bufferValores[i];
    }
    archInfracc.close();

}