//
// Created by cueva.r on 28/10/2025.
//

#ifndef POLIFARMACIA_OFERTA_H
#define POLIFARMACIA_OFERTA_H
#include "medicamento.h"
#include <fstream>

using namespace  std;
class oferta {
    public:
        oferta();
        ~oferta();
        void operator=(const oferta &);
        void leeoferta(ifstream &,int,int,int);
        void imprimeoferta(ofstream &);
        bool ser();
    private:
        medicamento *poferta;
};


#endif //POLIFARMACIA_OFERTA_H