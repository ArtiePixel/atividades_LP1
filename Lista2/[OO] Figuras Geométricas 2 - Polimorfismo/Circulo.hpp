#include "FormasGeometricas.hpp"
#pragma once

class Circulo : public Formas{
    public:
    float raio;
    const float pi = 3.14;

    Circulo() : Formas(4){}
    float calcularArea(){
        return pi*(raio*raio);
    }
    void lerAtributosArea(){
        std::cin >> raio;
    }
};