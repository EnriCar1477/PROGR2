//
// Created by enric on 7/10/2025.
//

#ifndef PRACTICA_POO_LAB5_2024_1_LISTA_H
#define PRACTICA_POO_LAB5_2024_1_LISTA_H


class Lista {
private:
    void *inicio;
    void *fin;
    void inicializar();
public:
    Lista();
    ~Lista();

    void set_inicio(void *nodo);
    void *get_inicio();
    void set_fin(void *nodo);
    void *get_fin();
    void cargarLista(void* (*funcion_lee)(std::ifstream &arch),const char *nombArch);
    bool listavacia();
    void insertar(void *nodo);
    void imprime(void (*funcion_imprime)(ofstream &arch,void *nodo),const char *nombArch);
    void combinar(const Lista &lista1,const Lista &lista2,bool (*funcion_comparar)(void *valor1,void *valor2));
};


#endif //PRACTICA_POO_LAB5_2024_1_LISTA_H