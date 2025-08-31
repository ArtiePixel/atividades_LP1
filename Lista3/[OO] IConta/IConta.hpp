#include <string>

class IConta{
    public:
        virtual ~IConta(){};

        virtual float saldoTotalDisponível() = 0;
        virtual void sacar(float valor) = 0;
        virtual void depositar(float valor) = 0;
};