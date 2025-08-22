#include <iostream>
#include "TrabalhadorAssalariado.hpp"
#include "TrabalhadorPorHora.hpp"

int main(){
    int n, tipoTrabalhador;

    std::cin >> n;
    for (int i = 0; i<n ; i++){
        std::cin >> tipoTrabalhador;
        std::cin.ignore();

        switch (tipoTrabalhador){
        case 1: {
            std::string nome;
            float salario;

            std::getline(std::cin, nome);
            std::cin >> salario;

            TrabalhadorAssalariado ta = TrabalhadorAssalariado(salario);

            ta.setNome(nome);
            ta.setSalario(salario);
            std::cout << ta.getNome() << " - Semanal: R$ " << ta.calcularPagamentoSemanal() << " - Mensal: R$ " << ta.getSalario() << std::endl;
            break;
        }
        case 2: {
            std::string nome;
            float valorHora;
            int horaTrabalhada;
        
            std::getline(std::cin, nome);
            std::cin >> valorHora;
            std::cin >> horaTrabalhada;

            TrabalhadorPorHora th = TrabalhadorPorHora(valorHora);
            
            th.setNome(nome);
            std::cout << th.getNome() << " - Semanal: R$ " << th.calcularPagamentoSemanal(horaTrabalhada) << " - Mensal: R$ " << th.getSalario() << std::endl;
            break;
        }
        
        default:
            break;
        }
    }
}