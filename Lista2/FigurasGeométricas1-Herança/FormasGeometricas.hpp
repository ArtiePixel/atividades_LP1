#include <iostream>
#pragma once

class Formas{
    protected:
    int tipo;

    public:
    Formas(int t){
        tipo = t;
    }
    std::string getNome(int t){
        switch (t){
        case 0:
            return "Indefinido";
            break;
        case 1:
            return "Quadrado";
            break;
        case 2:
            return "Retângulo";
            break;
        case 3:
            return "Triângulo";
            break;
        case 4:
            return "Círculo";
            break;
        }
    }
};