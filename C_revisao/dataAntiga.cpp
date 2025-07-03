#include <iostream>

typedef struct {
    int dia, mes, ano;
} Data;

int dataMaisAntiga(Data d1, Data d2){

    if (d1.ano < d2.ano){
        return 1;
    } else if (d1.ano > d2.ano){
        return -1;
    } else if (d1.ano == d2.ano){
        if (d1.mes < d2.mes){
            return 1;
        } else if (d1.mes > d2.mes){
            return -1;
        } else if (d1.mes == d2.mes){
            if (d1.dia < d2.dia){
                return 1;
            } else if (d1.dia > d2.dia){
                return -1;
            } else if (d1.dia == d2.dia){
                return 0;
            }
        }
    }
    
}

int main(){
    Data p1, p2;
    int resultado;

    std::cin >> p1.dia;
    std::cin >> p1.mes;
    std::cin >> p1.ano;

    std::cin >> p2.dia;
    std::cin >> p2.mes;
    std::cin >> p2.ano;

    resultado = dataMaisAntiga(p1, p2);
    if (resultado == 0){
        std::cout << "Pessoas são da mesma idade";
    } else if (resultado == -1){
        std::cout << "Pessoa 2 é mais velha";
    } else if (resultado == 1){
        std::cout << "Pessoa 1 é mais velha";
    }
}