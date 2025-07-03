/*Escreva um programa que lê as coordenadas no plano cartesiano de um ponto
p e em seguida lê um inteiro n e as coordenadas de n pontos. Seu programa deve
dizer qual dos n pontos é o ponto mais próximo de p. O seu programa deve ter
uma estrutura Ponto, com campos x e y, e uma função que recebe dois pontos e
retorna a distância entre eles.*/
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
    int n, dist, novadist;
    Ponto p, entrada, proximo;

    std::cin >> p.x >> p.y;

    std::cin >> n;
    
    for (int i = 0; i<n; i++){
        std::cin >> entrada.x >> entrada.y;
        novadist = distPontos(p, entrada);
        
        if (i == 0){
            proximo.x = entrada.x;
            proximo.y = entrada.y;
            dist = novadist;
        } else{
            if (novadist < dist){
                proximo.x = entrada.x;
                proximo.y = entrada.y;
                dist = novadist;
            }
        }
    }
    printf("Ponto mais perto é (%d, %d)\n", proximo.x, proximo.y);
}