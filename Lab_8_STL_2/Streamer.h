//
// Created by enric on 26/11/2025.
//

#ifndef LAB_8_STL_2_STREAMER_H
#define LAB_8_STL_2_STREAMER_H
#include "Metrica.h"
class Streamer {
private:
    int id;
    char *cuenta;
    char *categoria;
    int seguidores;
    vector<class Metrica *> metricas;
public:
    Streamer();
    ~Streamer();
    Streamer(const Streamer &s);
    virtual void operator =(const Streamer &s);
    int getId() const ;
    char *getCuenta() const;
    char *getCategoria() const;
    int getSeguidores() const;
    void setId(int id);
    void setCuenta(char *cuenta);
    void setCategoria(char *categoria);
    void setSeguidores(int seguidores);
    virtual void leer(ifstream &arch);
    void agregar(Metrica *metrica);
    virtual void imprimir(ofstream &arch);
    void imprimirMetricas(ofstream &arch);
    void ordenarMetricas();
};


#endif //LAB_8_STL_2_STREAMER_H