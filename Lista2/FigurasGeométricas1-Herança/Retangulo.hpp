#include "FormasGeometricas.hpp"
#pragma once

class Retangulo : public Formas{
    public:
    float lado, altura;

    Retangulo() : Formas(2){}
    float calcularArea(){
        return lado * altura;
    }
    void lerAtributosArea(){
        std::cin >> lado >> altura;
    }
};