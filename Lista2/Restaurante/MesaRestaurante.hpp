#include <iostream>
#include <ostream>
#include "Pedidos.hpp"
#pragma once

class MesaRestaurante{
    private:
    Pedidos ped[100];
    int numPedidos;

    public:
    MesaRestaurante(){
        numPedidos = 0;
    }
    void adicionarPedido(Pedidos p){
        for (int i = 0; i < 100; i++){
            if (ped[i].getDescricao() == p.getDescricao()){
                ped[i].incrementaPedido(p.getQuantidade());
                return;
            }
        }
        if (numPedidos < 100) {
            ped[numPedidos++] = p;
        }
    }
    void zeraPedido(){
        for (int i = 0; i<numPedidos; i++){
            ped[i].setQuantidade(0);
        }
    }
    float calcularTotal(){
        float total = 0;
        for (int i = 0; i < numPedidos; i++){
            total += ped[i].getTotal();
        }
        return total;
    }
    void exibeConta(){
        bool item = false;
        for (int i = 0; i<numPedidos; i++){
            if (ped[i].getQuantidade() > 0){
                item = true;
                std::cout << ped[i].getNumero() << " - " << ped[i].getDescricao() << " - " << ped[i].getQuantidade() << " - " << ped[i].getPreco() << " - R$ " << ped[i].getTotal() << std::endl;
            }
            
        }
        if (item){
            std::cout << "Total: R$ " << calcularTotal() << std::endl << std::endl;
        }
    }
};