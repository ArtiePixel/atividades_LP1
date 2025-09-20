#include <string>

class Conta{
    protected:
        std::string nomeCliente;
        int numConta;
        float saldo;

    public:
        Conta(){
            numConta = 0;
            saldo = 0;
        }
        Conta(std::string nameClient, int numAccount, float cash){
            this->nomeCliente = nameClient;
            this->numConta = numAccount;
            this->saldo = cash;
        }

        virtual void sacar(float val) = 0;
        void depositar(int val){
            saldo += val;
        }

        void setNomeCliente(std::string nomeCliente){
            this->nomeCliente = nomeCliente;
        }
        void setNumConta(int numConta){
            this->numConta = numConta;
        }
        void setSalto(float saldo){
            this->saldo = saldo;
        }
};