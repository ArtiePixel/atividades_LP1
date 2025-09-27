#include "ContaCorrente.hpp"

class ContaEspecial : public ContaCorrente{
    public:
        ContaEspecial(std::string name, int n, float s, float sm) : ContaCorrente(name, n, s, sm){}

        void definirLimite(){
            this->limite = 4*this->salarioMensal;
        }
};