//
// Created by enric on 11/11/2025.
//

#include "Central.h"



void Central::carga() {
    ifstream arch;
    aperturaIfstream(arch,"Drones.csv");
    char tipo[20];
    while (true) {
        arch.getline(tipo,20,',');
        if (arch.eof()) break;
        Dron *drone;
        if (strcmp(tipo,"Velocidad")==0) {
            drone=new DroneVelocidad;
        }else if (strcmp(tipo,"Semaforo")==0) {
            drone=new DroneSemaforo;
        }else {
            drone=new DroneEstacionamiento;
        }
        drone->leer(arch);
        arch.get();
        ADrones.insert(drone);
        // delete drone;
    }
}

void Central::actualizar() {
    int cantidad_Semaforos=0;
    int cantidad_Estacionamientos=0;
    ADrones.contar(cantidad_Estacionamientos,cantidad_Semaforos);
    cantidad_Estacionamientos/=2;
    cantidad_Semaforos/=2;
    ADrones.AplicarActualizacion(cantidad_Estacionamientos,cantidad_Semaforos);
}

void Central::muestra() {
    ofstream arch("Report.txt",ios::out);
    if (!arch.is_open()) {
        cout<<"Error al abrir el archivo Report.txt"<<endl;
        exit(1);
    }
    ADrones.imprimir(arch);
}

