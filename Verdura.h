#ifndef VERDURA_H
#define VERDURA_H

#include <iostream>
#include <string>
#include "Producto.h"
using namespace std;

class Verdura : public Producto{
    private:
    string temporada;

    public:
    // constructores
    Verdura();
    Verdura(string nombre, int precio, int peso, string temporada);

    // setters
    void setTemporada(string temporada);

    // getters
    string getTemporada();

    // metodos
    string str();
    int calculaTotalPagar();
};


#endif // VERDURA_H