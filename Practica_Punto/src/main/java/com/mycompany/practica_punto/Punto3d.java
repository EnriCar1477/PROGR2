/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.practica_punto;

/**
 *
 * @author enric
 */
public class Punto3d extends Puntos2d {
     private Double z;

    public Punto3d() {
        super();
        this.z = 0.0;
    }

    public Punto3d(Double x, Double y, Double z) {
        super(x, y);
        this.z = z;
    }
    
    @Override
    public String toString(){
        String impresion = "(";
        impresion += this.getX();
        impresion += ", ";
        impresion += this.getY();
        impresion += ", ";
        impresion += this.z;
        impresion += ")";
        return impresion;
    }
}
