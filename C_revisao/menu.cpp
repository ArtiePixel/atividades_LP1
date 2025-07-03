/*
Faça um programa que apresente um Menu com 4 opções, em seguida, leia, da entrada padrão a opção desejada. 
Por fim, apresente a opção selecionada, e volte ao início do Menu. Caso a opção tenha sido o item 4 o programa deve ser finalizado. Caso uma opção invalida lida, apresente a mensagem "Opcao <ValorOpcao> Invalida". Exemplo do menu:

1 - Item 1

2 - Item 2

3 - Item 3

4 - Sair*/
#include <iostream>

int main(){
    int entrada;

    do{
        std::cout << "1 - Item 1 \n2 - Item 2 \n3 - Item 3 \n4 - Sair\n";
        std::cin >> entrada;

        switch (entrada)
        {
        case 1:
            std::cout << "Item 1\n";
            break;
        case 2:
            std::cout << "Item 2\n";
            break;
        case 3:
            std::cout << "Item 3\n";
            break;
        case 4:
            std::cout << "Sair\n";
            break;

        default:
            printf("Opcao %d Invalida\n", entrada);
            break;
        }

    } while (entrada != 4);
}