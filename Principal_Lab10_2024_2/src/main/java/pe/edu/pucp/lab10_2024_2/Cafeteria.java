/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pe.edu.pucp.lab10_2024_2;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author enric
 */
public class Cafeteria {
    private List<Pais> paises;
    private List<Alumno> participantes;
    private Menu menu;
    private Scanner archivo;
    
    public Cafeteria(String nameFile) throws FileNotFoundException{
        paises=new ArrayList();
        participantes=new ArrayList();
        menu=new Menu();
        File archive=new File(nameFile);
        archivo=new Scanner(archive);
    }
    
    public void cargarPaises(){
        while(!this.archivo.next().equals("FIN")){
            Pais nuevoPais=new Pais();
            nuevoPais.cargar(archivo);
            this.paises.add(nuevoPais);
        }
    }

    public void imprimirPaises() {
        for(Pais p: this.paises){
            p.imprimir();
        }
    }

    public void cargarParticipantes() {
        String tipo=null;
        while(archivo.hasNext()){
            tipo=archivo.next();
            if(tipo.equals("FIN")) break;
            Alumno nuevoAlumno;
            if(tipo.equals("R")){
                nuevoAlumno=new AlumnoRegular();
            }else{
                nuevoAlumno=new AlumnoIntercambio();
            }
            nuevoAlumno.cargar(archivo);
            this.participantes.add(nuevoAlumno);
            
        }
        
        
    }

    void imprimirParticipantes() {
        System.out.println("Listado de participantes\n");
        System.out.println("CODIGO\n");
        for(Alumno a:this.participantes){
            a.imprimir();
        }
    }

    void cargarMenu() {
        this.menu.cargarProducto(archivo);
        
    }
}
