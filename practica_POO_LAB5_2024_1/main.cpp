#include <iostream>
#include <fstream>
#include "FuncionesAuxiliares.h"
#include "Lista.h"
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    Lista lista1;
    lista1.cargarLista(leenum,"RegistroNum1.txt");
    lista1.imprime(imprimenum,"Repnum1.txt");
    Lista lista2;
    lista2.cargarLista(leenum,"RegistroNum2.txt");
    lista2.imprime(imprimenum,"Repnum2.txt");
    Lista lista3;
    lista3.combinar(lista1,lista2,cmpnum);
    lista3.imprime(imprimenum,"RepnumFinal.txt");
    lista1.cargarLista(leeregistro,"Pedidos31.csv");
    lista1.imprime(imprimeregistro,"Repnumregistro1.txt");
    lista2.cargarLista(leeregistro,"Pedidos32.csv");
    lista2.imprime(imprimeregistro,"Repnumregistro2.csv");
    lista3.combinar(lista1,lista2,cmpregistros);
    lista3.imprime(imprimeregistro,"RepnumregistroFinal.csv");
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}