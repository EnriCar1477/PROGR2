//
// Created by cueva.r on 28/10/2025.
//

#include "oferta.h"

#include "conreceta.h"
#include "sinreceta.h"

oferta::oferta() {
    poferta = nullptr;
}
oferta::~oferta() {
    //delete poferta;
}

void oferta::operator=(const oferta &ofe) {
    poferta = ofe.poferta;
}


void oferta::leeoferta(ifstream &arch, int codigo, int fecha,int cant) {
    if ((codigo/10000)%2==0)
        poferta = new conreceta;
    else
        poferta = new sinreceta;

    poferta->leemedicamento(arch,codigo,fecha,cant);

}
bool oferta::ser() {
    if (poferta == nullptr)
        return false;
    return true;
}

void oferta::imprimeoferta(ofstream &arch) {
    poferta->imprimemedicamento(arch);
}