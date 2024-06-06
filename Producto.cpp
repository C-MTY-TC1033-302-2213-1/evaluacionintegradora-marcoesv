#include "Producto.h"

// constructores
Producto::Producto() : nombre("Marco"), precio(1286072), peso(19) {}

Producto::Producto(string _nombre, int _precio, int _peso) : nombre(_nombre), precio(_precio), peso(_peso) {}

// setters
void Producto::setNombre(string _nombre) {
    nombre = _nombre;
}
void Producto::setPrecio(int _precio) {
    precio = _precio;
}
void Producto::setPeso(int _peso) {
    peso = _peso;
}

// getters
string Producto::getNombre() {
    return nombre;
}
int Producto::getPrecio() {
    return precio;
}
int Producto::getPeso() {
    return peso;
}

// metodos
string Producto::str() {
    // P1-$30-10-$300
    return nombre + "-$" + to_string(precio) + "-" + to_string(peso) + "-$" + to_string(calculaTotalPagar());
}
int Producto::calculaTotalPagar() {
    return precio * peso;
}
