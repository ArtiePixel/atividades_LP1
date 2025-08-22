#include <iostream>
#include "Professor.hpp"
#include "Aluno.hpp"

int main(){
    std::string nome, telefone, cpf, departamento;
    int qntDisciplinas, semestre;
    float cra;

    std::getline(std::cin, nome);
    std::getline(std::cin, telefone);
    std::getline(std::cin, cpf);
    Pessoa p = Pessoa(nome, telefone, cpf);
    p.exibir();

    std::getline(std::cin, nome);
    std::getline(std::cin, telefone);
    std::getline(std::cin, cpf);
    std::cin >> cra;
    std::cin >> semestre;
    std::cin.ignore();
    Aluno a = Aluno(nome, telefone, cpf, cra, semestre);
    a.exibir();

    std::getline(std::cin, nome);
    std::getline(std::cin, telefone);
    std::getline(std::cin, cpf);
    std::cin >> qntDisciplinas;
    std::cin.ignore();
    std::getline(std::cin, departamento);
    Professor pf = Professor(nome, telefone, cpf, departamento, qntDisciplinas);
    pf.exibir();

}