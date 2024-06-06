//
// Created by Victor Rene Martinez Pacheco on 06/06/24.
//

#ifndef EVALUACIONINTEGRADORA_A01178503_COMBO_H
#define EVALUACIONINTEGRADORA_A01178503_COMBO_H

#include <iostream>
#include <string>
#include "Producto.h"

using namespace std;

class Combo: public Producto{
private:
    int clave;

public:
    Combo();
    Combo(string _nombre, int _precio, int _peso, int _clave);

    string str();
    int calculaTotalPagar();

};


#endif //EVALUACIONINTEGRADORA_A01178503_COMBO_H
