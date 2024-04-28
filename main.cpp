#include <iostream>
#include <vector>
#include "empleado.h"
#include "empresa.h"
#include "jornalero.h"
#include "fijo.h"
#include "paga.h"

#define MAX_EMPLEADO 100

using namespace std;

void menu();
int opcion();


int main()
{
    vector<Empleado*> empleado;
    Empleado* e1;
    Empleado* e2;
    int rut=0, edad=0, horas=0;
    int op=0;
    char ingresar, volver;
    float monto=0;
    TipoMoneda moneda=us;
    menu();
    op=opcion();
    string nombre_emp, nombre_legal_emp;
    string nombre_e, ci;
    Paga valor_h;
    int rut_emp=0;
    Empresa emp;

    while(op!=5) {
        switch(op) {
            case 1:
                cout << "Ingrese nombre: ";
                cin >> nombre_emp;
                cout << endl;
                cout << "Ingrese nombre legal: ";
                cin >> nombre_legal_emp;
                cout << endl;
                cout << "Ingrese rut: ";
                cin >> rut_emp;
                emp.setNombre(nombre_emp);
                emp.setNombreLegal(nombre_legal_emp);
                emp.setRut(rut_emp);
                break;
            case 2:
                do {
                    cout << "1) Ingresar jornalero" <<endl;
                    cout << "2) Ingresar fijo" << endl;
                    cin >> op;
                        if(op==1) {
                        for(int i=0; i<MAX_EMPLEADO; i++) {
                            cout << "Ingrese nombre: ";
                            getline(cin,nombre_e);
                            cout << "Ingrese ci: ";
                            cin >> ci;
                            cout << "Ingrese edad: ";
                            cin >> edad;
                            cout << "Ingrese el valor de la hora: ";
                            cin >> monto;
                            valor_h.setMonto(monto);
                            valor_h.setMoneda(moneda);
                            cout << "Ingrese horas: ";
                            cin >> horas;
                            empleado.push_back(new Jornalero(nombre_e,ci,edad,valor_h,horas));
                            getchar();
                            }
                        }
                        if(op==2) {
                        for(int i=0; i<empleado.size(); i++) {
                            cout << "Ingrese nombre: ";
                            getline(cin,nombre_e);
                            cout << "Ingrese ci: ";
                            cin >> ci;
                            cout << "Ingrese edad: ";
                            cin >> edad;
                            cout << "Ingrese el valor de la hora: ";
                            cin >> monto;
                            valor_h.setMonto(monto);
                            valor_h.setMoneda(moneda);
                            empleado.push_back(new Fijo(nombre_e,ci,edad,valor_h));
                            getchar();
                            }
                        }
                        else {
                            cout << "Opción incorrecta";
                        }

                    cout << "Desea ingresar más empleados? Si (S) | No (N): ";
                    cin >> ingresar;
                } while(ingresar=='s' || ingresar=='S');
                break;
            case 3:
                break;
            case 4:
                    for(int i=0; i<empleado.size();i++) {
                        cout << "Nombre: " << empleado[i]->getNombre() << endl;
                        cout << "Ci: " << empleado[i]->getCi() << endl;
                        cout << "Edad: " << empleado[i]->getEdad() << endl;
                        //cout << "Valor hora: " << empleado[i]->getValorHora() << endl;
                        cout << "Horas: " << empleado[i]->getHoras() << endl;
                    }
                break;

                }
                cout << endl;
                cout << "Desea volver al menú prinicipal? Si (S) | No (N): ";
                cin >> volver;
                if(volver=='s' || volver=='S') {
                    system("clear");
                    menu();
                    op=opcion();
                }


    }

    return 0;
}

void menu() {
	cout << "MENU PRINCIPAL" << endl << endl;
	cout << "1-Altar empresa" << endl;
	cout << "2-Altar empleado" << endl;
	cout << "3-Obtener el total de sueldos" << endl;
	cout << "4-Mostrar empleados" << endl;
	cout << "5-Salir" << endl << endl;
}

int opcion()
{
	int nro;
	do
	{
		cout << "Elija la opcion deseada: ";
		cin >> nro;
	} while(nro>8);
	return nro;
}