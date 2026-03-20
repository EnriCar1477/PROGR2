/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pe.edu.pucp.lab10_2025_1;

/**
 *
 * @author enric
 */
public class CarrilEmergencias extends Carril{
    @Override
    public String getTipo() {
        //String tipo="Emergencias";
        return "Emergencias";
    }

    @Override
    public double velocidadMaxima(int km) {
           return 80.00;
    }
    

    @Override
    public boolean velocidadPermitida(int km, double velocidad){
        if(velocidad>this.velocidadMaxima(km)) {
            return false;
        }
        else {
            return true;  
        }
    }
    @Override
    public boolean vehiculoPermitido(String categoria) {
        return categoria.contentEquals("Ambulancia") || categoria.contentEquals("Grua");
    }
    
}
