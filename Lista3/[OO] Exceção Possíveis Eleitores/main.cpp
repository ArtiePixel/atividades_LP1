#include <iostream>
#include "GerenciadorEleitores.hpp"

int main(){
    int n;
    std::cin >> n;
    std::cin.ignore();
    GerenciadorEleitor gerenciador;

    for (int i = 0; i < n; i++){
        std::string nome, titulo;
        int idade = 0;

        std::getline(std::cin, nome);
        std::cin >> idade;
        std::cin >> titulo;
        std::cin.ignore();

        gerenciador.cadastrarEleitor(nome, titulo, idade);
    }
    gerenciador.verificarEleitores();
}