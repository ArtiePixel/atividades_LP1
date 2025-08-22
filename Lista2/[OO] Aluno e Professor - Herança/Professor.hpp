#include "Pessoa.hpp"
#include <string>

class Professor : public Pessoa{
    private:
    std::string departamento;
    int qtdDisciplinas;

    public:
    Professor(std::string n, std::string t, std::string c, std::string dp, int q) : Pessoa(n, t, c){
        departamento = dp;
        qtdDisciplinas = q;
    }
    void exibir(){
        Pessoa::exibir();
        std::cout << "Qtd: " << qtdDisciplinas << " - " << departamento << std::endl;
    }
};