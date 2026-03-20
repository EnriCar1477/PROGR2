//
// Created by enric on 14/09/2025.
//

#ifndef PROG2_LAB3_2025_1_TABLAS_H
#define PROG2_LAB3_2025_1_TABLAS_H
typedef struct {
    void* columnas;
    void* filas;
    int cantidad_columnas;
    int cantidad_filas;
    int capacidad_columnas;
    int capacidad_filas;
}Tablas;
void inicializar_tabla(Tablas &tabla) ;
void insertar_fila(Tablas &tabla);
void insertar_columna(Tablas &tabla,const char *tipo);
void incrementarColumnas(void *&columnas,int &cantidad,int &capacidad);
void incrementarFila(void *&fila,int &cantidad,int &capacidad);
char *extraerCadena(const char* cadena);
void leerInfracciones(const char *nomArch,Tablas &tabla);
void insertarCampo(Tablas tabla,void **&fila,int numeroCampo,void *dato) ;
void *abrir_cursor(Tablas tabla) ;
bool hay_siguiente(void *&cursor);
void *obtener_campo(void *cursor,int numeroCcampo) ;
void *retornar_referencia_real(double r);
void *retornar_referencia_entero(int e);
#endif //PROG2_LAB3_2025_1_TABLAS_H