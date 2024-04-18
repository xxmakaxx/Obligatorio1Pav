#include <iostream>
#include "moneda.h"

using namespace std;

class Paga {
    private:
        float monto;
        Moneda moneda;
    public:
        Paga();
        Paga(float, Moneda);
        ~Paga();
        Paga a_dolar();
        Paga a_pesos();
};