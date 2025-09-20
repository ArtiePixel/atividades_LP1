#include "Conta.hpp"

class ContaCorrente : public Conta{
    protected:
        float salarioMensal;
        float limite;

    public:
        ContaCorrente() : Conta(){
            salarioMensal = 0;
            limite = 0;
        }
        ContaCorrente(std::string nameClient, int numAccount, float cash, float moneyMonth, float limit) : Conta(nameClient, numAccount, cash){
            salarioMensal = moneyMonth;
            limite = limit;
        }
};