#include <iostream>
#include <list>
#include <map>
using namespace  std;// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    map<int, double> mapaReales;

    mapaReales[4] = 56.78;
    mapaReales[7] = 78.38;
    mapaReales[1] = 15.67;
    list<int> listaReales;
    listaReales.push_front(2);
    listaReales.push_front(3);
    listaReales.push_front(4);
    listaReales.pop_front();
    for (int c:listaReales) {
        cout << c << endl;
    }

    for (auto x : mapaReales)
        cout << x.first << " " << x.second << endl;

    map<int, double>::iterator it = mapaReales.find(7);
    if (it != mapaReales.end())
        cout << it->second << endl;
    else
        cout << "No existe" << endl;
    cout<<mapaReales[1]<<endl;
    mapaReales.insert({5,32.54});
    cout<<mapaReales.begin()->first<<"  "<<mapaReales.at(5)<<endl;
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}