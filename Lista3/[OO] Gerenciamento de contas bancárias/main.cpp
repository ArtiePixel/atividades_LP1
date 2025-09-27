#include "ContaEspecial.hpp"
#include "Poupanca.hpp"
#include <vector>

int main(){
    std::vector<Conta*> contas;

    std::string nome;
    int numConta;
    float salario, saque, deposito;

    std::getline(std::cin, nome);
    std::cin >> numConta;
    std::cin >> salario;
    std::cin >> deposito;
    std::cin >> saque;

    ContaCorrente* cc = new ContaCorrente(nome, numConta, 0, salario);
    cc->definirLimite();
    cc->depositar(deposito);
    cc->sacar(saque);
    std::cout << cc->getNomeCliente() << ", cc: " << cc->getNumConta() << ", salário " << cc->getSalarioMensal() << ", saldo total disponível: R$ " << cc->saldoTotalDisponivel() << std::endl;

    std::cin.ignore();
    std::getline(std::cin, nome);
    std::cin >> numConta;
    std::cin >> salario;
    std::cin >> deposito;
    std::cin >> saque;

    ContaEspecial* ce = new ContaEspecial(nome, numConta, 0, salario);
    ce->definirLimite();
    ce->depositar(deposito);
    ce->sacar(saque);
    std::cout << ce->getNomeCliente() << ", cc: " << ce->getNumConta() << ", salário " << ce->getSalarioMensal() << ", saldo total disponível: R$ " << ce->saldoTotalDisponivel() << std::endl;
    
    std::cin.ignore();
    std::getline(std::cin, nome);
    std::cin >> numConta;
    std::cin >> deposito;
    std::cin >> saque;

    Poupanca* cp = new Poupanca(nome, numConta, 0, 0);
    cp->depositar(deposito);
    cp->sacar(saque);

    
    std::cout << cp->getNomeCliente() << ", cc: " << cp->getNumConta() << ", saldo total disponível: R$ " << cp->render() + cp->getSaldo() << std::endl;

    delete cc;
    delete ce;
    delete cp;

}