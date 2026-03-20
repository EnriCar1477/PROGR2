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
public class Menu {
    private List<Producto> productos;
    public Menu(){
        productos=new ArrayList();
    }
    public void cargarProducto(Scanner scanner){
        String tipo;
        while(scanner.hasNext()){
            Producto nuevoProducto=null;
            tipo=scanner.next();
            if(tipo.equals("B")){
                nuevoProducto=new Bebida();
            }else{
                nuevoProducto=new Helado();
            }
            nuevoProducto.cargar(scanner);
            productos.add(nuevoProducto);
        }
    }
    
    public void imprimirMenu(){
        
    }
    
    public void imprimirMenuPersonalizado(Alumno alumno,Pais pais){
        
    }
    
}
