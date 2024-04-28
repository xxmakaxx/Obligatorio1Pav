#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <iostream>
#include <vector>
#include "paga.h"
#include "empresa.h"

using namespace std;

class Empleado {
    protected:
        string nombre;
        string ci;
        int edad;
        Paga valor_hora;
        Empresa *empresa;
    public:
        Empleado() {
            nombre="";
            ci="";
            edad=0;
        }
        ~Empleado() {

        }
        virtual string getNombre() {
            return this->nombre;
        }
        virtual string getCi() {
            return this->ci;
        }
        virtual int getEdad() {
            return this->edad;
        }
        virtual Paga getValorHora() {
            return this->valor_hora;
        }
        virtual int getHoras();
        //virtual void get_sueldo_peso()=0;
        //virtual void get_sueldo_dolar()=0;
        
};

#endif