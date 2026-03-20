//
// Created by enric on 12/11/2025.
//

#ifndef INC_2024_2_POLIMORFISMO_DETALLECOMANDADA_H
#define INC_2024_2_POLIMORFISMO_DETALLECOMANDADA_H

#include "Comunes.h"
#include "Proteina.h"

class DetalleComandada {
private:
    int id;
    Producto *pedido;
public:
    void setId(int id);

    void setProducto(Producto * prod);

    void leer(ifstream & arch, char tipo);

    bool verificar(int proteina);

    void imprimir(ofstream & arch);

    DetalleComandada();
    // ~DetalleComandada();
};


#endif //INC_2024_2_POLIMORFISMO_DETALLECOMANDADA_H