#include "Pagamento.hpp"

class Controle{
    private:
    Pagamento* pagamentos;
    int tamanho;

    public:
    Controle(int numPagamentos){
        tamanho = numPagamentos;
        pagamentos = new Pagamento[tamanho];
    }
    ~Controle(){
        delete[] pagamentos;
    }

    void setPagamento(Pagamento p, int index){
        pagamentos[index] = p;
    }
    Pagamento getPagamento(int pos){
        return pagamentos[pos];
    }
    float calculaTotalDePagamentos(){
        float total = 0;
        for(int i = 0; i<tamanho; i++){
            total += pagamentos[i].getValorPagamento();
        }
        return total;
    }
    int getIndexFuncionario(std::string nomeBusca){
        for (int i = 0; i < tamanho; ++i) {
            if (pagamentos[i].getNomeFuncionario().find(nomeBusca) != std::string::npos) {
                return i;
            }
        }
        return -1;
    }
};