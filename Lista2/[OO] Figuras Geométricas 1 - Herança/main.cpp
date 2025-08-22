#include <iostream>
#include "Quadrado.hpp"
#include "Retangulo.hpp"
#include "Triangulo.hpp"
#include "Circulo.hpp"

int main(){
    int tipo;
    std::cin >> tipo;
    do{
        switch (tipo)
        {
        case 1: {
            Quadrado q;
            q.lerAtributosArea();
            std::cout << q.getNome(tipo) << " de área " << q.calcularArea() << std::endl;
            break;
        }
        case 2: {
            Retangulo r;
            r.lerAtributosArea();
            std::cout << r.getNome(tipo) << " de área " << r.calcularArea() << std::endl;
            break;
        }
        case 3: {
            Triangulo t;
            t.lerAtributosArea();
            std::cout << t.getNome(tipo) << " de área " << t.calcularArea() << std::endl;
            break;
        }
        case 4: {
            Circulo c;
            c.lerAtributosArea();
            std::cout << c.getNome(tipo) << " de área " << c.calcularArea() << std::endl;
            break;
        }
        case 0: {
            break;
        }
        }
        std::cin >> tipo;
    } while(tipo != 0);
}