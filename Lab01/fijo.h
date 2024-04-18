#include <iostream>
#include "empleado.h"

using namespace std;

class Fijo : public Empleado {
    private:
    public:
        Fijo();
        Fijo(string, string, int, Paga);
        ~Fijo();
        void get_sueldo_peso();
        void get_sueldo_dolar();
};