#include "Conta.hpp"

class ContaCorrente : public Conta{
    protected:
        float salarioMensal, limite;

    public:
        ContaCorrente(std::string name, int n, float s, float sm) : Conta(name, n, s){
            this->salarioMensal = sm;
            this->limite = 0.0;
        }
        
        virtual void definirLimite(){
            this->limite = 2 * this->salarioMensal;
        }

        float saldoTotalDisponivel(){
            return this->saldo + this->limite;
        }
        void sacar(float val){
            if(val > saldoTotalDisponivel()){
                std::cout << "Saldo insuficiente" << std::endl;
                return;
            } else {
                saldo -= val;
            }
        }

        void setSalarioMensal(float salarioMensal){
            this->salarioMensal = salarioMensal;
        }
        void setLimite(float limite){
            this->limite = limite;
        }
        

        float getSalarioMensal(){
            return salarioMensal;
        }
        float getLimite(){
            return limite;
        }
};