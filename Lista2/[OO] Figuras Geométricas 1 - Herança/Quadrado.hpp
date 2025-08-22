#include "FormasGeometricas.hpp"
#pragma once

class Quadrado : public Formas{
    public:
    float lado;
    Quadrado() : Formas(1){}
    void lerAtributosArea(){
        std::cin >> lado;
    }
    float calcularArea(){
        return lado * lado;
    }
};