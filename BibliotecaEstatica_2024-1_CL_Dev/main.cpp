#include <iostream>
#include <cstring>
#include "LibreriaApertura/AperturaDeArchivos.h"
#include "LibreriaEstatica/Estructuras.h"
#include "LibreriaEstatica/Overload.h"
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    ifstream archLibros,archClientes,archPedidos;
    AperturaDeUnArchivoDeTextosParaLeer(archLibros,"Libros.csv");
    if (not archLibros.is_open()) {
        cout<<"Error al abrir el archivo Libros.csv"<<endl;
        exit(1);
    }
    AperturaDeUnArchivoDeTextosParaLeer(archClientes,"Clientes.csv");
    if (not archClientes.is_open()) {
        cout<<"Error al abrir el archivo Clientes.csv"<<endl;
        exit(1);
    }
    AperturaDeUnArchivoDeTextosParaLeer(archPedidos,"Pedidos.txt");
    if (not archPedidos.is_open()) {
        cout<<"Error al abrir el archivo Pedidos.txt"<<endl;
        exit(1);
    }
    Libro arregloLibros[300]{};
    Cliente arregloClientes[300]{};
    int i=0,j;
    while (archLibros>>arregloLibros[i]) {
        i++;
    }
    strcpy(arregloLibros[i].codigo,"FIN");
    i=0;
    while (archClientes>>arregloClientes[i]) {
        i++;
    }
    LibroSolicitado libroSolicitado;
    int dni,numeroDePedido;
    while (true) {
        archPedidos>>numeroDePedido;
        if (archPedidos.eof()) break;
        archPedidos.get();
        archPedidos>>dni;
        for (j=0;j<i;j++) {
            if (arregloClientes[j].dni==dni) break;
        }
        while (archPedidos.get()!='\n') {
            libroSolicitado.numeroDePedido=numeroDePedido;
            archPedidos>>libroSolicitado.codigoDelLibro;
            if (libroSolicitado>>arregloLibros) {
                if (arregloClientes[j]<<libroSolicitado) {
                      ++arregloClientes[j];
                }
            }
            // archPedidos.getline(libroSolicitado.codigoDelLibro,8,' ');
        }

    }

    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}