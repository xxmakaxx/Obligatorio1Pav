#include "fijo.h"
#include "empresa.h"

Fijo::Fijo() {

}

Fijo::Fijo(string nombre, string ci, int edad, Paga valor_hora)
{
    this->nombre=nombre;
    this->ci=ci;
    this->edad=edad;
    this->valor_hora=valor_hora;
}

string Fijo::getNombre() {
    return this->nombre;
}

string Fijo::getCi() {
    return this->ci;
}

int Fijo::getEdad() {
    return this->edad;
}

Paga Fijo::getValorHora() {
    return this->valor_hora;
}