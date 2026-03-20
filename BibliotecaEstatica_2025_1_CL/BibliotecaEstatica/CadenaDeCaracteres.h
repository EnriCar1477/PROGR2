//
// Created by enric on 27/08/2025.
//

#ifndef BIBLIOTECAESTATICA_2025_1_CL_CADENADECARACTERES_H
#define BIBLIOTECAESTATICA_2025_1_CL_CADENADECARACTERES_H
using namespace std;
typedef struct {
    char *cadena;
    int longitud;
    int capacidad;
}CadenaDeCaracteres;
void operator !(CadenaDeCaracteres &cadenaDeCaracteres);
void operator <=(CadenaDeCaracteres &cadenaDeCaracteres,char *dato);
void operator <=(CadenaDeCaracteres &cadenaDeCaracteres,int capacidad) ;
void operator <=(CadenaDeCaracteres &cadenaDeCaracteres1,CadenaDeCaracteres &cadenaDeCaracteres2);
void operator +=(CadenaDeCaracteres &cadenaDeCaracteres,char *dato);
void operator +=(CadenaDeCaracteres &cadenaDeCaracteres1,CadenaDeCaracteres &cadenaDeCaracteres2);

#endif //BIBLIOTECAESTATICA_2025_1_CL_CADENADECARACTERES_H