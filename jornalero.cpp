#include "jornalero.h"
#include "empresa.h"

Jornalero::Jornalero() {
    horas=0;
}

Jornalero::Jornalero(string nombre, string ci, int edad, Paga valor_hora, int horas) {
    this->nombre=nombre;
    this->ci=ci;
    this->edad=edad;
    this->valor_hora=valor_hora;
    this->horas=horas;
}

Jornalero::~Jornalero() {

}

string Jornalero::getNombre() {
    return this->nombre;
}

string Jornalero::getCi() {
    return this->ci;
}

int Jornalero::getEdad() {
    return this->edad;
}

Paga Jornalero::getValorHora() {
    return this->valor_hora;
}

int Jornalero::getHoras() {
    return this->horas;
}