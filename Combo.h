#ifndef COMBO_H
#define COMBO_H

#include <iostream>
#include <string>
#include "Producto.h"
using namespace std;

class Combo : public Producto{
    private:
    int clave;

    public:
    // constructores
    Combo();
    Combo(string nombre, int precio, int peso, int clave);

    // metodos
    string str();
    int calculaTotalPagar();
};

#endif // COMBO_H