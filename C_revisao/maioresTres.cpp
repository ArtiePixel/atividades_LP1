/*ocê está desenvolvendo um sistema que compara valores inteiros de sensores em um experimento. A cada rodada, 
três valores inteiros são coletados e você precisa determinar qual deles é o maior. Para simplificar essa tarefa, 
crie um programa em C++ que receba três números inteiros e, utilizando uma função, retorne o maior dos três.*/
#include <iostream>

int maiorTres(int a, int b, int c){
    int maior;
    maior = a;
    
    if (b > maior && b > c){
        maior = b;
    } else if (c > maior && c > b ){
        maior = c;
    }

    return maior;
}

int main(){
    int num1, num2, num3, resultado;

    std::cin >> num1;
    std::cin >> num2;
    std::cin >> num3;

    resultado = maiorTres(num1, num2, num3);
    std::cout << "Maior número: " << resultado << std::endl;

}