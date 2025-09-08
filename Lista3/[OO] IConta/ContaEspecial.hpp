#include "Conta.hpp"

class ContaEspecial : public Conta{
    protected:
        void definirLimite(){
            this->limite = 3 * this->salarioMensal;
        }

    public:
        ContaEspecial(std::string nc, int numc, float sm) : Conta(nc, numc, sm){
            definirLimite();
        }
};