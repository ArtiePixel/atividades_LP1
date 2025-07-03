/*
Escreva um programa para calcular a distância entre dois pontos no plano
catersiano. O seu programa deve ter uma estrutura Ponto, com campos
x e y, e uma função que recebe dois pontos e retorna o quadrado da distância
entre eles.
*/
#include <iostream>
#include <cmath>

typedef struct {
    int x, y;
} Ponto;

int distPontos(Ponto A, Ponto B){
    int distanciaQuadrado;

    distanciaQuadrado = pow((B.x - A.x), 2) + pow((B.y - A.y), 2);

    return distanciaQuadrado;
}

int main(){
    Ponto A, B;

    std::cin >> A.x >> A.y;
    std::cin >> B.x >> B.y;

    std::cout << distPontos(A, B) << std::endl;
}