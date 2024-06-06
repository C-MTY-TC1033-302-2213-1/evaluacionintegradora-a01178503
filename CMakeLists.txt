cmake_minimum_required(VERSION 3.26)
project(evaluacionintegradora_a01178503)

set(CMAKE_CXX_STANDARD 14)

add_executable(evaluacionintegradora_a01178503
        main.cpp
        Pedido1.csv
        Pedido2.csv
        Pedido3.csv
        Pedido4.csv
        Producto.cpp
        Producto.h
        Verdura.cpp
        Verdura.h
        Combo.cpp
        Combo.h
        Pedido.cpp
        Pedido.h)
