#include <iostream>
#include "cafeteria.h"
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    void *inventario,*menu;
    cargarInventario("inventario.csv",inventario);
    cargarMenu("menu.csv",menu);
    actualizarMenu("insumos-bebidas.csv",inventario,menu);
    void **tempMenu=(void**)menu;
    for (int i=0;tempMenu[i]!=nullptr;i++) {
        void **elementos=(void **)tempMenu[i];
        cout<<(char *)elementos[0]<<"  " <<(char *)elementos[1]<<"  "<<(char *)elementos[2]<<"   "<<
                (char *)elementos[3]<<*(bool *)elementos[4]<<"  "<<
                    *(double*)elementos[5]<<"   "<<*(int*)elementos[6]<<endl;
    }
    void **tempInventario=(void**)inventario;
    for (int i=0;tempInventario[i]!=nullptr;i++) {
        void **elementos=(void **)tempInventario[i];
        cout<<(char *)elementos[0]<<"  " <<(char *)elementos[1]<<"  "<<*(double *)elementos[2]<<"   "<<
                *(double *)elementos[3]<<(char *)elementos[4]<<endl;
    }
    // reporteMenu("menu.txt",menu);
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}


