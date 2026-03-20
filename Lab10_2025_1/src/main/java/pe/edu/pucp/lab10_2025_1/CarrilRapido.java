/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pe.edu.pucp.lab10_2025_1;

/**
 *
 * @author enric
 */
public class CarrilRapido extends Carril{

    @Override
    public String getTipo() {
        return "Rapido";
    }

    @Override
    public double velocidadMaxima(int km) {
        if(km<=100){
            return 120;
        }else if(km<=200){
            return 160;
        }else{
            return 140;
        }
    }

    @Override
    public boolean velocidadPermitida(int km, double velocidad) {
        if(this.velocidadMaxima(km)<velocidad){
            return false;
        }else return true;
    }

    @Override
    public boolean vehiculoPermitido(String categoria) {
        return categoria.contentEquals("Camioneta") || categoria.contentEquals("Sedan")
                   || categoria.contentEquals("Coupe") || categoria.contentEquals("SUV");
    }
    
}
