/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pe.edu.pucp.lab10_2025_1;

/**
 *
 * @author enric
 */
public class RegistroInfraccion {
    private String codigoInfraccion;
    private double monto;
    private int puntos;
    private Captura captura;
    private Vehiculo vehiculo;

    /**
     * @return the codigoInfraccion
     */
    public String getCodigoInfraccion() {
        return codigoInfraccion;
    }

    /**
     * @param codigoInfraccion the codigoInfraccion to set
     */
    public void setCodigoInfraccion(String codigoInfraccion) {
        this.codigoInfraccion = codigoInfraccion;
    }

    /**
     * @return the monto
     */
    public double getMonto() {
        return monto;
    }

    /**
     * @param monto the monto to set
     */
    public void setMonto(double monto) {
        this.monto = monto;
    }

    /**
     * @return the puntos
     */
    public int getPuntos() {
        return puntos;
    }

    /**
     * @param puntos the puntos to set
     */
    public void setPuntos(int puntos) {
        this.puntos = puntos;
    }

    /**
     * @return the captura
     */
    public Captura getCaptura() {
        return captura;
    }

    /**
     * @param captura the captura to set
     */
    public void setCaptura(Captura captura) {
        this.captura = captura;
    }

    /**
     * @return the vehiculo
     */
    public Vehiculo getVehiculo() {
        return vehiculo;
    }

    /**
     * @param vehiculo the vehiculo to set
     */
    public void setVehiculo(Vehiculo vehiculo) {
        this.vehiculo = vehiculo;
    }
    
    public void actualizarInfraccion(String codigo,double monto,int puntos,
                                    Captura captura,Vehiculo vehiculo){
        this.setCaptura(captura);
        this.setCodigoInfraccion(codigo);
        this.setMonto(monto);
        this.setPuntos(puntos);
        this.setVehiculo(vehiculo);
    }
    
    @Override
    public String toString(){
        
        String resultado = "REGISTRO DE INFRACCION DE TRANSITO\n";
        resultado += String.format("║ Codigo de Infraccion: %-45s ║\n",codigoInfraccion);
        resultado += String.format("║ Monto de la multa: %-41f ║\n",monto);
        resultado += String.format("║ Puntos: %-39s ║\n", puntos);
        resultado +="Destinatario de Infraccion\n";
        resultado +=this.getVehiculo().getPropietario().toString();
        resultado +="Datos del Vehiculo\n";
        resultado+=this.getVehiculo().toString();
        resultado+="Datos de la Captura Electronica\n";
        resultado+=this.getCaptura().toString();
        return resultado;
    }
    
    /*public void imprimir(){
        
    }*/ 
    
}
