#ifndef JORNALERO_H
#define JORNALERO_H
#include "empleado.h"

class Jornalero : public Empleado {
    private:
        int horas;
    public:
        Jornalero();
        Jornalero(string,string,int,Paga, int);
        ~Jornalero();
        //void get_sueldo_peso();
        //void get_sueldo_dolar();
        string getNombre();
        string getCi();
        int getEdad();
        Paga getValorHora();
        int getHoras();
};

#endif