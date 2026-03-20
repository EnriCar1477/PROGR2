#include <iostream>
#include <map>

#include "medico.h"

using namespace  std;

int main() {
    map<int,medico> mmedicos;

    ifstream arch("medicos.csv",ios::in);
    if (!arch) {
        cout << "No se puede abrir el archivo";
        exit(1);
    }
    while (1) {
        medico aux;
        arch >> aux;
        if (arch.eof())break;
        mmedicos[aux.GetCodigo()]=aux;
    }

    ofstream repo("reporte.txt",ios::out);
    if (!repo) {
        cout << "No se puede abrir el archivo reporte";
        exit(1);
    }
    for ( map<int,medico>::iterator it=mmedicos.begin();
        it!=mmedicos.end(); it++ ) {
        //repo << it->first << endl;
        it->second.imprime(repo);
    }

    // HACIENDO TRAVESURAS

    map<medico,medico> mmedicos2;
    ifstream arch2("medicos.csv",ios::in);
    if (!arch2) {
        cout << "No se puede abrir el archivo";
        exit(1);
    }
    while (1) {
        medico aux;
        arch2 >> aux;
        if (arch2.eof())break;
        mmedicos2[aux]=aux;
    }
    ofstream repo2("reporte2.txt",ios::out);
    if (!repo2) {
        cout << "No se puede abrir el archivo reporte";
        exit(1);
    }
    for ( map<medico,medico>::iterator it=mmedicos2.begin();
        it!=mmedicos2.end(); it++ ) {
        //repo << it->first << endl;
        it->second.imprime(repo2);
        }

    return 0;
}