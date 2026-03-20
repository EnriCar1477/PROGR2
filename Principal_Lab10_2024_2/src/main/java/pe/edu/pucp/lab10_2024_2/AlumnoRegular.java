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
public class AlumnoRegular extends  Alumno{
    private String especialidad;
    private String facultad;
    
    @Override
    public void cargar(Scanner scanner) {
        super.cargar(scanner);
        especialidad=scanner.next();
        facultad=scanner.next();
    }

    @Override
    public void imprimir() {
        super.imprimir();
        /*resto+=String.format("%-10s %-40s %s %15s\n",facultad,
                especialidad,"N/A","N/A");*/
        System.out.printf("%-10s %-40s %s %15s\n",facultad,
                especialidad," N/A","N/A");
        
    }
  
    @Override
    public String getPais() {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    @Override
    public double calcularPrecio() {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    /**
     * @return the especialidad
     */
    public String getEspecialidad() {
        return especialidad;
    }

    /**
     * @param especialidad the especialidad to set
     */
    public void setEspecialidad(String especialidad) {
        this.especialidad = especialidad;
    }

    /**
     * @return the facultad
     */
    public String getFacultad() {
        return facultad;
    }

    /**
     * @param facultad the facultad to set
     */
    public void setFacultad(String facultad) {
        this.facultad = facultad;
    }
    
    
}
