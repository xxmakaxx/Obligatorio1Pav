#include "paga.h"
#include "cambio.h"

Paga::Paga() {
    monto=0;
    moneda=us;
}
 
Paga::Paga(float monto, TipoMoneda moneda) {
    this->monto=monto;
    this->moneda=moneda;
}

Paga::~Paga() {

}

Paga Paga::a_dolar() {
    if(this->moneda==usd) {
        float cambio = Cambio::a_dolar(this->monto);
        return Paga(cambio,moneda);
    }
    else {
        cout << "Tipo de moneda no válida para esta conversión" << endl;
    }
}

Paga Paga::a_peso() {
    if(this->moneda==us) {
        float cambio = Cambio::a_peso(this->monto);
        return Paga(cambio,moneda);
    }
    else {
        cout << "Tipo de moneda no válida para esta conversión" << endl;
    }
}

float Paga::getMonto() {
    return monto;
}

TipoMoneda Paga::getMoneda() {
    return moneda;
}

void Paga::setMonto(float monto) {
    this->monto=monto;
}

void Paga::setMoneda(TipoMoneda moneda) {
    this->moneda=moneda;
}