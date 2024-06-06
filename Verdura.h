//
// Created by Victor Rene Martinez Pacheco on 06/06/24.
//

#ifndef EVALUACIONINTEGRADORA_A01178503_VERDURA_H
#define EVALUACIONINTEGRADORA_A01178503_VERDURA_H

#include <iostream>
#include <string>
#include "Producto.h"

using namespace std;

class Verdura :public Producto{
private:
    string temporada;
public:
    Verdura();
    Verdura(string _nombre, int _precio, int _peso, string _temporada);

    void setTemporada(string _temporada);
    string getTemporada();


    string str();

    int calculaTotalPagar();
};


#endif //EVALUACIONINTEGRADORA_A01178503_VERDURA_H
