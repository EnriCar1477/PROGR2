#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include "medico.h"

using namespace std;

int main() {
    vector<medico> vmedico;
    char cad[100];
    ifstream arch("medicos.csv",ios::in);
    if (!arch) {
        cout << "No se puede abrir el archivo";
        exit(1);
    }
    while (1) {
        medico aux;
        arch >> aux;
        if (arch.eof())break;
        vmedico.push_back(aux);
    }
    sort(vmedico.begin(),vmedico.end());

    ofstream repo("reporte.txt",ios::out);
    if (!repo) {
        cout << "No se puede abrir el archivo reporte";
        exit(1);
    }
    for (int i=0; i<vmedico.size(); i++) {
        vmedico[i].GetNombre(cad);
        repo <<setw(10)<< vmedico[i].GetCodigo();
        repo << setw(50)<< cad <<endl;
    }
    vmedico.erase(vmedico.begin()+10,vmedico.end());
    repo << endl;
    for (int i=0; i<vmedico.size(); i++) {
        vmedico[i].GetNombre(cad);
        repo <<setw(10)<< vmedico[i].GetCodigo();
        repo << setw(50)<< cad <<endl;
    }
    // haciendo travesuras

    vector<medico> vmedico2;


    return 0;
}