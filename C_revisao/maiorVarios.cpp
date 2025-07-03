/* Código de Tutancamon II
Implemente um programa que receba uma quantidade indeterminada de números inteiros. Assumindo que serão digitados pelo menos dois números, 
o programa deve se encerrar quando for digitado o número 0. Após isto, devem ser impressos os dois maiores números digitados.
*/
#include <iostream>

int main(){
    int entrada, maior, segundoMaior, cont = 0;

    std::cin >> maior;
    std::cin >> segundoMaior;

    if (segundoMaior > maior){
        int temp = segundoMaior;
        segundoMaior = maior;
        maior = temp;
    }

    std::cin >> entrada;

    while (entrada != 0){
        if (entrada > maior){
            segundoMaior = maior;
            maior = entrada;
        } else if (entrada > segundoMaior){
            segundoMaior = entrada;
        }
        std::cin >> entrada;
    }
    
    std::cout << "Maior: " << maior << std::endl;
    std::cout << "Segundo maior: " << segundoMaior << std::endl;  
}