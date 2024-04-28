#include <iostream>
#include <vector>
#include "empleado.h"
#include "empresa.h"
#include "jornalero.h"
#include "fijo.h"
#include "paga.h"

#define MAX_EMPLEADO 100

using namespace std;

int main() {

    vector<Empleado*> empleados;
    Empresa empresa;
    int opcion=0;
    char ingresar;
    string nombre, nombre_legal;
    int rut;
    string nom,ci;
    int edad, horas;
    Paga valor_hora;
    Empleado* e;

    do {
    cout << "MENU" << endl;
    cout << endl;
    cout << "1) Altar empresa" << endl;
    cout << "2) Altar empleado" << endl;
    cout << "3) Obtener el total de sueldos" << endl;
    cout << "4) Mostrar empleados" << endl;
    cout << "5) Salir" << endl;
    cout << endl;
    cout << "Ingrese una opción: ";
    cin >> opcion;

        switch(opcion) {
            case 1:

                cout << "Ingrese el nombre: ";
                cin >> nombre;
                cout << "Ingrese nombre legal: ";
                cin >> nombre_legal;
                cout << "Ingrese el rut: ";
                cin >> rut;
                empresa.setNombre(nombre);
                empresa.setNombrel(nombre_legal);
                empresa.setRut(rut);
                break;
            case 2:

                for(int i=0; i<MAX_EMPLEADO; i++) {
                    while(ingresar=='s' || ingresar=='S') {
                        cout << "1) Ingresar jornalero" << endl;
                        cout << "2) Ingresar fijo" << endl;
                        cin >> opcion;
                        if(opcion==1) {
                            cout << "Ingrese nombre: ";
                            cin >> nombre;
                            cout << "Ingrese cédula (con puntos y dñigito verificador): ";
                            cin >> ci;
                            cout << "Ingrese el valor por hora y la moneda (us o usd): ";
                            cout << "Ingrese la cantidad de horas: ";
                            cin >> horas;
                            e = new Jornalero(nom, ci, edad, valor_hora, horas);
                            empleados.push_back(e);
                        }
                        else {
                            //cout << "Ingrese nombre: ";
                            //getline(cin,nombre);
                            //cout << "Ingrese cédula (con puntos y dígito verificador): ";
                            //getline(cin,ci);
                            //cout << "Ingrese el valor por hora y la moneda (us o usd): ";
                            //Fijo valor_hora = new Paga(valorh,moneda);
                            //Empleado* e = new Fijo();
                            //e(nombre,ci,valor_hora,&empresa);
                     }
                        cout << "Desea ingresar más empleados? Si (S) || No (N): ";
                        cin >> ingresar;
                    }
                }
                break;

            case 3:
                //codigo
                break;
            case 4:
                for(int i=0;i<empleados.size();i++) {
                    empleados[i]->mostrarDatos();
                }
                break;
        }
    } while(opcion!=5);

    return 0;
}