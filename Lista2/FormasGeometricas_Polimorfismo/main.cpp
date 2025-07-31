#include <iostream>
#include <iostream>
#include "FormasGeometricas.hpp"
#include "Quadrado.hpp"
#include "Retangulo.hpp"
#include "Triangulo.hpp"
#include "Circulo.hpp"

int main(){
    int tipo;
    Formas* form = nullptr;

    while (std::cin >> tipo && tipo != 0) {
        if (form != nullptr){
            delete form;
            form = nullptr;
        }
        switch (tipo) {
            case 1:{
                form = new Quadrado();
                break;
            }
            case 2:{
                form = new Retangulo();
                break;
            }
            case 3:{
                form = new Triangulo();
                break;
            }
            case 4:{
                form = new Circulo();
                break;
            }
            case 0:{
                break;
            }
        }
        if (form != nullptr){
            form->lerAtributosArea();
            std::cout << form->getNome() << " de area " << form->calcularArea() << std::endl;
        }
    }

    if (form != nullptr){
        delete form;
    }


}