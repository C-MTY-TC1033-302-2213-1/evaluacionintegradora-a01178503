//
// Created by Victor Rene Martinez Pacheco on 06/06/24.
//

#include "Combo.h"

Combo::Combo(){
    clave = 0;
}
Combo::Combo(string _nombre, int _precio, int _peso, int _clave): Producto(_nombre, _precio, _peso){
    clave = _clave;
}

string Combo::str(){
    return nombre + "-" + "$" + to_string(precio) + "-" + to_string(peso) + "-" + "$" + to_string(calculaTotalPagar()) + "-" +
            to_string(clave) ;

}

int Combo::calculaTotalPagar(){
    int total = precio * peso * clave;
    if (clave == 1) {
        return total -= (total / 100) * 25;
    } else if (clave == 2) {
        return total -= (total / 100) * 30;
    } else {
        return total;
    }
}