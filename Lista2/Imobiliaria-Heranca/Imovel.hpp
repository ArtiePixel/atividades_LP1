#include <iostream>
#pragma once

class Imovel{
    protected:
    int tipo;
    float valor;
    std::string disponibilidade;

    public:
    Imovel(int t){
        tipo = t;
    }

    std::string getNome(){
        if (tipo == 1){
            return "Casa";
        } else if (tipo == 2){
            return "Apartamento";
        } else if (tipo == 3){
            return "Terreno";
        } else{
            return "Indefinido";
        }
    }
    void lerAtributos(){
        std::cin >> valor;
        std::cin >> disponibilidade;
    }
    void exibirAtributos(){
        std::cout << getNome() << " para " << disponibilidade << ", R$ " << valor << ". ";
    }
};
