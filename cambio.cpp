#include "cambio.h"

float Cambio::a_peso(float importe) {
    return importe * 39.05;
}

float Cambio::a_dolar(float importe) {
    return importe / 39.05;
}