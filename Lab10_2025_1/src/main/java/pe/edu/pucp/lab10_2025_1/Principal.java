/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package pe.edu.pucp.lab10_2025_1;
import java.io.IOException;
/**
 *
 * @author enric
 */
public class Principal {

    public static void main(String[] args) throws IOException {
        AutoridadTransporte atu=new AutoridadTransporte("datos.txt");
        atu.cargarDatos();
        atu.procesarCapturas();
        atu.imprimirInfraccion();
    }
}
