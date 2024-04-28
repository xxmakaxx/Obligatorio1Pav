#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <iostream>
#include <vector>
#include "paga.h"
#include "empresa.h"
#include "empleado.h"

using namespace std;

class Empleado {
    protected:
        string nombre;
        string ci;
        int edad;
        Paga valor_hora;
        Empresa *empresa;
    public:
        //virtual void get_sueldo_peso()=0;
        //virtual void get_sueldo_dolar()=0;
        virtual void mostrarDatos()=0;
        Empleado() {

        }
};

#endif