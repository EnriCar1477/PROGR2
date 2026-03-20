/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pe.edu.pucp.lab10_2025_1;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author enric
 */
public class AutoridadTransporte {
    private List<Propietario> propietarios;
    private List<Vehiculo> vehiculos;
    private List<Captura> capturas;
    private List<RegistroInfraccion> regInfracciones;
    private Scanner archivo;
    
    public AutoridadTransporte(String nameArchive) throws FileNotFoundException{
        propietarios=new ArrayList<>();
        vehiculos=new ArrayList<>();
        capturas=new ArrayList<>();
        regInfracciones=new ArrayList<>();
        File archive=new File(nameArchive);
        archivo=new Scanner(archive);
    }
    public void cargarDatos(){
        this.cargarPropietarios();
        this.cargarVehiculos();
        this.cargarCapturas();
    }
    
    public void cargarCapturas(){
        while(archivo.hasNext()){
            Captura nuevaCaptura=new Captura();
            nuevaCaptura.cargar(archivo);
            this.capturas.add(nuevaCaptura);
        }
    }
    public void cargarVehiculos(){
        while(archivo.hasNext()){
            Vehiculo nuevoVehiculo=new Vehiculo();
            nuevoVehiculo.cargar(archivo);
            if(nuevoVehiculo.getPlaca().equals("FIN")){
                break;
            }
            int dniPropietario=archivo.nextInt();
            nuevoVehiculo.setPropietario(buscarPropietario(dniPropietario));
            this.vehiculos.add(nuevoVehiculo);
            
        }
    }
    private Propietario buscarPropietario(final int dniPropietario){
        for(Propietario p:this.propietarios){
            if(p.getDni()==dniPropietario){
                return p;
            }
        }
        return null;
    }
    public void cargarPropietarios(){
       /*while (archivo.hasNext()) {
            Propietario propietario = new Propietario();
            if (!propietario.cargar(archivo)) {
                break;
            }
            propietario.imprimir();
            propietarios.add(propietario);
        }*/
        while(archivo.hasNextInt()){
            Propietario nuevoPropietario=new Propietario();
            nuevoPropietario.cargar(archivo);
            this.propietarios.add(nuevoPropietario);
        }
        archivo.next();
    }
    void procesarCapturas() {
        for(Captura c:this.capturas){  
            Vehiculo vehiculoLocal=buscarVehiculo(c.getPlaca());
            Carril carrilLocal=c.getCarril();
            if(!carrilLocal.vehiculoPermitido(vehiculoLocal.getCategoria())){
                RegistroInfraccion nuevaInfraccion=new RegistroInfraccion();
                nuevaInfraccion.actualizarInfraccion("G29",428,50,c, 
                                                    vehiculoLocal);
                this.regInfracciones.add(nuevaInfraccion);
            }
            if(!carrilLocal.velocidadPermitida(c.getKm(),c.getVelocidad())){
                RegistroInfraccion nuevaInfraccion=new RegistroInfraccion();
                nuevaInfraccion.actualizarInfraccion("M20",963,50,c, 
                                                    vehiculoLocal);
                this.regInfracciones.add(nuevaInfraccion);
            }
        }
    }
    private Vehiculo buscarVehiculo(String placa) {
        for(Vehiculo v:this.vehiculos){
            if(placa.equals(v.getPlaca())){
                return v;
            }
        }
        return null;
    }

    void imprimirInfraccion() {
        for(RegistroInfraccion r:this.regInfracciones){
            System.out.println(r);
        }
    }
    
}
