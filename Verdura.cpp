#include "Verdura.h"

    // constructores
    Verdura::Verdura() : Producto(), temporada("Invierno") {}

    Verdura::Verdura(string nombre, int precio, int peso, string _temporada)
        : Producto(nombre, precio, peso), temporada(_temporada) {}

    // setters
    void Verdura::setTemporada(string _temporada){
        temporada = _temporada;
    }

    // getters
    string Verdura::getTemporada(){
        return temporada;
    }

    // metodos
    string Verdura::str(){
        //Lechuga-$75-10-$1500-Junio
        //Cebolla-$45-20-$2700-Regalado
        //str() de Producto == "Lechuga-$75-10-$1500" 

        return Producto::str() + "-" + temporada;
    }
    int Verdura::calculaTotalPagar(){
        // si temporada = Junio, precio = precio*peso*2
        // si temporada = Regalado, precio = precio*peso*3
        // otro valor, precio = precio*peso*10

        if(temporada == "Junio"){
            return precio*peso*2;
        }
        else if(temporada == "Regalado"){
            return precio*peso*3;
        }
        else{
            return precio*peso*10;
        }
    }