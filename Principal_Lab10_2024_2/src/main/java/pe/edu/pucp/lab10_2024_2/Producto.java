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
public class Producto extends Registro{
    private String codigo;
    private List<Traduccion> nombre;
    private List<Traduccion> descripciones;
    private double precio;
    private int stock;
    
    public Producto(){
        this.nombre=new ArrayList();
        this.descripciones=new ArrayList();
        this.codigo=null;
    }
    @Override
    public void cargar(Scanner scanner) {
        this.codigo=scanner.next();
        String idioma=null;
        String denominacion=null;
        while(!scanner.hasNextDouble()){
            Traduccion traduccionNombre=new Traduccion();
            idioma=scanner.next();
            traduccionNombre.setIdioma(idioma);
            /*if(idioma.equals("PT")){
                scanner.next();
            }*/
            denominacion=scanner.next();
            traduccionNombre.setTexto(denominacion);
            this.nombre.add(traduccionNombre);
        }
        this.precio=scanner.nextDouble();
        while(!scanner.hasNextInt()){
            Traduccion traduccionDescripciones=new Traduccion();
            traduccionDescripciones.setIdioma(scanner.next());
            traduccionDescripciones.setTexto(scanner.next());
            this.descripciones.add(traduccionDescripciones);
        }
        this.stock=scanner.nextInt();
    }

    @Override
    public void imprimir() {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    /**
     * @return the codigo
     */
    public String getCodigo() {
        return codigo;
    }

    /**
     * @param codigo the codigo to set
     */
    public void setCodigo(String codigo) {
        this.codigo = codigo;
    }

    /**
     * @return the nombre
     */

    /**
     * @return the precio
     */
    public double getPrecio() {
        return precio;
    }

    /**
     * @param precio the precio to set
     */
    public void setPrecio(double precio) {
        this.precio = precio;
    }

    /**
     * @return the stock
     */
    public int getStock() {
        return stock;
    }

    /**
     * @param stock the stock to set
     */
    public void setStock(int stock) {
        this.stock = stock;
    }
    
    public String obtenerNombre(String idioma){
        return idioma;
    }
    
    public String obtenerDescripcion(String descripcion){
        return descripcion;
    }
    public void imprimir(Alumno alumno,Pais pais){
        
    }
    
}
