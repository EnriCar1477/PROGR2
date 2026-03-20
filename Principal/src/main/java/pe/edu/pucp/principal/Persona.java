/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pe.edu.pucp.principal;

/**
 *
 * @author enric
 */
public class Persona {
    private String paterno;
    private String materno;
    private String nombre;
    
    public Persona(String paterno,String materno,String nombre){
        this.materno=materno;
        this.paterno=paterno;
        this.nombre=nombre;
    }
    
    public Persona(Persona persona){
        this.materno=persona.materno;
        this.paterno=persona.paterno;
        this.nombre=persona.nombre;
    }

    /**
     * @return the paterno
     */
    public String getPaterno() {
        return paterno;
    }

    /**
     * @param paterno the paterno to set
     */
    public void setPaterno(String paterno) {
        this.paterno = paterno;
    }

    /**
     * @return the materno
     */
    public String getMaterno() {
        return materno;
    }

    /**
     * @param materno the materno to set
     */
    public void setMaterno(String materno) {
        this.materno = materno;
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
    @Override
    public String toString(){
        String impresion=this.nombre.toString();
        impresion+=" ";
        impresion+=this.paterno.toString();
        impresion+=",";
        impresion+=this.materno.toString();
        return impresion;
    }
}
