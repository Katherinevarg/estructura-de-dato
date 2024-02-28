#include <iostream>
#include "Vector.h"
#define MAX 10
using namespace std; 
void main()
{
	int v[MAX], n, op;
	Vector vecito1;
	//validando la entrada
	cout << "ingrese el numero de elementos <10: ";
	do {
		cin >> n;
	} while (n <= 0);
	vecito1.set_n(n);//cambiando el valor del atributo del objeto
	//desplegando menu 
	do {
		cout << "-----       M E N U        -----" << endl;
		cout << "|1.- Cargar Vector.            |" << endl;
		cout << "|2.- Mostrar Vector.           |" << endl;
		cout << "|3.- Ordenar Vector.           |" << endl;
		cout << "|0.- Salir                     |" << endl;
		cout << "--------------------------------" << endl;
		cout << " Elija una opcion" << endl;
		cin >> op;
		switch (op) {
		case 1:
			vecito1.cargarVector(v, n);  //Llamar al metodo
			break;
		case 2:
			vecito1.mostrarVector(v, n);
			break;
		case 3:
			vecito1.ordenarVector(v, n);
			break;
		case 0:
			cout << "Salir" << endl;
			break;
		default:
			cout << "Error: Opcion no valida..." << endl;
			break;
		}
	} while (op != 0);
}
//el main no puede llamrse igual que la case 
