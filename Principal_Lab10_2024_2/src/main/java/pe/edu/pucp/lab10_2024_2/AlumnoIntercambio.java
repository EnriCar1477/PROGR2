/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pe.edu.pucp.lab10_2024_2;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author enric
 */
public class AlumnoIntercambio extends Alumno{
    private String paisOrigen;
    private List<String> idiomas;
    private int numeroDeSemestres;
    
    
    @Override
    public void cargar(Scanner scanner) {
        super.cargar(scanner);
        paisOrigen=scanner.next();
        while(!scanner.hasNextInt()){
            String nuevoIdioma=null;
            nuevoIdioma=scanner.next();
            idiomas.add(nuevoIdioma);
        }
        numeroDeSemestres=scanner.nextInt();
    }
    @Override
    public void imprimir() {
        super.imprimir();
        int contador=0;
        System.out.printf("%-15s %-30s %-15s","N/A","N/A",paisOrigen);
        String paises="[";
        for(String s:this.idiomas){
            paises+=String.format("%s",s);
            if(contador==this.idiomas.size()-1){
                paises+="]";
                break;
            }else{
                paises+=", ";
            }
            contador++;
        }
        System.out.printf("%-50s %s%s(%d)\n",paises," ","Semestres",numeroDeSemestres);   
    }
    
    public AlumnoIntercambio(){
        idiomas=new ArrayList();
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
     * @return the paisOrigen
     */
    public String getPaisOrigen() {
        return paisOrigen;
    }

    /**
     * @param paisOrigen the paisOrigen to set
     */
    public void setPaisOrigen(String paisOrigen) {
        this.paisOrigen = paisOrigen;
    }

    /**
     * @return the idiomas
     */
    public List<String> getIdiomas() {
        return idiomas;
    }

    /**
     * @param idiomas the idiomas to set
     */
    public void setIdiomas(List<String> idiomas) {
        this.idiomas = idiomas;
    }

    /**
     * @return the numeroDeSemestres
     */
    public int getNumeroDeSemestres() {
        return numeroDeSemestres;
    }

    /**
     * @param numeroDeSemestres the numeroDeSemestres to set
     */
    public void setNumeroDeSemestres(int numeroDeSemestres) {
        this.numeroDeSemestres = numeroDeSemestres;
    }
    
}
