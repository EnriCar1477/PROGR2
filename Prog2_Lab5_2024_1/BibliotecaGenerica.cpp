#include <fstream>
#include "BibliotecaGenerica.h"
#include "LibreriaApertura/AperturaDeArchivos.h"

using namespace std;
void crealista(void *&pedidos, void *(*funcion_de_lectura)(ifstream &), const char *nombre_de_archivo) {
    ifstream archivo;
    AperturaDeUnArchivoDeTextosParaLeer(archivo,nombre_de_archivo);
    pedidos=nullptr;
    while (true) {
        void *ptrDato=funcion_de_lectura(archivo);
        if (ptrDato==nullptr) break;
        insertalista(pedidos,ptrDato);
    }
}
void insertalista(void *&pedidos, void *ptrDato) {
    void **nodo=new void*[2];
    nodo[0]=ptrDato;
    nodo[1]=nullptr;
    void **lista;
    if (pedidos==nullptr) {
        lista=new void*[2];
        lista[0]=nodo;
        lista[1]=nodo;
        pedidos=lista;
    }else {
        lista=(void **)pedidos;
        void **ultimoNodo=(void **)lista[1];
        ultimoNodo[1]=nodo;
        lista[1]=nodo;
        // pedidos=lista;
    }
}
void imprimelista(void *pedidos, void(*funcion_de_impresion)(ofstream &, void *) , const char *nombre_de_archivo) {
    ofstream archivo;
    AperturaDeUnArchivoDeTextosParaEscribir(archivo,nombre_de_archivo);
    void **lista;
    lista=(void **)pedidos;
    void **nodo=(void **)lista[0];
    while (nodo!=nullptr) {
        funcion_de_impresion(archivo,nodo[0]);
        nodo=(void **)nodo[1];
    }
}
void combinalista(void *pedidos1, void *pedidos2, void *&pedidosfinal, bool(*funcion_de_comparacion)(void *, void*)) {
    void **lista1=(void **)pedidos1;
    void **lista2=(void **)pedidos2;
    void **nodo1=(void **)lista1[0];
    void **nodo2=(void **)lista2[0];
    pedidosfinal=nullptr;
    while (nodo1!=nullptr || nodo2!=nullptr) {
        if (nodo1==nullptr and nodo2!=nullptr) {
            insertalista(pedidosfinal,nodo2[0]);
            nodo2=(void **)nodo2[1];
        }else if (nodo2==nullptr and nodo1!=nullptr) {
            insertalista(pedidosfinal,nodo1[0]);
            nodo1=(void **)nodo1[1];
        }else {
            bool menor=funcion_de_comparacion(nodo1[0],nodo2[0]);
            if (menor) {
                insertalista(pedidosfinal,nodo1[0]);
                nodo1=(void **)nodo1[1];
            }else {
                insertalista(pedidosfinal,nodo2[0]);
                nodo2=(void **)nodo2[1];
            }
        }
    }
}
// void crealista(void *&pedidos, void *(*funcion_de_lectura)(ifstream &), const char *nombre_de_archivo) {
//     ifstream archDatos;
//     AperturaDeUnArchivoDeTextosParaLeer(archDatos, nombre_de_archivo);
//
//     pedidos = nullptr;
//     while (true) {
//         void *ptrDato = funcion_de_lectura(archDatos);
//         if (archDatos.eof())
//             break;
//         insertalista(pedidos, ptrDato);
//     }
//
//     archDatos.close();
// }

//esta función inserta al final
//tarea: hacer lo mismo pero insertando al inicio
//tarea2: hacer lo mismo insertando en orden























// void insertalista(void *&pedidos, void *ptrDato) {
//     //creamos un nuevo nodo
//     void **nuevo_nodo = new void *[2];
//     nuevo_nodo[0] = ptrDato;
//     nuevo_nodo[1] = nullptr;
//
//     //verificamos que no esté la lista vacia
//     if (pedidos==nullptr) {
//         //la lista está vacia, no tiene el bloque de la cabeza y de la cola
//         //se debe crear
//         void **lista = new void*[2];
//         lista[0] = nuevo_nodo; //cabeza de la lista
//         lista[1] = nuevo_nodo; //cola de la lista
//         pedidos = lista;
//     } else {
//         void **lista = (void **)pedidos;
//         void *fin_lista = lista[1];
//         void **ultimo_nodo = (void**)fin_lista;
//         ultimo_nodo[1] = nuevo_nodo;
//         lista[1] = nuevo_nodo;
//     }
// }
//
// void imprimelista(void *pedidos, void(*funcion_de_impresion)(ofstream &, void *), const char *nombre_de_archivo) {
//     ofstream archReporte;
//     AperturaDeUnArchivoDeTextosParaEscribir(archReporte, nombre_de_archivo);
//
//     //Implementación del recorrido secuencial
//     if (pedidos != nullptr) {
//         void **lista = (void **)pedidos;
//         void *inicio_lista = lista[0];
//         void **nodo = (void **)inicio_lista;
//         while (nodo != nullptr) {
//             void *ptrDato = nodo[0];
//             funcion_de_impresion(archReporte, ptrDato);
//             nodo = (void **)nodo[1]; //simula el nodo->ptrSig
//         }
//     }
//     archReporte.close();
// }
//
// void combinalista(void *pedidos1, void *pedidos2, void *&pedidosfinal, bool(*funcion_de_comparacion)(void *, void*)) {
//
//     //TODO
// }