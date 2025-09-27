#include "Conta.hpp"

class Poupanca : public Conta{
    private:
        int variacao;
        float taxaRendimento;

    public:
        Poupanca(std::string name, int n, float s, int var) : Conta(name, n, s){
            this->variacao = var;
            this->taxaRendimento = 0.006;
        }
        float render(){
            return (saldo*taxaRendimento);
        }
        void sacar(float val){
            if(val > saldo){
                std::cout << "Saldo insuficiente";
                return;
            } else{
                saldo -= val;
            }
        }
};