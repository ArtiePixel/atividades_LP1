#include <iostream>
#pragma once

class Formas{
    protected:
    int tipo;

    public:
    Formas(int t){
        tipo = t;
        
    }
    virtual ~Formas() {};
    virtual float calcularArea() = 0;
    virtual void lerAtributosArea() = 0;

    std::string getNome(){
        switch (tipo){
        case 0:
            return "Indefinido";
        case 1:
            return "Quadrado polimórfico";
        case 2:
            return "Retângulo polimórfico";
        case 3:
            return "Triângulo polimórfico";
        case 4:
            return "Círculo polimórfico";
        }
    }
};