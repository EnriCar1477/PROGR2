//
// Created by arian on 9/11/2025.
//

#include "Central.h"

#include "DroneEstacionamiento.h"
#include "DroneSemaforo.h"
#include "DroneVelocidad.h"

Central::Central() {
    abbDrones.inicializa();
}

Central::~Central() {
    abbDrones.eliminaArbol();
}

void Central::carga(const char*nombArch) {
    ifstream arch(nombArch,ios::in);
    if (not arch.is_open()) {
        cout<<"ERROR: Hubo un problema al abrir el archivo de drones."<<endl;
        exit(1);
    }


    char tipo[100];
    class Dron *dron;

    while (true) {
        arch.getline(tipo, 100,',');
        if (arch.eof())break;
        if (strcmp(tipo,"Estacionamiento")==0) {
            dron = new DroneEstacionamiento;

        } else if (strcmp(tipo,"Velocidad") == 0) {
            dron = new DroneVelocidad;

        } else if (strcmp(tipo, "Semaforo") == 0) {
            dron = new DroneSemaforo;

        } else {
            while (arch.get() != '\n');
        }
        dron->leer(arch);
        abbDrones.insertar(dron);
    }

}

void Central::insertar(class Dron *dron) {
    abbDrones.insertar(dron);
}

void Central::muestra(const char*nombArch) {
    ofstream arch(nombArch,ios::out);
    if (not arch.is_open()) {
        cout<<"ERROR: Hubo un inconveniente con la generacion del reporte."<<endl;
        exit(1);
    }

    arch<<setw(47)<<"REPORTE DE DRONES"<<endl;
    elaborarLinea(arch,85,'=');
    arch<<"Codigo"<<setw(20)<<"Ubicacion"<<setw(20)<<"Capacidad"<<setw(33)<<"Velocidad/Zona/Luz"<<endl;

    abbDrones.mostrar(arch);


}

void Central::elaborarLinea(ofstream &arch, int max, char c) {
    for (int i = 0; i < max;i++) {
        arch<<c;
    }
    arch<<endl;
}