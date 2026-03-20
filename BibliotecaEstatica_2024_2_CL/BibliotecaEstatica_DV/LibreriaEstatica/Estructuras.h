//
// Created by enric on 27/08/2025.
//

#ifndef BIBLIOTECAESTATICA_DV_ESTRUCTURAS_H
#define BIBLIOTECAESTATICA_DV_ESTRUCTURAS_H

typedef  struct {
    char codigo[7];
    char nombre[60];
    double precio;
    int totalDePedidos;
    double totalRecaudado;
} Plato;

typedef struct {
    int dniDelCliente;
    char codigoDelPlato[7];
    int cantidad;
    double precio;
    char codigoDelRepartidor[7];
    double distanciaARecorrer;
}Pedido;

typedef struct {
    char codigo[7];
    int cantidad;
    double precio;
}PlatoSolicitado;

typedef  struct {
    int dniDelCliente;
    double distancia;
    PlatoSolicitado platosSolicitados[10];
    int cantidadDePlatos;
    double montoPorCobrar;
    double pagoPorEnvio;
}OrdenDeCompra;

typedef struct{
    char codigo[7];
    char nombre[60];
    char tipoDeVehiculo[15];
    OrdenDeCompra ordenesDeCompra[10];
    int cantidadDeOrdenes;
    double pagoPorEntregas;
} Repartidor;
#endif //BIBLIOTECAESTATICA_DV_ESTRUCTURAS_H