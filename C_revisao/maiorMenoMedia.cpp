/*
Escreva um programa para ler uma sequência de valores inteiros fornecidos pelo usuário e informar o menor, o maior e a média dos valores lidos. 
Seu programa deve ler inicialmente o tamanho da sequência representado por um valor inteiro N e, 
em seguida, ler os N valores inteiros da sequência. Após a leitura, seu programa deverá imprimir o menor, o maior e a média dos valores, nesta ordem. */
#include <iostream>

int main(){
    int n, entradas, maior, menor;
    double media, soma, total;

    std::cin >> n;
    for (int i = 0; i < n; i++){
        std::cin >> entradas;
        if (i == 0){
            maior = entradas;
            menor = entradas;
        } else{
            if (entradas > maior){
                if (i == 1){
                    menor = maior;
                }
                maior = entradas;
            } else if(entradas < menor){
                menor = entradas;
            }
        }
        soma += entradas;
        total++;
    }

    media = (float)soma/(float)total;

    std::cout << menor << " ";
    std::cout << maior << " ";
    std::cout << media << std::endl;
}