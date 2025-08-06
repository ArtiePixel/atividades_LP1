#include <iostream>
#include <string>
#include "Pedidos.hpp"
#include "Restaurante.hpp"

int main(){
    int numero, quantidade, numMesa;
    float preco = 0;
    std::string descricao;
    Restaurante rest;

    std::cin >> numero;

    while(numero != -1){
        std::cin.ignore();
        std::getline(std::cin, descricao);
        std::cin >> quantidade;
        std::cin >> preco;
        std::cin >> numMesa;

        Pedidos p(numero, quantidade, preco, descricao);
        rest.adicionarMesa(p, numMesa);
        rest.getMesa(numMesa).exibeConta();

        std::cin >> numero;
        
    }
    std::cout << "Total Restaurante: " << rest.calculaTotalRestaurante() << std::endl;
}
