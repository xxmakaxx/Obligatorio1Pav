#ifndef FIJO_H
#define FIJO_H
#include "empleado.h"

class Fijo : public Empleado {
    private:
    public:
        Fijo();
        Fijo(string, string, int, Paga);
        ~Fijo();
        //void get_sueldo_peso();
        //void get_sueldo_dolar();
        string getNombre();
        string getCi();
        int getEdad();
        Paga getValorHora();
};

#endif