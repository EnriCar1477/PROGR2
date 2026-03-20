//
// Created by enric on 26/11/2025.
//

#ifndef LAB_8_STL_2_STREAMERPAGADP_H
#define LAB_8_STL_2_STREAMERPAGADP_H
#include "Streamer.h"


class StreamerPagado:public Streamer{
private:
        int fecha_inicio_plan;
public:
        StreamerPagado();
        int getFechaInicioPlan() const;
        void setFechaInicioPlan(int fechaInicioPlan);
        void leer(ifstream &arch) override;
        void imprimir(ofstream &arch) override;
};


#endif //LAB_8_STL_2_STREAMERPAGADP_H