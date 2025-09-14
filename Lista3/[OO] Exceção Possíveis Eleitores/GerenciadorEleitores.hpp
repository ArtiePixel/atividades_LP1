#include "Eleitor.hpp"
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>

class GerenciadorEleitor{
    private:
        std::vector<Eleitor> eleitores;

        void verificaMenoridade(Eleitor *el){
            if (el->getIdade() < 16){
                std::string nomeEleitor = el->getNome();

                std::transform(nomeEleitor.begin(), nomeEleitor.end(), nomeEleitor.begin(), ::toupper);

                throw std::underflow_error("Eleitor " + nomeEleitor + " não pode ser cadastrado");
            }
        }

        void verificaPendenciaIdade(Eleitor *el){
            if (el->getIdade() > 20){
                std::string nomeEleitor = el->getNome();

                std::transform(nomeEleitor.begin(), nomeEleitor.end(), nomeEleitor.begin(), ::toupper);

                throw std::overflow_error("Eleitor " + nomeEleitor + " com pendência");
            }
        }

    public:
        void cadastrarEleitor(std::string name, std::string title, int age){
            Eleitor novoEleitor(name, title, age);
            eleitores.push_back(novoEleitor);
        }
        void verificarEleitores(){
            for (size_t i = 0; i < eleitores.size(); i++){
                try {
                    verificaMenoridade(&eleitores[i]);
                    verificaPendenciaIdade(&eleitores[i]);
               }
                catch (const std::underflow_error e){
                    std::cerr << e.what() << std::endl;
                }
                catch (const std::overflow_error e){
                    std::cerr << e.what() << std::endl;
                }
            }
        }
};
