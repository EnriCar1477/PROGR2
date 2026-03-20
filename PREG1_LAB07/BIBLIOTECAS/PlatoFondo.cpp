//
// Created by gesuby on 05/11/2025.
//
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
using namespace std;
#include "PlatoFondo.h"


PlatoFondo::PlatoFondo() {
    for (int i=0; i<4; i++) {
        proteina[i] = nullptr;
    }
}

PlatoFondo::~PlatoFondo() {
    for (int i=0; i<4; i++) {
        if (proteina[i]!=nullptr)delete proteina[i];
    }
}