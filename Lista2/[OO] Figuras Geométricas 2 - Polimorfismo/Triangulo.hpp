#include "FormasGeometricas.hpp"
#pragma once

class Triangulo : public Formas{
    public:
    float base, altura;

    Triangulo() : Formas(3){}
    float calcularArea() override{
        return (base*altura)/2;
    }
    void lerAtributosArea() override{
        std::cin >> base >> altura;
    }
};