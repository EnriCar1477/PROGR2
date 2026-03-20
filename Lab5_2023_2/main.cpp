#include <iostream>
#include "PilaConEnteros.h"
#include "PilaConRegistro.h"
#include "FlotaGenerica.h"

using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    int numcaminiones;
    double pesomaximo;
    void *flota;
    numcaminiones = 5;pesomaximo=10;
    cargacamiones(flota,numcaminiones,pesomaximo,leenumero,calculanumero,"numeros.txt");
    qsort(flota,numcaminiones,sizeof(void *),cmpnumero);
    muestracamiones(flota,numcaminiones,imprimenumero,"reportenum.txt");
    numcaminiones = 100;
    pesomaximo = 400;
    cargacamiones(flota, numcaminiones, pesomaximo, leeregistros, calculaRegistro, "Pedidos3.csv");
    muestracamiones(flota, numcaminiones, imprimeregistro, "ReporteRegistro.txt");
    qsort(flota,numcaminiones,sizeof(void *),cmpregistro);
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}