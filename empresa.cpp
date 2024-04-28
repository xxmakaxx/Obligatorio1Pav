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

void Empresa::setNombrel(string nombre_legal) {
    this->nombre_legal=nombre_legal;
}

void Empresa::setRut(int rut) {
    this->rut=rut;
}

void Empresa::mostrarEmpleados() {
    for(int i=0; i<empleados.size(); i++) {
        cout << "Empleados: " << i+1 << endl;
        empleados[i].mostrarDatos();
        
    }
}
