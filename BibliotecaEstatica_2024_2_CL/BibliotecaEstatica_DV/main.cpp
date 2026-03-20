#include <iostream>
#include <fstream>
#include <cassert>
#include <cstring>
#include "LibreriaEstatica/Estructuras.h"
#include "Lectura.h"
#include "Operaciones.h"
#include "Funciones.h"
#define MAX 300
using namespace std;


// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    ifstream archPlato("PlatosOfrecidos.csv",ios::in);
    if (not archPlato.is_open() ) {
        cout<<"Error al abrir archivo PlatosOfrecidos.csv"<<endl;
        exit(1);
    }
    ifstream archRepartidores("RepartidoresContratados.csv",ios::in);
    if (not archRepartidores.is_open() ) {
        cout<<"Error al abrir archivo RepartidoresContratados.csv"<<endl;
        exit(1);
    }
    ifstream archOrdenes("OrdenesDeCompra.txt",ios::in);
    if (not archPlato.is_open() ) {
        cout<<"Error al abrir archivo OrdenesDeCompra.txt"<<endl;
        exit(1);
    }
    Plato arregloPlato[MAX]{};
    Repartidor arregloRepartidor[MAX]{};
    Pedido pedido;
    cargarPlatos(archPlato,arregloPlato);
    assert(arreglo)
    cargarRepartidores(archRepartidores,arregloRepartidor);
    // while (true) {
    //     archOrdenes >> pedido;
    //     if (archOrdenes.eof()) break;
    //     while(pedido<=arregloPlato);
    //     while (arregloRepartidor<=pedido);
    // }
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}