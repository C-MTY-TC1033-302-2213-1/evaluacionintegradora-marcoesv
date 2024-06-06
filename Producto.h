#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
#include <string>
using namespace std;

class Producto{
    protected:
    string nombre;
    int precio;
    int peso;

    public:
    Producto();
    Producto(string nombre, int precio, int peso);

    // setters
    void setNombre(string nombre);
    void setPrecio(int precio);
    void setPeso(int peso);

    // getters
    string getNombre();
    int getPrecio();
    int getPeso();

    // metodos
    virtual string str();
    virtual int calculaTotalPagar();
};

#endif // PRODUCTO_H
