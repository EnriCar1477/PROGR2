//
// Created by cueva.r on 28/10/2025.
//

#ifndef POLIFARMACIA_FARMACIA_H
#define POLIFARMACIA_FARMACIA_H
#include "oferta.h"


class farmacia {
    public:
        farmacia();
        ~farmacia();
        void leerecetas();
        void imprimerecetas();
    private:
        oferta *loferta;
};


#endif //POLIFARMACIA_FARMACIA_H