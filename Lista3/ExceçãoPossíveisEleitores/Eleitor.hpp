#include <string>
#include <iostream>

class Eleitor{
    private:
        std::string nome, titulo;
        int idade;
    
    public:
        //constructors
        Eleitor(){}
        Eleitor(std::string n, std::string t, int i){
            nome = n;
            titulo = t;
            idade = i;
        }
        
        //getters
        std::string getNome(){
            return nome;
        }
        int getIdade(){
            return idade;
        }
};
