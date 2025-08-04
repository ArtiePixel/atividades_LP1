#include "Pedidos.hpp"

class MesaRestaurante : public Pedidos{
    private:
    Pedidos ped[100];

    public:
    void adicionarPedido(Pedidos p){
        for (int i = 0; i < 100; i++){
            if (ped[i].getDescricao() == p.getDescricao()){
                ped[i].aumentarQuantidade(p.getQuantidade());
            }
            else {
                ped[i] = p;
            }
        }
    }
    void zeraPedido(){
        
    }
};