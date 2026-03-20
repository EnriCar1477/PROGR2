#include <iostream>
#include <fstream>
#include "Tablas.h"
using namespace std;// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    Tablas tabla;
    inicializar_tabla(tabla);
    insertar_columna(tabla,"INT");
    insertar_columna(tabla,"VARCHAR");
    insertar_columna(tabla,"VARCHAR");
    insertar_columna(tabla,"DOUBLE");
    leerInfracciones("infracciones.csv",tabla);
    void *cursor=abrir_cursor(tabla);
    while (hay_siguiente(cursor)) {
        int id=*(int *)obtener_campo(cursor,1);
        char *descripcion=(char *)obtener_campo(cursor,2);
        char *tipo=(char *)obtener_campo(cursor,3);
        double valor=*(double *)obtener_campo(cursor,4);
        cout<<id<<";"<<descripcion<<";"<<tipo<<";"<<valor<<endl;
    }
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}