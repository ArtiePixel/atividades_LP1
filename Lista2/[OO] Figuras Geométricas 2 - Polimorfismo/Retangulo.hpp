#include "FormasGeometricas.hpp"
#pragma once

class Retangulo : public Formas{
    public:
    float lado, altura;

    Retangulo() : Formas(2){}
    float calcularArea() override{
        return lado * altura;
    }
    void lerAtributosArea() override{
        std::cin >> lado >> altura;
    }
};