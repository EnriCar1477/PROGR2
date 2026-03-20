//
// Created by Emyr11 on 10/09/2025.
//

#ifndef LAB02_2025_1_INFRACCIONES_H
#define LAB02_2025_1_INFRACCIONES_H
#define MAX_INFRACCIONES 200
#define MAX_DESC 201
#define MAX_TIPO 30
struct Infracciones {
    int *codigos;
    char **descripciones;
    char **tipos;
    double *valores;
    int cantidad;
};

void operator += (Infracciones &infracciones, const char *nombArch);

#endif //LAB02_2025_1_INFRACCIONES_H