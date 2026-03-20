//
// Created by enric on 28/10/2025.
//

#ifndef INC_2024_2_POO_LAB6_CLIENTE_H
#define INC_2024_2_POO_LAB6_CLIENTE_H

#include <iostream>
using namespace std;
class Cliente {
private:
    int dni;
    char *nombre;
    char *distrito;
    double descuento;
    double totalPagado;
public:
    Cliente();
    ~Cliente();
    Cliente(int dni, char *nombre, char *distrito, double descuento);
    void copia(const Cliente &orig);
    void operator=(const Cliente &orig);
    void setDNI(int dni);
    void setNombre(char *nombre);
    void setDistrito(char *distrito);
    void setTotalPagado(double totalPagado);
    void setDescuento(double descuento);
    int getDNI();
    char *getNombre();
    char *getDistrito();
    double getTotalPagado();
    double getDescuento();
    friend void operator >>(ifstream &arch,Cliente &cliente);
    void actualizarTotal(int cant,int actual,double precio,double descuentoPlato);
    friend void operator <<(ofstream &arch,Cliente &cliente);

};


#endif //INC_2024_2_POO_LAB6_CLIENTE_H