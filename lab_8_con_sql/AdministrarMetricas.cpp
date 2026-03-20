//
// Created by enric on 25/11/2025.
//

#include "AdministrarMetricas.h"

#include <algorithm>
#include "MetricaBasica.h"
#include "MetricaCalidad.h"
#include "MetricaEngagement.h"
bool comparar(Metrica *a,Metrica *b) {
    int pa =a->getId();
    int pb = b->getId();
    if (pa != pb) return pa < pb;                    // por tipo
    //     // segundo criterio: descripción ascendente (trim y case-insensitive si quieres)
    std::string da = colecCadena(a->getDescripcion());
    std::string db = b->getDescripcion();
         // opcional: transformar a minúsculas y quitar espacios
    return da < db;
}
void AdministrarMetricas::cargarArchivo(const char *nomArch) {
    ifstream archivo(nomArch,ios::in);
    if (!archivo.is_open()) {
        cout<<"Error al abrir el archivo "<<nomArch<<endl;
        exit(1);
    }
    char tipo[20];
    while(true) {
        Metrica *metrica;
        archivo.getline(tipo,20,',');
        if (archivo.eof()) break;
        if (strcmp(tipo,"ENGAGEMENT")==0) {
            metrica=new MetricaEngagement();
        }
        else if(strcmp(tipo,"BASIC")==0) {
            metrica=new MetricaBasica();
        }else metrica=new MetricaCalidad();
        metrica->leer(archivo);
        this->listaMetricas.push_back(metrica);
    }
    list<Metrica *>::iterator it = this->listaMetricas.begin();
    // list<Metrica *>::iterator last = this->listaMetricas.end();
    listaMetricas.sort(comparar);

}

void AdministrarMetricas::generarReporte(const char *nomArch) {
    ofstream archivo(nomArch,ios::out);
    if (!archivo.is_open()) {
        cout<<"Error al abrir el archivo "<<nomArch<<endl;
        exit(1);
    }
    int contador=0;
    for (Metrica *metrica:this->listaMetricas) {
        metrica->imprimir(archivo);
        // if (contador==1) {
        //     cout<<"g"<<endl;
        // }
        // contador++;
    }
}
