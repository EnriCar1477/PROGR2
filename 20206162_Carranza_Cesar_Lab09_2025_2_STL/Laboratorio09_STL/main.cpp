#include <iostream>
#include "SistemaDeGestion.h"
//20206162 César Enrrique Carranza Jordan// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    SistemaDeGestion sistm;
    sistm.cargarCategorias("Categorias.csv");
    sistm.cargarComentarios("Comentarios.csv");
    sistm.cargarEtiquetas("Etiquetas.csv");
    // sistm.cargarStreamers("Streamers.csv");
    return 0;
    /*En el enunciado dice que se puede usar tanto char * como string estuve haciendolo con char * pero después los profesores
        indican que se tiene que hacer con string por eso es que no logré terminar por que tuve que cambiar o modificar
        lo que habia avanzado*/
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}