#include "FormasGeometricas.hpp"
#pragma once

class Triangulo : public Formas{
    public:
    float base, altura;

    Triangulo() : Formas(3){}
    float calcularArea(){
        return (base*altura)/2;
    }
    void lerAtributosArea(){
        std::cin >> base >> altura;
    }
};