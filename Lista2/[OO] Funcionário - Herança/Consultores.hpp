#include "Funcionarios.hpp"

class Consultor : public Funcionario{
    public:
    Consultor() : Funcionario(){}

    float getSalario(){
        return salario + (salario*0.1);
    }
    float getSalario(float percentual){
        return salario + (salario*percentual);
    }
};