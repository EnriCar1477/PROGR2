/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package pe.edu.pucp.principal;

/**
 *
 * @author enric
 */
public class Principal {

    public static void main(String[] args) {
        Persona padre = new Persona("Melgar", "Sasieta", "Héctor Andrés");
        Persona hijo = new Persona("Melgar", "Arauco", "Luciana");
        Familia familia = new Familia(padre, hijo);
        System.out.println(familia);
        hijo.setNombre("Daniela");
        System.out.println(familia);
    }
}
