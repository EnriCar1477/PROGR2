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
public class Vehiculo extends Registro{
    private String placa;
    private String marca;
    private String modelo;
    private int anhoFab;
    private String categoria;
    private Propietario propietario;
    
    public Vehiculo(){
        placa=null;
        marca=null;
        modelo=null;
        anhoFab=-1;
        categoria=null;
    }
    @Override
    public void cargar(Scanner scanner) {
        String placaLocal=scanner.next();
        placa=placaLocal;
        if(placaLocal.equals("FIN")) {   
            return;
        } 
        marca=scanner.next();
        modelo=scanner.next();
        anhoFab=scanner.nextInt();
        categoria=scanner.next();
    }

    @Override
    public void imprimir() {
        System.out.println(this);
    }

    /**
     * @return the placa
     */
    public String getPlaca() {
        return placa;
    }

    /**
     * @param placa the placa to set
     */
    public void setPlaca(String placa) {
        this.placa = placa;
    }

    /**
     * @return the marca
     */
    public String getMarca() {
        return marca;
    }

    /**
     * @param marca the marca to set
     */
    public void setMarca(String marca) {
        this.marca = marca;
    }

    /**
     * @return the modelo
     */
    public String getModelo() {
        return modelo;
    }

    /**
     * @param modelo the modelo to set
     */
    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    /**
     * @return the anhoFab
     */
    public int getAnhoFab() {
        return anhoFab;
    }

    /**
     * @param anhoFab the anhoFab to set
     */
    public void setAnhoFab(int anhoFab) {
        this.anhoFab = anhoFab;
    }

    /**
     * @return the Categoria
     */
    public String getCategoria() {
        return categoria;
    }

    /**
     * @param Categoria the Categoria to set
     */
    public void setCategoria(String Categoria) {
        this.categoria = Categoria;
    }

    /**
     * @return the porpietario
     */
    public Propietario getPropietario() {
        return propietario;
    }

    /**
     * @param porpietario the porpietario to set
     */
    public void setPropietario(Propietario propietario) {
        this.propietario = propietario;
    }
    
    @Override
    public String toString(){
        String resultado=" ";
        resultado+=String.format("║ Placa: %-49s ║\n",placa);
        resultado+=String.format("║ Modelo: %-49s ║\n",modelo);
        resultado+=String.format("║ Anho: %-49s ║\n",anhoFab);
        resultado+=String.format("║ Categoria: %-49s ║\n",categoria);
        return resultado;
    }
   
}
