/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.practica_punto;

/**
 *
 * @author enric
 */
public class Puntos2d {
    private Double x;
    private Double y;
    
    public Puntos2d(){
        this.x = 0.0;
        this.y = 0.0;
    }
    
    public Puntos2d(Double x, Double y){
        this.x = x;
        this.y = y;
    }
    
    @Override
    public String toString(){
        String impresion = "(";
        impresion += this.x;
        impresion += ", ";
        impresion += this.y;
        impresion += ")";
        return impresion;
    }

    /**
     * @return the x
     */
    public Double getX() {
        return x;
    }

    /**
     * @param x the x to set
     */
    public void setX(Double x) {
        this.x = x;
    }

    /**
     * @return the y
     */
    public Double getY() {
        return y;
    }

    /**
     * @param y the y to set
     */
    public void setY(Double y) {
        this.y = y;
    }
}
