/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package pe.edu.pucp.lab10_2024_2;

import java.io.FileNotFoundException;

/**
 *
 * @author enric
 */
public class Principal_Lab10_2024_2 {

    public static void main(String[] args) throws FileNotFoundException{
        Cafeteria cafeteria=new Cafeteria("datos.txt");
        cafeteria.cargarPaises();
        cafeteria.imprimirPaises();
        cafeteria.cargarParticipantes();
        cafeteria.imprimirParticipantes();
        cafeteria.cargarMenu();
    }
}
