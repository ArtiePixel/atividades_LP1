#include <iostream>
#include "Casa.hpp"
#include "Apartamento.hpp"
#include "Terreno.hpp"

int main(){
    int n, tipo;
    std::cin >> n;
    for (int i = 0; i < n; i++){
        std::cin >> tipo;

        if (tipo == 1){
            Casa c;
            c.lerAtributos();
            c.exibirAtributos();
        } else if (tipo == 2){
            Apartamento a;
            a.lerAtributos();
            a.exibirAtributos();
        } else if (tipo == 3){
            Terreno t;
            t.lerAtributos();
            t.exibirAtributos();
        }
    }
}
