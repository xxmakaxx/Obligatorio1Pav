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

void Jornalero::setNombre(string nombre) {
    this->nombre=nombre;
}

void Jornalero::setCi(string ci) {
    this->ci=ci;
}

void Jornalero::setEdad(int edad) {
    this->edad=edad;
}

void Jornalero::setValorh(Paga valor_hora) {
    this->valor_hora=valor_hora;
}

void Jornalero::setHoras(int horas) {
    this->horas=horas;
}

void Jornalero::mostrarDatos() {
    cout << "Nombre: " << nombre << endl;
    cout << "Ci: " << ci << endl;
    //cout << "Valor hora: " << valor_hora << endl;
    cout << "Horas: " << horas << endl;
}