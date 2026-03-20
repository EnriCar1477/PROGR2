//
// Created by enric on 9/09/2025.
#include <iostream>
#include <fstream>
#include "Faltas.h"
#include <cstring>
#define MAX 200
#define INCREMENTO 2
using namespace std;
char *extraerCadena(const char *cadena) {
    char *cadenaDinamica=new char[strlen(cadena)+1];
    strcpy(cadenaDinamica,cadena);
    return cadenaDinamica;
}
int buscarConductor(Conductores conductores,int dni) {
    for (int i=0;i<conductores.cantidad;i++) {
        if (conductores.dni[i]==dni) return i;
    }
    return -1;
}
int calcularCantidadPlacas(Faltas faltas,int posicion) {
    int i;
    char **aux=faltas.placas[posicion];
    int capacidad=faltas.capacidades[posicion];
    if (aux!=nullptr) {
        for (i=0;i<capacidad && aux[i]!=nullptr;i++) {
            cout<<aux[i]<<" ";
        }
    }
    return i;
}
bool buscarPlaca(Faltas &faltas,int posicion,char *codigo) {
    char **placas=faltas.placas[posicion];
    if (placas!=nullptr) {
        for (int i=0;placas[i]!=nullptr;i++) {
            if (strcmp(placas[i],codigo)==0) return true;
        }
    }//==> no hay placas, no se encontrará nada

    //for (int i=0;i<faltas.capacidades[posicion] and placas[i]!=NULL;i++)
    return false;
}
void incrementarEspacios(int &capacidad,char **&placas) {
    capacidad+=INCREMENTO;
    if (placas==nullptr) {
        placas=new char *[capacidad];
    }else {
        char **placasAux=new char *[capacidad];
        for (int i=0;placas[i]!=nullptr;i++) {
            placasAux[i]=placas[i];
        }
        delete []placas;
        placas=placasAux;
    }
}
void operator +=(Conductores &conductores,ifstream &arch) {
    conductores.cantidad=0;
    int bufferDNI[200];
    char *bufferNombres[200],nombre[100];
    while (true) {
        arch>>bufferDNI[conductores.cantidad];
        if (arch.eof()) break;
        arch.get();
        arch.getline(nombre,100,'\n');
        bufferNombres[conductores.cantidad]=extraerCadena(nombre);
        conductores.cantidad++;
    }
    conductores.dni=new int[conductores.cantidad];
    conductores.nombres=new char*[conductores.cantidad];
    for (int i=0;i<conductores.cantidad;i++) {
        conductores.dni[i]=bufferDNI[i];
        conductores.nombres[i]=bufferNombres[i];
    }
}
void operator +=(Infracciones &infracciones,ifstream &arch) {
    infracciones.cantidad=0;
    int bufferCodigo[MAX]{};
    double bufferValor[MAX]{};
    char *bufferDescripcion[MAX]{},*bufferTipo[MAX]{},descripcion[MAX],tipo[MAX];
    while (true) {
        arch>>bufferCodigo[infracciones.cantidad];
        if (arch.eof()) break;
        arch.get();
        arch.getline(descripcion,MAX,',');
        arch.getline(tipo,MAX,',');
        arch>>bufferValor[infracciones.cantidad];
        bufferDescripcion[infracciones.cantidad]=extraerCadena(descripcion);
        bufferTipo[infracciones.cantidad]=extraerCadena(tipo);
        infracciones.cantidad++;
    }
    infracciones.codigo=new int[infracciones.cantidad];
    infracciones.nombre=new char*[infracciones.cantidad];
    infracciones.tipos=new char *[infracciones.cantidad];
    infracciones.valores=new double[infracciones.cantidad];
    for (int i=0;i<infracciones.cantidad;i++) {
        infracciones.codigo[i]=bufferCodigo[i];
        infracciones.valores[i]=bufferValor[i];
        infracciones.nombre[i]=bufferDescripcion[i];
        infracciones.tipos[i]=bufferTipo[i];
    }
}
void cargar_faltas_de_los_operadores(Faltas &faltas) {
    ifstream arch("Faltas.csv",ios::in);
    if (not arch.is_open()) {
        cout<<"Error al arbrir el achivo Faltas.csv"<<endl;
        exit(10);
    }
    int dni,dd,mm,aa,infracciones;
    char placa[8],c;
    while (true) {
        arch>>dni;
        if (arch.eof()) break;
        arch.get();
        arch.getline(placa,8,',');
        arch>>dd>>c>>mm>>c>>aa>>c>>infracciones;
        int posicionConductor=buscarConductor(faltas.conductores,dni);
        if (posicionConductor!=-1) {
            // char **bloque_placas_original = faltas.placas[posicionConductor];
            // int capacidad_original = faltas.capacidades[posicionConductor];
            // bool existe_placa = false;
            // int cantidad_de_placas = 0;
            // for (int i=0; i < capacidad_original && bloque_placas_original[i]!=nullptr; i++) {
            //     //contiene la cantidad de placas en caso
            //     //la placa no se encuentre
            //     cantidad_de_placas++;
            //     if (strcmp(bloque_placas_original[i],placa) == 0) {
            //         existe_placa = true;
            //         break;
            //     }
            // }
            // if (!existe_placa) {
            //     if (cantidad_de_placas+2>=faltas.capacidades[posicionConductor]) incrementarEspacios(faltas.capacidades[posicionConductor],
            //                                                                         faltas.placas[posicionConductor]);
            //     char **placas=faltas.placas[posicionConductor];
            //     placas[cantidad_de_placas]=new char[8];
            //     strcpy(placas[cantidad_de_placas],placa);
            //     placas[cantidad_de_placas+1]=nullptr;
            // }
            if (dni==15029228) {
                cout<<"Aqui"<<endl;
            }

            int cantPlacas=0;
            cantPlacas=calcularCantidadPlacas(faltas,posicionConductor);
            char **bloque_placas_original = faltas.placas[posicionConductor];
            bool placaExite=buscarPlaca(faltas,posicionConductor,placa);
            if (!placaExite) {
                if (cantPlacas+2>=faltas.capacidades[posicionConductor]) incrementarEspacios(faltas.capacidades[posicionConductor],
                                                faltas.placas[posicionConductor]);
                char **placas=faltas.placas[posicionConductor];
                placas[cantPlacas]=new char[strlen(placa)+1];
                strcpy(placas[cantPlacas],placa);
                faltas.placas[cantPlacas+1]=nullptr;
            }
        }
    }
}