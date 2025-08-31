#include "Eleitor.hpp"
#include <vector>

class GerenciadorEleitor{
    private:
        std::vector<Eleitor> eleitores;

        void verificaMenoridade(Eleitor *el){
            if (el->getIdade() < 16){
                throw std::underflow_error("Eleitor " + el->getNome() + " não pode ser cadastrado");
            }
        }

        void verificaPendenciaIdade(Eleitor *el){
            if (el->getIdade() > 20){
                throw std::overflow_error("Eleitor " + el->getNome() + " com pendência");
            }
        }

    public:
        void cadastrarEleitor(std::string name, std::string title, int age){
            Eleitor novoEleitor(name, title, age);
            eleitores.push_back(novoEleitor);
        }
        void verificarEleitores(){
            for (int i = 0; i < eleitores.size(); i++){
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
