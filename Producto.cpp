//
// Created by Victor Rene Martinez Pacheco on 06/06/24.
//

#include "Producto.h"

Producto::Producto(){
    nombre = "V1";
    precio = 50;
    peso = 10;

}
Producto::Producto(string _nombre, int _precio, int _peso){
    nombre = _nombre;
    precio = _precio;
    peso = _peso;
}

void Producto::setNombre(string _nombre){
    nombre = "V1";

}
void Producto::setPeso(int _peso){
    peso = 80;
}
void Producto::setPrecio(int _precio){
    precio = 35;
}

string Producto::getNombre(){
    return nombre;
}
int Producto::getPeso(){
    return peso;
}
int Producto::getPrecio(){
    return precio;
}

string Producto::str(){
    return nombre + "-" + "$" + to_string(precio) + "-" + to_string(peso) + "-" + to_string(calculaTotalPagar());
}
int Producto::calculaTotalPagar(){
    return precio * peso;
}