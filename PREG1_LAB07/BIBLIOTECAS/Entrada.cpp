//
// Created by gesuby on 05/11/2025.
//
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
using namespace std;
#include "Entrada.h"


Entrada::Entrada() {
    picante = false;
}
Entrada::~Entrada() {

}

bool Entrada::is_picante() const {
    return picante;
}

void Entrada::set_picante(bool picante) {
    this->picante = picante;
}
