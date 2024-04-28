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

void Fijo::mostrarDatos() {
    cout << "Nombre: " << nombre << endl;
    cout << "Ci: " << ci << endl;
    cout << "Edad: " << edad << endl;
}

void Fijo::setNombre(string nombre) {
    this->nombre=nombre;
}

void Fijo::setCi(string ci) {
    this->ci=ci;
}

void Fijo::setEdad(int edad) {
    this->edad=edad;
}

void Fijo::setValorh(Paga valor_hora) {
    this->valor_hora=valor_hora;
}