#include "Consultores.hpp"
#include <iostream>

int main(){
    Funcionario f;
    Consultor c;
    int matricula;
    std::string nome;
    float salario;

    std::cin >> matricula;
    std::cin.ignore();
    std::getline(std::cin, nome);
    std::cin >> salario;
    f.setMatricula(matricula);
    f.setNome(nome);
    f.setSalario(salario);
    std::cout << f.getMatricula() << " - " << f.getNome() << " - R$ " << f.getSalario() << std::endl;

    std::cin >> matricula;
    std::cin.ignore();
    std::getline(std::cin, nome);
    std::cin >> salario;
    c.setMatricula(matricula);
    c.setNome(nome);
    c.setSalario(salario);
    std::cout << c.getMatricula() << " - " << c.getNome() << " - R$ " << c.getSalario() << std::endl;
}