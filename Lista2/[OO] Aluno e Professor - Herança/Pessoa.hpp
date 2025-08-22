#include <iostream>
#pragma once

class Pessoa{
    protected:
    std::string nome, telefone, cpf;
    public:
    Pessoa(std::string n, std::string t, std::string c){
        nome = n;
        telefone = t;
        cpf = c;
    }
    void exibir(){
        std::cout << nome << " - " << telefone << " - CPF: "<< cpf << std::endl;
    }
};