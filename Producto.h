//
// Created by Victor Rene Martinez Pacheco on 06/06/24.
//

#ifndef EVALUACIONINTEGRADORA_A01178503_PRODUCTO_H
#define EVALUACIONINTEGRADORA_A01178503_PRODUCTO_H

#include <iostream>
#include <string>

using namespace std;

class Producto {
protected:
    string nombre;
    int precio;
    int peso;
public:
    Producto();
    Producto(string _nombre, int _precio, int _peso);

    void setNombre(string _nombre);
    void setPeso(int _peso);
    void setPrecio(int _precio);

    string getNombre();
    int getPeso();
    int getPrecio();

    virtual string str();
    virtual int calculaTotalPagar();

};


#endif //EVALUACIONINTEGRADORA_A01178503_PRODUCTO_H
