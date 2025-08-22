#include <iostream>

class Endereco{
    private:
    int numero;
    std::string rua, bairro, cidade, estado, cep;

    public:
    Endereco(){}

    Endereco(std::string r, int n, std::string b, std::string c, std::string e, std::string ce){
        rua = r;
        numero = n;
        bairro = b;
        cidade = c;
        estado = e;
        cep = ce;
    }

    std::string toString(){
        return rua + ", " + std::to_string(numero) + ", " + bairro + ". " + cidade + " - " + estado + ". CEP: " + cep;
    }
};