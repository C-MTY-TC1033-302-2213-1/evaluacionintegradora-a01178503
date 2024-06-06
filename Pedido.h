//
// Created by Victor Rene Martinez Pacheco on 06/06/24.
//

#ifndef EVALUACIONINTEGRADORA_A01178503_PEDIDO_H
#define EVALUACIONINTEGRADORA_A01178503_PEDIDO_H

#include <iostream>
#include <string>
#include <stdio.h>

#include <sstream>

#include <fstream>

#include "Verdura.h"

#include "Producto.h"

#include "Combo.h"

using namespace std;

const int MAX_PROD = 50;


class Pedido {
private:
    int cantidad;
    Producto* arrPtrProductos[MAX_PROD];

public:
    Pedido();

    void leerArchivo(string nombre);
    void ticketCliente();

};


#endif //EVALUACIONINTEGRADORA_A01178503_PEDIDO_H
