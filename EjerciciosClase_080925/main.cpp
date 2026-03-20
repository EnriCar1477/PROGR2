#include <iostream>
#include "ConjuntoArreglos.h"
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    ConjuntoArreglos conjuntoArreglos;
    cargar_conjunto_de_arreglos(conjuntoArreglos, "Alumnos-Cursos.csv");
    // reporte_de_alumnos(conjuntoArreglos, "Reporte_de_alumnos.txt");
    for (int i=0;i<conjuntoArreglos.cantidad;i++) {
        cout<<conjuntoArreglos.codigo[i]<<"  "<<conjuntoArreglos.nombre[i]<<endl;
        char **cursos=conjuntoArreglos.cursos[i];
        for (int j=0;cursos[j]!=nullptr;j++) {
            cout<<cursos[j]<<"  ";
        }
        cout<<endl;
    }
    return 0;

    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}