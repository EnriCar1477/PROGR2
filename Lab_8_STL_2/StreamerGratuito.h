//
// Created by enric on 26/11/2025.
//

#ifndef LAB_8_STL_2_STREAMERGRATUITO_H
#define LAB_8_STL_2_STREAMERGRATUITO_H
#include "StreamerPagado.h"


class StreamerGratuito:public Streamer{
private:
    int fecha_fin_trial;
public:
    StreamerGratuito();
    int getFecha_fin_trial() const;
    void setFecha_fin_trial(int fecha_fin_trial);
    void leer(ifstream &arch) override;
    void imprimir(ofstream &arch) override;
};


#endif //LAB_8_STL_2_STREAMERGRATUITO_H