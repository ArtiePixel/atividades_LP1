#include "FormasGeometricas.hpp"
#pragma once

class Circulo : public Formas{
    public:
    float raio, pi = 3.14;

    Circulo() : Formas(4){}
    float calcularArea(){
        return pi*(raio*raio);
    }
    void lerAtributosArea(){
        std::cin >> raio;
    }
};