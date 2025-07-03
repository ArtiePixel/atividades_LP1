/*
Defina um tipo estruturado para armazenar os dados de um jogador de futebol no decorrer de um partida. Considere para tal os seguintes dados:

    Nome Completo;
    Idade;
    Chutes a Gol;
    Gols;

Escreve um programa no qual o usuário entra com os dados de dois jogares j1 e j2. 
O programa deverá imprimir na tela o nome e idade do jogador com a melhor pontaria. Isto é, qual converteu a maior parte dos chutes a gol.
*/
#include <iostream>

typedef struct{
    std::string nome;
    int idade;
    int chutes;
    int gols;
} Jogador;

int main(){
    Jogador j1, j2;

    std::getline(std::cin, j1.nome);
    std::cin >> j1.idade >> j1.chutes >> j1.gols;

    while (getchar() != '\n');

    std::getline(std::cin, j2.nome);
    std::cin >> j2.idade >> j2.chutes >> j2.gols;

    if (j1.gols/(double)j1.chutes > j2.gols/(double)j2.chutes){
        std::cout << j1.nome << " ";
        printf("(%d)\n", j1.idade);
    } else{
        std::cout << j2.nome << " ";
        printf("(%d)\n", j2.idade);
    }
}
