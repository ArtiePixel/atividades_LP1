/*Defina um tipo estruturado para representar um veículo, descrito pelos seguintes dados:

    Modelo;
    Marca;
    Ano de Fabricação;
    Preço;

Escreva um programa no qual o usuário informa os dados de dois veículos, sendo impresso ao final o modelo e marca do veículo mais antigo. 
Caso ambos os veículos tenham sido fabricados no mesmo ano, informe a marca e o modelo do veículo mais barato.*/

#include <iostream>

typedef struct 
{
    std::string modelo;
    std::string marca;
    int ano;
    double valor;
} Auto;

int main(){
    Auto carro1, carro2;

    std::cin >> carro1.modelo >> carro1.marca >> carro1.ano >> carro1.valor;
    std::cin >> carro2.modelo >> carro2.marca >> carro2.ano >> carro2.valor;

    if (carro1.ano < carro2.ano){
        std::cout << carro1.marca << " " << carro1.modelo << std::endl;
    } else if (carro1.ano > carro2.ano){
        std::cout << carro2.marca << " " << carro2.modelo << std::endl;
    } else{
        if (carro1.valor < carro2.valor){
            std::cout << carro1.marca << " " << carro1.modelo << std::endl;
        } else{
            std::cout << carro2.marca << " " << carro2.modelo << std::endl;
        }
    }
}