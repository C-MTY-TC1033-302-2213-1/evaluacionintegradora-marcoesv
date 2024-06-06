#ifndef PEDIDO_H
#define PEDIDO_H

#include <stdio.h>
#include <sstream>
#include <fstream>
#include "Verdura.h"
#include "Producto.h"
#include "Combo.h"

using namespace std;

const int MAX_PROD = 50;

class Pedido{
    private:
        Producto* arrPtrProductos[MAX_PROD];
        int cantidad;
    
    public:
        // constructores
        Pedido();

        // metodos
        void leerArchivo(string nombre);
        void ticketCliente();
};

#endif // PEDIDO_H