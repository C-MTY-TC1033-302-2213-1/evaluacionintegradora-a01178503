//
// Created by Victor Rene Martinez Pacheco on 06/06/24.
//

#include "Verdura.h"

Verdura::Verdura(){
    temporada = "Invierno";
}

Verdura::Verdura(string _nombre, int _precio, int _peso, string _temporada): Producto(_nombre, _precio, _peso){
    temporada = _temporada;
}

void Verdura::setTemporada(string _temporada){
    temporada = _temporada;
}
string Verdura::getTemporada(){
    return temporada;

}



string Verdura::str(){
    return Producto::str() + "-" + temporada;
}

int Verdura::calculaTotalPagar(){
    if (temporada == "Junio"){
        return precio * peso * 2;
    } else if (temporada == "Regalado"){
        return precio * peso * 3;
    } else {
        return precio * peso * 10;
    }
}
