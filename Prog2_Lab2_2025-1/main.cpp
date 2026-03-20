#include <iostream>
#include  "Faltas.h"
#include  <cstring>
#include <fstream>
using namespace std;
int main() {
    ifstream archConductores("Conductores.csv",ios::in);
    if (not archConductores.is_open()) {
        cout<<"Error al abrir el archivo Conductores.csv"<<endl;
        exit(10);
    }
    ifstream archInfraccioens("Infracciones.csv",ios::in);
    if (not archInfraccioens.is_open()) {
        cout<<"Error al abrir el archivo Infracciones.csv"<<endl;
        exit(10);
    }
    ifstream archFaltas("Faltas.csv",ios::in);
    if (not archFaltas.is_open()) {
        cout<<"Error al abrir el archivo Faltas.csv"<<endl;
        exit(10);
    }
    Faltas faltas;
    faltas.conductores+=archConductores;
    faltas.infracciones+=archInfraccioens;
    faltas.placas=new char **[faltas.conductores.cantidad];
    faltas.capacidades=new int[faltas.conductores.cantidad];
    for (int i=0;i<faltas.conductores.cantidad;i++) {
        faltas.placas[i]=nullptr;
        faltas.capacidades[i]=0;
    }
    cargar_faltas_de_los_operadores(faltas);
    for (int i=0;i<faltas.conductores.cantidad;i++) {
        char **placas=faltas.placas[i];
        for (int j=0;i<faltas.capacidades[i] && placas[j]!=nullptr;j++) {
            cout<<placas[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}