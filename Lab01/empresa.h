#include <iostream>
#include <vector>
#include "empleado.h"
#define MAX_EMPLEADO 100

using namespace std;

class Empresa {
    private:
        string nombre;
        string nombre_legal;
        int rut;
        vector<Empleado> empleados(MAX_EMPLEADO);
    public:
        Empresa();
        Empresa(string, string, int, vector<Empleado>);
        ~Empresa();
        Empresa total_sueldo_peso();
        Empresa total_sueldo_dolar();
};