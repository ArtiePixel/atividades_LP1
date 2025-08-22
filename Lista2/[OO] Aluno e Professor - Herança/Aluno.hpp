#include "Pessoa.hpp"

class Aluno : public Pessoa{
    private:
    float cra;
    int semestre;
    
    public:
    Aluno(std::string n, std::string t, std::string c, float cr, int s) : Pessoa(n, t, c){
        cra = cr;
        semestre = s;
    }

    void exibir(){
        Pessoa::exibir();
        std::cout << "CRA: " << cra << " - Semestre: " << semestre << std::endl;
    }
};