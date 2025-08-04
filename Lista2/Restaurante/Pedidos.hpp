#include <string>
#pragma once

class Pedidos{
    private:
    int num, qnt;
    float preco;
    std::string desc;

    public:
    Pedidos(int n, int q, float p, std::string d){
        num = n;
        qnt = q;
        preco = p;
        desc = d;
    }

    float getTotal(){
        return qnt * preco;
    }

    int getNumero(){
        return num;
    }
    int getQuantidade(){
        return qnt;
    }
    float getPreco(){
        return preco;
    }
    std::string getDescricao(){
        return desc;
    }

    void aumentarQuantidade(int qnt){
        this->qnt += qnt; 
    }


};