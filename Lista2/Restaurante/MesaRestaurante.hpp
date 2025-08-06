#include <iostream>
#include <ostream>
#include "Pedidos.hpp"
#pragma once

class MesaRestaurante{
    private:
    Pedidos ped[100];
    int numPedidos = 0;

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
        if (numPedidos < 100) {
            ped[numPedidos] = p;
            numPedidos++;
        }
    }
    void zeraPedido(){
        for (int i = 0; i<100; i++){
            ped[i].setQuantidade(0);
        }
    }
    float calcularTotal(){
        float total = 0;
        for (int i = 0; i < 100; i++){
            total = ped[i].getTotal();
        }
        return total;
    }
    void exibeConta(){
        for (int i = 0; i<numPedidos; i++){
            std::cout << ped[i].getNumero() << " - " << ped[i].getDescricao() << " - " << ped[i].getQuantidade() << " - " << ped[i].getPreco() << " - R$ " << ped[i].getTotal() << std::endl;
            std::cout << "Total: R$ " << calcularTotal() << std::endl << std::endl;
        }
    }
};