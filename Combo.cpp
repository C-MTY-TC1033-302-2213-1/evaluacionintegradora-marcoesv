#include "Combo.h"

    // constructores
    Combo::Combo() : Producto(), clave(0) {}

    Combo::Combo(string nombre, int precio, int peso, int _clave) : Producto(nombre, precio, peso), clave(_clave) {}

    // metodos
    string Combo::str(){
        //Tacos&Tortas-$40-15-$450-1
        //Sope&Flauta-$45-10-$330-2

        return Producto::str() + "-" + to_string(clave);
    }
    int Combo::calculaTotalPagar(){
        //si clave = 1, se descuentan 25 pesos por cada 100
        //si clave = 2, se descuentan 30 pesos por cada 100
        //cualquier otra clave no tiene descuento
        // total a pagar = precio x peso x clave

        // ejemplo: 40x15x1 = 600
        // descuento = 600/100 x 25 = 150
        // total a pagar = 600 - 150 = 450

        int total = precio * peso * clave;
        if(clave == 1){
            return total - (total/100 * 25);
        }else if(clave == 2){
            return total - (total/100 * 30);
        }else{
            return total;
        }
    }