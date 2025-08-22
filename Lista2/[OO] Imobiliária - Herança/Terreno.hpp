#include "Imovel.hpp"

class Terreno : public Imovel{
    private:
    float area;

    public:
    Terreno() : Imovel(3){};

    void lerAtributos(){
        Imovel::lerAtributos();
        std::cin >> area;
    }

    void exibirAtributos(){
        Imovel::exibirAtributos();
        std::cout << area << "m2 de área de terreno." << std::endl;
    }
};