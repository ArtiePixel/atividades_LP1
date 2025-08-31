#include "IConta.hpp"

class Conta : public IConta{
    protected:
        std::string nomeConta;
        int numConta;
        float salarioMensal, saldo, limite;

        void definirLimite(){
            this->limite = 2 * this->salarioMensal;
        }
};