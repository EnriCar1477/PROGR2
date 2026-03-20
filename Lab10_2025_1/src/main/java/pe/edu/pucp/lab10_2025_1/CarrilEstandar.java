
 /* Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pe.edu.pucp.lab10_2025_1;

/**
 *
 * @author enric
 */
public class CarrilEstandar extends Carril{
    @Override
    public String getTipo() {
        return "Estandar";
    }

    @Override
    public double velocidadMaxima(int km){
        if(km<=100){
            return 80;
        }else if(km<=200){
            return 120;
        }else{
            return 100;
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
        return categoria.contentEquals("Ambulancia") || categoria.contentEquals("Motocicleta")
                   || categoria.contentEquals("Coupe") || categoria.contentEquals("SUV") ||
                    categoria.contentEquals("Camioneta") || categoria.contentEquals("Sedan");
    }
    
}