#include <iostream>

void somaMatrizes(int matrizA[][50], int matrizB[][50], int resultado[][100], int linhas, int colunas){
    for (int i = 0; i<linhas; i++){
        for (int j = 0; j<colunas; j++){
            resultado[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

}

int main(){
    int linhas, colunas;
    
    std::cin >> linhas;
    std::cin >> colunas;

    int A[50][50], B[50][50], C[100][100];

    for (int i = 0; i<linhas; i++){
        for (int j = 0; j<colunas; j++){
            std::cin >> A[i][j];
        }
    }
    for (int i = 0; i<linhas; i++){
        for (int j = 0; j<colunas; j++){
            std::cin >> B[i][j];
        }
    }

    somaMatrizes(A, B, C, linhas, colunas);

    for (int i = 0; i<linhas; i++){
        for (int j = 0; j<colunas; j++){
            std::cout << C[i][j] << " ";
        }
        std::cout << std::endl;
    }
}