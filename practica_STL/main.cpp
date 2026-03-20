#include <iostream>
#include <list>
using namespace std;// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    list<int> lista1 {1,2,3,5};
    // cout<<lista1.size()<<endl;
    // cout<<lista1.front()<<endl;
    // cout<<lista1.back()<<endl;
    // lista1.pop_front();
    // cout<<lista1.front()<<endl;
    // cout<<lista1.back()<<endl;
    // lista1.pop_back();
    // cout<<lista1.back()<<endl;
    lista1.insert(lista1.begin(),3);
    lista1.push_back(6);
    for (int i : lista1) {
        cout<<i<<endl;
    }

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}