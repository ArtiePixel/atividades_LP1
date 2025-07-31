#include "FormasGeometricas.hpp"
#pragma once

class Quadrado : public Formas{
    public:
    float lado;
    Quadrado() : Formas(1){}
    void lerAtributosArea() override{
        std::cin >> lado;
    }
    float calcularArea() override{
        return lado * lado;
    }
};