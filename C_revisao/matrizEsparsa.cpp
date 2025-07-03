/*Implemente uma função que receba como parâmetro de entrada
uma matriz de números inteiros de tamanho qualquer e o seu tamanho.
A função a ser implementada deve retornar verdadeiro
caso a matriz seja esparsa ou falso caso contrário,
considerando que uma matriz é esparsa se ela possuir
mais do que 70% dos seus elementos iguais a 0.
A função main deve ler as dimensões da matriz, cada
um dos seus elementos e imprimir uma mensagem
informando se a matriz é esparsa ou não, de acordo
com a resposta da função. A matriz tem largura/altura
máximas igual a 10.*/
#include <iostream>

bool matrizEsparsa(int matriz[][10], int lin, int col){
    int cont_0 = 0;
    int total = col * lin;
    
    for (int i = 0; i < lin; i++){
        for (int j = 0; j < col; j++){
            if (matriz[i][j] == 0){
                cont_0++;
            }
        }
    }
    if ((double)cont_0 / total > 0.70){
        return true;
    } else {
        return false;
    }
}

int main(){
    int col, lin; //colunas e linhas
    int matriz[10][10];

    std::cin >> lin;
    std::cin >> col;

    for (int i = 0; i < lin; i++){
        for (int j = 0; j < col; j++){
            std::cin >> matriz[i][j];
        }
    }

    if (matrizEsparsa(matriz, col, lin)){
        std::cout << "A matriz é esparsa" << std::endl;
    } else{
        std::cout << "A matriz não é esparsa" << std::endl;
    }
}