#include "IConta.hpp"

class Conta : public IConta{
    protected:
        std::string nomeConta;
        int numConta;
        float salarioMensal, saldo, limite;

        void definirLimite(){
            this->limite = 2 * this->salarioMensal;
        }
    public:
        Conta(std::string nc, int numc, float sm){
            nomeConta = nc;
            numConta = numc;
            salarioMensal = sm;
            saldo = 0;
            definirLimite();
        }
        float saldoTotalDisponível(){
            return limite + saldo;
        }
        void sacar(float valor){
            if (valor <= saldoTotalDisponível()){
                saldo -= valor;
            }
        }
        void depositar(float valor){
            saldo += valor;
        }

        void setNomeCliente(std::string nomeCliente) {
        this->nomeConta = nomeCliente;
        }
        std::string getNomeCliente() const {
            return nomeConta;
        }

        void setNumConta(int numConta) {
            this->numConta = numConta;
        }
        int getNumConta() const {
            return numConta;
        }

        void setSalarioMensal(float salarioMensal) {
            this->salarioMensal = salarioMensal;
        }
        float getSalarioMensal() const {
            return salarioMensal;
        }

        float getSaldo() const {
            return saldo;
        }

        float getLimite() const {
            return limite;
        }
};