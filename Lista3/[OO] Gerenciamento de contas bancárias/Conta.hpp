#include <string>
#include <iostream>
#pragma once

class Conta{
    protected:
        std::string nomeCliente;
        int numConta;
        float saldo;

    public:
        virtual ~Conta() {}
        Conta(std::string name, int n, float s){
            this->nomeCliente = name;
            this->numConta = n;
            this->saldo = s;
        }

        virtual void sacar(float val) = 0;

        void depositar(int val){
            saldo += float(val);
        }

        std::string getNomeCliente(){
            return nomeCliente;
        }
        int getNumConta(){
            return numConta;
        }
        float getSaldo(){
            return saldo;
        }

};