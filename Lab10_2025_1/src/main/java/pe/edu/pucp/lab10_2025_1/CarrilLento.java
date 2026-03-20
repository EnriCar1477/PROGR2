/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pe.edu.pucp.lab10_2025_1;

/**
 *
 * @author enric
 */
public class CarrilLento extends Carril{

    @Override
    public String getTipo() {
        return "Lento";
    }

    @Override
    public double velocidadMaxima(int km) {
        return 60.00;
    }

    @Override
    public boolean velocidadPermitida(int km, double velocidad) {
        if(this.velocidadMaxima(km)<velocidad){
            return false;
        }else return true;
    }

    @Override
    public boolean vehiculoPermitido(String categoria) {
         return categoria.contentEquals("Camion") || categoria.contentEquals("Trailer")
                   || categoria.contentEquals("Tractor");
    }
    
}
