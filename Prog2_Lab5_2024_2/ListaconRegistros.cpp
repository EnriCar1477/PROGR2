//
// Created by enric on 23/09/2025.
//
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
#include "ListaconEnteros.h"
#include "ListaconRegistros.h"
#define MAX 100
using namespace std;
void *leeregistros(ifstream &archivo) {
    char codigobuffer[MAX];
    char nombrebuffer[MAX],vehiculo[MAX];
    archivo.getline(codigobuffer,MAX,',');
    if (archivo.eof()) return nullptr;
    archivo.getline(nombrebuffer,MAX,',');
    while (archivo.get()!='\n');
    void **datos=new void *[2];
    datos[0]=extraerCadena(codigobuffer);
    datos[1]=extraerCadena(nombrebuffer);
    void *puntero=datos;
    return puntero;
}
void* leeordenes(ifstream& archivo) {
    int dni,cantidad;
    char *plato,*repartidor,platobuffer[MAX],repartidorbuffer[MAX];
    archivo >> dni;
    if (archivo.eof()) return nullptr;
    archivo.get();
    archivo>> cantidad;
    archivo.get();
    archivo.getline(platobuffer,100,',');
    archivo.getline(repartidorbuffer,100,'\n');
    plato=extraerCadena(platobuffer);
    repartidor=extraerCadena(repartidorbuffer);
    void **dupla=new void *[2];
    dupla[0]=repartidor;
    void **datos=new void *[3];
    datos[0]=referenciaEnteros(dni);
    datos[1]=referenciaEnteros(cantidad);
    datos[2]=plato;
    dupla[1]=datos;
    void *puntero=dupla;
    return puntero;
}
bool compruebaregistro(void *a,void *b) {
    void **duplaA=(void **)a;
    void **duplaB=(void **)b;
    void **datosA=(void **)duplaA[0];
    if (strcmp((char *)datosA[0],(char *)duplaB[0])==0) return true;
    else return false;

}
char *extraerCadena(char *cadena) {
    char *nueva_cadena=new char[strlen(cadena)+1];
    strcpy(nueva_cadena,cadena);
    return nueva_cadena;
}
void imprimimeregistros(ofstream &archivo,void *nodo) {
    void **dupla=(void **)nodo;
    void **datosRepartidor=(void **)dupla[0];
    archivo<<(char *)datosRepartidor[0]<<setw(7)<<" "<<(char *)datosRepartidor[1]<<endl;
    archivo<<"Ordenes"<<endl;
    void **arreglo=(void **)dupla[1];
    for (int i=0;i<20;i++) {
        if (arreglo[i]==nullptr) {
            break;
        }
        void **informacion=(void **)arreglo[i];
        archivo<<*(int *)informacion[0]<<"  "<<*(int *)informacion[1]<<setw(5)<<" "<<(char *)informacion[2]<<endl;
    }
    archivo<<endl;

}