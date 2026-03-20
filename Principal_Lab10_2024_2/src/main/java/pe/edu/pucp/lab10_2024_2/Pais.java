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
public class Pais extends Registro{
    private String nombre;
    private String moneda;
    private double tipoCambio;
    private String idioma;

    @Override
    public void cargar(Scanner scanner) {
        nombre=scanner.next();
        moneda=scanner.next();
        tipoCambio=scanner.nextDouble();
        idioma=scanner.next();
    }

    @Override
    public void imprimir() {
        System.out.println(this);
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
     * @return the moneda
     */
    public String getMoneda() {
        return moneda;
    }

    /**
     * @param moneda the moneda to set
     */
    public void setMoneda(String moneda) {
        this.moneda = moneda;
    }

    /**
     * @return the tipoCambio
     */
    public double getTipoCambio() {
        return tipoCambio;
    }

    /**
     * @param tipoCambio the tipoCambio to set
     */
    public void setTipoCambio(double tipoCambio) {
        this.tipoCambio = tipoCambio;
    }

    /**
     * @return the idioma
     */
    public String getIdioma() {
        return idioma;
    }

    /**
     * @param idioma the idioma to set
     */
    public void setIdioma(String idioma) {
        this.idioma = idioma;
    }
    
    @Override
    public String toString(){
        String resultado="";
        resultado+=String.format("Nombre: %-15s\n",nombre);
        resultado+=String.format("Moneda: %2.3s\n",moneda);
        resultado+=String.format("Tipo de cambio: %3f\n",tipoCambio);
        resultado+=String.format("Idioma: %2s\n",idioma);
        return resultado;
    }
    
}
