#include <iostream>

#include "BibliotecaEstatica/CadenaDeCaracteres.h"

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the <b>lang</b> variable name to see how CLion can help you rename it.
    CadenaDeCaracteres cadena_de_caracteres1,cadena_de_caracteres2,cadena_de_caracteres3;
    !cadena_de_caracteres1;
    !cadena_de_caracteres2;
    !cadena_de_caracteres3;
    cadena_de_caracteres2<="HOLA";
    cadena_de_caracteres3<="Como estas";
    cadena_de_caracteres1<=cadena_de_caracteres2;
    cadena_de_caracteres1+=cadena_de_caracteres3;
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}