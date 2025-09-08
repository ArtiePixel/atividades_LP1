#include <iostream>
#include "ContaEspecial.hpp"

int main(){
    Conta* conta = nullptr;

    std::string nomeConta;
    int numConta;
    float salarioMensal, deposito, sacar;

    std::getline(std::cin, nomeConta);
    std::cin >> numConta >> salarioMensal >> deposito >> sacar;
    std::cin.ignore();

    conta = new Conta(nomeConta, numConta, salarioMensal);
    conta->depositar(deposito);
    conta->sacar(sacar);

    std::cout << conta->getNomeCliente() << ", cc: " << conta->getNumConta() << ", salário " << conta->getSalarioMensal() << ", saldo total disponível: R$ " << conta->saldoTotalDisponível() << std::endl;

    delete conta;

    std::getline(std::cin, nomeConta);
    std::cin >> numConta >> salarioMensal >> deposito >> sacar;
    std::cin.ignore();

    conta = new ContaEspecial(nomeConta, numConta, salarioMensal);
    conta->depositar(deposito);
    conta->sacar(sacar);

    std::cout << conta->getNomeCliente() << ", cc: " << conta->getNumConta() << ", salário " << conta->getSalarioMensal() << ", saldo total disponível: R$ " << conta->saldoTotalDisponível() << std::endl;

    delete conta;
}