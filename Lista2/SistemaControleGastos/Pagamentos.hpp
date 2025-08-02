#include <string>
#pragma once

class Pagamento{
    private:
    float valorPagamento;
    std::string nomeFuncionario;

    public:
    Pagamento(){
        valorPagamento = 0.0;
    }

    void setValorPagamento(float p){
        valorPagamento = p;
    }
    void setNomeFuncionario(std::string n){
        nomeFuncionario = n;
    }

    float getValorPagamento(){
        return valorPagamento;
    }
    std::string getNomeFuncionario(){
        return nomeFuncionario;
    }
};