//
// Created by Emyr11 on 10/09/2025.
//

#ifndef LAB02_2025_1_CONDUCTORES_H
#define LAB02_2025_1_CONDUCTORES_H
#define MAX_CONDUC 200
#define MAX_NOMBRE 50
struct Conductores {
    int *dnis;
    char **nombres;
    int cantidad;
};

void operator += (Conductores &conductores,const char *nombArch);

#endif //LAB02_2025_1_CONDUCTORES_H