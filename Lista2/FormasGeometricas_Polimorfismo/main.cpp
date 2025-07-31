#include <iostream>
#include <iostream>
#include "FormasGeometricas.hpp"
#include "Quadrado.hpp"
#include "Retangulo.hpp"
#include "Triangulo.hpp"
#include "Circulo.hpp"

int main(){
    int tipo;
    Formas* form;

    while (tipo != 0) {
        switch (tipo) {
            case 1:{
                form = new Quadrado();
                form->lerAtributosArea();
                std::cout << form->getNome(tipo) << " de área " << form->calcularArea();
                break;
            }
            case 2:{
                form = new Retangulo();
                form->lerAtributosArea();
                std::cout << form->getNome(tipo) << " de área " << form->calcularArea();
                break;
            }
            case 3:{
                form = new Triangulo();
                form->lerAtributosArea();
                std::cout << form->getNome(tipo) << " de área " << form->calcularArea();
            }
            case 4:{
                form = new Circulo();
                form->lerAtributosArea();
                std::cout << form->getNome(tipo) << " de área " << form->calcularArea();
            }
            case 0:{
                break;
            }
        }
    }


}