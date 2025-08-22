#include "Endereco.hpp"

class Pessoa{
    private:
    std::string nome, telefone;
    Endereco endereco;

    public:
    Pessoa(){}
    Pessoa(std::string n) : nome(n) {}
    Pessoa(std::string n, Endereco e, std::string t) : nome(n), endereco(e), telefone(t){}

    void setNome(std::string n){
        nome = n;
    }
    void setEndereço(Endereco e){
        endereco = e;
    }
    void setTelefone(std::string t){
        telefone = t;
    }

    std::string getNome(){
        return nome;
    }
    Endereco getEndereco(){
        return endereco;
    }
    std::string getTelefone(){
        return telefone;
    }

    std::string toString(){
        return nome + ", " + telefone + "\n" + endereco.toString() + "\n\n";
    }
};