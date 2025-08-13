#include "Imovel.hpp"

class Apartamento : public Imovel{
    int numQuartos, andar, numGaragem;
    float area, valCondo;

    public:
    Apartamento() : Imovel(2){};

    void lerAtributos(){
        Imovel::lerAtributos();
        std::cin >> area >> numQuartos >> andar >> valCondo >> numGaragem;
    }
    void exibirAtributos(){
        Imovel::exibirAtributos();
        std::cout << area << "m2 de área, " << numQuartos << " quartos, " << andar << " andar(es), " << valCondo << " de condomínio, " << numGaragem << " vaga(s) de garagem.";
    }
};
