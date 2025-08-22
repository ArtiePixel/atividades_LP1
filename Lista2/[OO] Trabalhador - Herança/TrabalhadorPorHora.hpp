#include "Trabalho.hpp"

class TrabalhadorPorHora : public Trabalhador{
    private:
    float valorDaHora;

    public:
    TrabalhadorPorHora(float v){
        valorDaHora = v;
    }

    float calcularPagamentoSemanal(int horaTrabalhada){
        float pagamento;
        if (horaTrabalhada <= 40){
            pagamento = horaTrabalhada * valorDaHora;
        } else {
            int horasExtras = horaTrabalhada - 40;
            pagamento = (40 * valorDaHora) + (horasExtras * valorDaHora * 1.5);
        }
        salario = pagamento * 4;
        return pagamento;
    }
};