/*
 * File: Producto
 * Author: gaelarias
 * 
 * Created on: 10/11/25, 5:40 PM 
*/

#ifndef INC_2024_2_PRODUCTO_H
#define INC_2024_2_PRODUCTO_H

using namespace  std;

class Producto {
private:
    char *nombre;
    double precio;
public:
    //CONSTRUCTORES
    Producto();
    Producto(const Producto &og);
    virtual ~Producto();
    void operator = (const Producto &og);
    //SELECTORES
    void get_nombre(char *) const;
    void set_nombre(const char *nombre);
    double get_precio() const;
    void set_precio(double precio);
    //METODOS
    virtual istream& leer(istream &in);
    virtual ostream& imprimir(ostream &out) const;
    virtual Producto* clona() = 0;
    virtual bool eliminable(int prote) = 0;

};


#endif //INC_2024_2_PRODUCTO_H