/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pe.edu.pucp.lab10_2025_1;

import java.util.Scanner;

/**
 *
 * @author enric
 */
public class Propietario extends Registro  {
    private int dni;
    private String nombre;
    private String apellidos;
    private String direccion;
    
    public Propietario(){
        this.apellidos=null;
        this.direccion=null;
        this.dni=-1;
        this.nombre=null;
    }
    @Override
    public void cargar(Scanner scanner) {
        this.dni = scanner.nextInt();
        this.nombre = scanner.next();
        this.apellidos = scanner.next();
        this.direccion = scanner.next();
        
    }
    /*@Override
    public boolean cargar(Scanner scanner) {
        if (scanner.hasNextInt()) {
            this.dni = scanner.nextInt();
            this.nombre = scanner.next();
            this.apellidos = scanner.next();
            this.direccion = scanner.next();
            
            return true;
        }
        scanner.next();
        return false;
    }*/


    @Override
    public void imprimir() {
        System.out.println(this);

    }

    /**
     * @return the dni
     */
    public int getDni() {
        return dni;
    }

    /**
     * @param dni the dni to set
     */
    public void setDni(int dni) {
        this.dni = dni;
    }

    /**
     * @return the nombre
     */
    public String getNombre() {
        return nombre;
    }

    /**
     * @param nombre the nombre to set
     */
    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    /**
     * @return the apellidos
     */
    public String getApellidos() {
        return apellidos;
    }

    /**
     * @param apellidos the apellidos to set
     */
    public void setApellidos(String apellidos) {
        this.apellidos = apellidos;
    }

    /**
     * @return the direccion
     */
    public String getDireccion() {
        return direccion;
    }

    /**
     * @param direccion the direccion to set
     */
    public void setDireccion(String direccion) {
        this.direccion = direccion;
    }
    
    @Override
    public String toString() {
        String resultado = "";
        resultado += String.format("║ DNI: %-45d ║\n", dni);
        resultado += String.format("║ Nombres: %-41s ║\n", nombre);
        resultado += String.format("║ Apellidos: %-39s ║\n", apellidos);
        resultado += String.format("║ Dirección: %-39s ║\n", direccion);
        return resultado;
    }
    
}
