#include <iostream>
#include "Restaurante.h"
using namespace std;
int main() {
    Restaurante restaurante;
    restaurante.cargar_comandas();
    restaurante.actualizar_comandas();
    restaurante.imprimir();
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}