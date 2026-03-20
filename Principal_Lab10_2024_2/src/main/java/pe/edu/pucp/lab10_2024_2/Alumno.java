/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pe.edu.pucp.lab10_2024_2;

import java.util.Scanner;

/**
 *
 * @author enric
 */
public abstract class Alumno extends Registro{
    private int codigo;
    private String nombre;

    /**
     * @return the codigo
     */
    @Override
    public void cargar(Scanner scanner) {
        codigo=scanner.nextInt();
        nombre=scanner.next();
    }

    @Override
    public void imprimir() {
        System.out.printf("%-12d %-35s",codigo,nombre);
    }
    public int getCodigo() {
        return codigo;
    }
    

    /**
     * @param codigo the codigo to set
     */
    public void setCodigo(int codigo) {
        this.codigo = codigo;
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
    
    public abstract String getPais();
    public abstract double calcularPrecio();
    
}
