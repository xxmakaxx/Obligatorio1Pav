#include "empresa.h"

Empresa::Empresa() {

}

Empresa::Empresa(string nombre, string nombre_legal, int rut) {
    this->nombre=nombre;
    this->nombre_legal=nombre_legal;
    this->rut=rut;
}

Empresa::~Empresa() {

}

void Empresa::setNombre(string nombre) {
    this->nombre=nombre;
}

void Empresa::setNombreLegal(string nombre_legal) {
    this->nombre_legal=nombre_legal;
}

void Empresa::setRut(int rut) {
    this->rut=rut;
}

