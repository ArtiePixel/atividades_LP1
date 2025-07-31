#include <iostream>
#pragma once

class Formas{
    protected:
    int tipo;

    public:
    Formas(int t){
        tipo = t;
        
    }
    ~Formas();
    virtual float calcularArea();
    virtual void lerAtributosArea();

    std::string getNome(int t){
        switch (t){
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