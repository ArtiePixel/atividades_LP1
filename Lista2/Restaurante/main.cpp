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

    while(numero > 0){
        std::cin.ignore();
        std::getline(std::cin, descricao);
        std::cin >> quantidade;
        std::cin >> preco;
        std::cin >> numMesa;

        Pedidos p(numero, quantidade, preco, descricao);
        rest.adicionarMesa(p, numMesa);
        std::cin >> numero;
    }

    for (int i = 0; i < 100; i++){
        if (rest.getMesa(i).calcularTotal() > 0){
            std::cout << "Mesa " << i << std::endl;
            rest.getMesa(i).exibeConta();
        }
    }
    std::cout << "Total Restaurante: R$ " << rest.calculaTotalRestaurante() << std::endl;
}
