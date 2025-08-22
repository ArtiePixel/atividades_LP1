#include <iostream>
#pragma once

class Funcionario{
    protected:
    int matricula;
    float salario;
    std::string nome;

    public:
    Funcionario(){
        matricula = 0;
        salario = 0.0;
    }

    void setNome(std::string n){
        nome = n;
    }
    void setSalario(float s){
        salario = s;
    }
    void setMatricula(int m){
        matricula = m;
    }

    std::string getNome(){
        return nome;
    }
    float getSalario(){
        return salario;
    }
    int getMatricula(){
        return matricula;
    }
};