/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pe.edu.pucp.lab10_2025_1;


/**
 *
 * @author enric
 */
public abstract class Carril{
    public abstract String getTipo();
    public abstract double velocidadMaxima(int km);
    public abstract boolean velocidadPermitida(int km,double velocidad);
    public abstract boolean vehiculoPermitido(String categoria);
}
