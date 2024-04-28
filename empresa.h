#ifndef EMPRESA_H
#define EMPRESA_H
#include "empleado.h"

class Empresa {
    private:
        string nombre;
        string nombre_legal;
        int rut;
        vector<Empleado> empleados;
    public:
        Empresa();
        Empresa(string, string, int);
        ~Empresa();
        //void total_sueldo_peso();
        //void total_sueldo_dolar();
        void mostrarEmpleados();
        void setNombre(string);
        void setNombrel(string);
        void setRut(int);
};

#endif