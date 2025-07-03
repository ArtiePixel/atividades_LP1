/*Considere a estrutura a seguir:

struct Movel{

    char descricao[50];

    float peso;

    char tipo;

};

A partir desta estrutura, escreva um programa no qual o usuário cadastra n móveis, imprimindo ao final do cadastro um relatório informando:

    Qual a descrição do móvel mais pesado;
    ​Quantos móveis acima de 10Kg são do tipo 's';​
    Quantos móveis tem a descrição terminando em "Real";​*/
#include <iostream>
#include <string.h>

typedef struct{

    char descricao[50];

    double peso;

    char tipo;

} Movel;

int main(){
    int n, s_acima10kg = 0, quantidadeReal = 0, pesoAnterior = 0.0;
    char maisPesado[50] = "nenhum movel";
    Movel movel;

    std::cin >> n;

    for (int i = 0; i<n; i++){

        std::cin.ignore();
        std::cin.getline(movel.descricao, 50);
        std::cin >> movel.peso;
        std::cin >> movel.tipo;

        
        if (movel.peso > pesoAnterior){
            pesoAnterior = movel.peso;
            strcpy(maisPesado, movel.descricao);
        }
        

        if (movel.peso > 10 && movel.tipo == 's'){
            s_acima10kg++;
        }
        int tamanhoDescricao = strlen(movel.descricao);
        if (tamanhoDescricao >= 4) {
            if (strcmp(&movel.descricao[tamanhoDescricao - 4], "Real") == 0) {
                quantidadeReal++;
            }
        }
    }
    printf("Tipo 's' acima de 10Kg: %d\n", s_acima10kg);
    printf("Termina em \"Real\": %d\n", quantidadeReal);
    printf("Mais pesado: \"%s\"\n", maisPesado);
}