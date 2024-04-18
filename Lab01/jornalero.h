#include <iostream>
#include "empleado.h"

using namespace std;

class Jornalero : public Empleado {
    private:
        int horas;
    public:
        void get_sueldo_peso();
        void get_sueldo_dolar();
}