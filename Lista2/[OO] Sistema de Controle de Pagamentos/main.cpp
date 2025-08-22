#include <iostream>
#include "Controle.hpp"

int main(){
    int n;
    std::cin >> n;

    Controle controle = Controle(n);

    std::cin.ignore();

    for (int i = 0; i<n; i++){
        float valor;
        std::string nome;

        std::cin >> valor;
        std::cin.ignore();
        std::getline(std::cin, nome);

        Pagamento p;
        p.setNomeFuncionario(nome);
        p.setValorPagamento(valor);

        controle.setPagamento(p, i);
    }

    std::string busca;
    std::cin >> busca;

    int index = controle.getIndexFuncionario(busca);

    if (index != -1){
        Pagamento pagamentoUnico = controle.getPagamento(index);
        std::cout << pagamentoUnico.getNomeFuncionario() << ": R$ " << pagamentoUnico.getValorPagamento() << std::endl;
    } else{
        std::cout << busca << " não encontrado(a)." << std::endl;
    }
    std::cout << "Total: R$ " << controle.calculaTotalDePagamentos() << std::endl;

    return 0;
}