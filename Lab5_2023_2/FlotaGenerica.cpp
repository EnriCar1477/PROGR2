
//
// Created by enric on 30/09/2025.
//
#include <iostream>
#include <fstream>
#include <iomanip>
#include "PilaConEnteros.h"
#include "FlotaGenerica.h"
using namespace std;
void cargacamiones(void *&flota,int numcaminiones,const double pesomaximo,void* (*funcion_lee)(ifstream &arch),
                        void* (*calcula)(void *datos,double &peso),const char *nombreArch){
    ifstream arch(nombreArch,ios::in);
    if (not arch.is_open()) {
        cout<<"Error al abrir el archivo "<<nombreArch<<endl;
        exit(1);
    }
    flota=nullptr;
    void *buffer[100]{};
    void **temp=new void *[numcaminiones];
    for (int i=0;i<numcaminiones;i++) {
        temp[i]=crearCamion();
    }
    int indiceCamiones=0;
    double pesoActual=0.0,pesoPermitido=pesomaximo;
    while (1) {
        void *datos=funcion_lee(arch);
        if (arch.eof()) break;
        double peso=0.0;
        void *nodo=calcula(datos,peso);
        void **aux2=(void **)temp[indiceCamiones];
        if (indiceCamiones==99) {
            cout<<"Aqui"<<endl;
        }
        if (peso>(pesomaximo-pesoActual)) {
            if (indiceCamiones<=numcaminiones) {
                indiceCamiones++;
                aux2[1]=referenciaDouble(pesoActual);
                if (indiceCamiones==numcaminiones) break;
                pesoActual=peso;
                push(temp[indiceCamiones],nodo,indiceCamiones);
            }
        }else {
            push(temp[indiceCamiones],nodo,indiceCamiones);
            pesoActual+=peso;
        }
    }
    flota=temp;
    // for (int i=0;i<numcaminiones;i++) {
    //     void **aux3=(void **)temp[i];
    //     cout<<*(double *)aux3[1]<<endl;
    // }
}
void muestracamiones(void *flota,int numcaminiones,void (*imprime)(ofstream &arch,void *nodo),const char *nombreArch) {
    ofstream arch(nombreArch,ios::out);
    if (not arch.is_open()) {
        cout<<"Error al abrir el archivo "<<nombreArch<<endl;
        exit(1);
    }
    void **temp=(void **)flota;
    for (int i=0;i<numcaminiones;i++) {
        void **datos=(void **)temp[i];
        arch<<"Camion  "<<i+1<<":"<<"Peso:"<<setw(10)<<*(double*)(datos[1])<<endl;
        imprime(arch,datos[0]);
    }
}
void push(void *&camion,void *carga,int indiceCamiones) {
    void **datosCamion=(void **)camion;
    if (datosCamion[0]==nullptr) {
        datosCamion[0]=carga;
    }else {
        void **datosCarga=(void **)carga;
        datosCarga[0]=datosCamion[0];
        datosCamion[0]=datosCarga;
    }
}
void **crearCamion() {
    void **camion=new void *[2];
    camion[0]=nullptr;
    camion[1]=nullptr;
    return camion;
}
double *referenciaDouble(double valor) {
    double *puntero=new double;
    *puntero=valor;
    return puntero;

}