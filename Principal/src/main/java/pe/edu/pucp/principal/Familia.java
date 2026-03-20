/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pe.edu.pucp.principal;

/**
 *
 * @author enric
 */
public class Familia {
   private Persona hijo;
   private Persona padre;
   
   public Familia(Persona hijo,Persona padre){
       this.hijo=new Persona(hijo);
       this.padre=new Persona(padre);
   }
    @Override
    public String toString(){
        String impresion = this.padre.toString();
        impresion += "\n";
        impresion += this.hijo.toString();
        return impresion;
    }
   
}
