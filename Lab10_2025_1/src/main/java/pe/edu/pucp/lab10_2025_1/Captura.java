/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pe.edu.pucp.lab10_2025_1;

import java.util.Scanner;

/**
 *
 * @author enric
 */
public class Captura extends Registro{
    private String placa;
    private double velocidad;
    private Carril carril;
    private double latitud;
    private double longitud;
    private String region;
    private String provincia;
    private int km;
    private String fecha;
    private String hora;
    private String codigoCamara;
    /*@Override
    public void cargar(Scanner scanner) {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }*/
    @Override
    public void cargar(Scanner scanner) {
        placa=scanner.next();
        velocidad=scanner.nextDouble();
        carril=getCarril(scanner.nextInt());
        latitud=scanner.nextDouble();
        longitud=scanner.nextDouble();
        region=scanner.next();
        provincia=scanner.next();
        km=scanner.nextInt();
        fecha=scanner.next();
        hora=scanner.next();
        codigoCamara=scanner.next();
    }
    @Override
    public void imprimir() {
        System.out.println(this);
    }

    /**
     * @return the placa
     */
    public String getPlaca() {
        return placa;
    }

    /**
     * @param placa the placa to set
     */
    public void setPlaca(String placa) {
        this.placa = placa;
    }

    /**
     * @return the velocidad
     */
    public double getVelocidad() {
        return velocidad;
    }

    /**
     * @param velocidad the velocidad to set
     */
    public void setVelocidad(double velocidad) {
        this.velocidad = velocidad;
    }

    /**
     * @return the carril
     */
    public Carril getCarril() {
        return carril;
    }
    public Carril getCarril(int tipo){
        Carril nuevoCarril = null;
        switch (tipo) {
            case 1:
                nuevoCarril=new CarrilEmergencias();
                break;
               // return nuevoCarril;
            case 2:
                nuevoCarril=new CarrilLento();
                break;
                //return nuevoCarril;
            case 3:
                nuevoCarril=new CarrilEstandar();
                break;
               // return nuevoCarril;
            case 4:
                nuevoCarril=new CarrilEstandar();
                break;
               // return nuevoCarril;   
            case 5:
                nuevoCarril=new CarrilRapido();
                break;
               // return nuevoCarril;
        }
        return nuevoCarril;  
    }
    /**
     * @param carril the carril to set
     */
    public void setCarril(Carril carril) {
        this.carril = carril;
    }

    /**
     * @return the latitud
     */
    public double getLatitud() {
        return latitud;
    }

    /**
     * @param latitud the latitud to set
     */
    public void setLatitud(double latitud) {
        this.latitud = latitud;
    }

    /**
     * @return the longitud
     */
    public double getLongitud() {
        return longitud;
    }

    /**
     * @param longitud the longitud to set
     */
    public void setLongitud(double longitud) {
        this.longitud = longitud;
    }

    /**
     * @return the region
     */
    public String getRegion() {
        return region;
    }

    /**
     * @param region the region to set
     */
    public void setRegion(String region) {
        this.region = region;
    }

    /**
     * @return the provincia
     */
    public String getProvincia() {
        return provincia;
    }

    /**
     * @param provincia the provincia to set
     */
    public void setProvincia(String provincia) {
        this.provincia = provincia;
    }

    /**
     * @return the km
     */
    public int getKm() {
        return km;
    }

    /**
     * @param km the km to set
     */
    public void setKm(int km) {
        this.km = km;
    }

    /**
     * @return the fecha
     */
    public String getFecha() {
        return fecha;
    }

    /**
     * @param fecha the fecha to set
     */
    public void setFecha(String fecha) {
        this.fecha = fecha;
    }

    /**
     * @return the hora
     */
    public String getHora() {
        return hora;
    }

    /**
     * @param hora the hora to set
     */
    public void setHora(String hora) {
        this.hora = hora;
    }

    /**
     * @return the codigoCamara
     */
    public String getCodigoCamara() {
        return codigoCamara;
    }

    /**
     * @param codigoCamara the codigoCamara to set
     */
    public void setCodigoCamara(String codigoCamara) {
        this.codigoCamara = codigoCamara;
    }
    @Override
    public String toString(){
        String resultado="";
        resultado+=String.format("Placa: %-45s\n",placa);
        resultado+=String.format("Velocidad: %f km/m \n",velocidad);
        resultado+=String.format("Carril: %-45s\n",carril.getTipo());
        resultado+=String.format("Ubicacion: %15f, Lon %f\n",latitud,longitud);
        resultado+=String.format("Region: %-45s\n",region);
        resultado+=String.format("Provincia: %-45s\n",provincia);
        resultado+=String.format("Kilometro: %-45s\n",km);
        resultado+=String.format("Fecha: %-45s\n",fecha);
        resultado+=String.format("Hora: %-45s\n",hora);
        resultado+=String.format("Codigo Camara: %-45s\n",codigoCamara);
        return resultado;
    }
    
}
