#include "Trabalho.hpp"

class TrabalhadorAssalariado : public Trabalhador{
    public:
    TrabalhadorAssalariado(float s) : Trabalhador(){
        salario = s;
    }

    float calcularPagamentoSemanal(){
        return salario/4;
    }
};