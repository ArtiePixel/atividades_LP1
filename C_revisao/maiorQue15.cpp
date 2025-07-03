/*Implemente um programa que recebe vários números inteiros e calcula a porcentagem dos números ímpares maiores do que 15 dentre todos os números. 
Em seguida, imprima na saída o valor da porcentagem seguido do caractere '%'. O programa deve encerrar quando for informado o número 0.*/
#include <iostream>

int main(){
    int entrada, contador, total_espec = 0, total = 0;
    double porcentagem;

    std::cin >> entrada;
    do{
        if (entrada > 15 && entrada % 2 == 1){
            total_espec++;
        }
        total++;
        
        std::cin >> entrada;

    } while (entrada != 0);

    porcentagem = (total_espec/(float)total) * 100;

    std::cout << porcentagem << "%\n";
}