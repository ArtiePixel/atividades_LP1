#include <iostream>
#pragma once

class Trabalhador{
    protected:
    std::string nome;
    float salario;

    public:
    Trabalhador(){
        salario = 0;
    }

    void setNome(std::string n){
        nome = n;
    }
    void setSalario(float s){
        salario = s;
    }

    std::string getNome(){
        return nome;
    }
    float getSalario(){
        return salario;
    }
};