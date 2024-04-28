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
        void mostrarDatos();
        void setNombre(string);
        void setCi(string);
        void setEdad(int);
        void setValorh(Paga);
        void setHoras(int);
};

#endif