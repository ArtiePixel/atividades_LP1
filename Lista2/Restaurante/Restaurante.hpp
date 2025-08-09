#include "MesaRestaurante.hpp"
#pragma once

class Restaurante{
    private:
    MesaRestaurante mesas[100];

    public:
    void adicionarMesa(Pedidos p, int indMesa){
        mesas[indMesa].adicionarPedido(p);
    }

    float calculaTotalRestaurante(){
        float totalRestaurante = 0;
        for (int i = 0; i < 100; i++){
            totalRestaurante += mesas[i].calcularTotal();
        }
        return totalRestaurante;
    }

    MesaRestaurante getMesa(int ind){
        return mesas[ind];
    }
};