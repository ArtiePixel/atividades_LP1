#include "Imovel.hpp"

class Casa : public Imovel{
    private:
    int numPav;
    int numQuartos;
    float areaTerreno;
    float areaConstruida;

    public:
    Casa() : Imovel(1){};

    void lerAtributos(){
        Imovel::lerAtributos();
        std::cin >> numPav >> numQuartos >> areaTerreno >> areaConstruida;
    }
    void exibirAtributos(){
        Imovel::exibirAtributos();
        std::cout << numPav << " pavimentos, " << numQuartos << " quartos, " << areaTerreno << "m2 de área de terreno e " << areaConstruida << "m2 de área construída." << std::endl;
    }
};
