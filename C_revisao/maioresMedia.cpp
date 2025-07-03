/*
Escreva um programa que calcule e exiba a média aritmética de dez inteiros, 
fornecidos pelo usuário, e que exiba todos os números maiores que o valor da média aritmética.
*/

#include <iostream>

int main(){
    int entradas[10];
    float temp, n, media;

    for (int i = 0; i < 10; i++){
        std::cin >> n;
        temp += n;
        entradas[i] = n;
    }

    media = temp/10;

    std::cout << "media: " << media << std::endl;
    std::cout << "maiores que a media: ";

    for (int i = 0; i < 10; i++){
        if (entradas[i] > media){
            std::cout << entradas[i] << " ";
        }
    }

}