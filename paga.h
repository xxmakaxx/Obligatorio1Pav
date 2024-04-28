#ifndef PAGA_H
#define PAGA_H
#include "moneda.h"

class Paga {
    private:
        float monto;
        TipoMoneda moneda;
    public:
        Paga();
        Paga(float, TipoMoneda);
        ~Paga();
        Paga a_dolar();
        Paga a_peso();
        float getMonto();
        TipoMoneda getMoneda();
};

#endif