#include <iostream>
#include "BibliotecaGenerica.h"
#include "ListaconEnteros.h"
#include "ListaconRegistros.h"
using namespace std;// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    void *lista;
    crearlista(lista,leenumeros,"numeros1.txt");
    cargarlista(lista,compruebanumero,leerenumero,"numeros2.txt");
    muestralista(lista,imprimenumeros,"repnum.txt");
    crearlista(lista,leeregistros,"Repartidores.csv");
    cargarlista(lista,compruebaregistro,leeordenes,"Ordenes.csv");
    muestralista(lista,imprimimeregistros,"repregistros.txt");
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}