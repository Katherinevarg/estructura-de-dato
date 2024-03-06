//KATHERINE VARGAS EGUEZ
#include <iostream>
#include "clasevector.h" // Es obligatoria para usar la clase
#define MAX 100

using namespace std;

int main()
{
    int tamanio, v[MAX];
    clasevector vector1; //declarar un objeto, o instancia de la clase 
    cout << "ingresar el numero de elementos: ";
    // validando la entrada. barbaje in barbaje out
    do {
        cin >> tamanio; 
    } while (tamanio > MAX || tamanio < 0);
    vector1.set_n(tamanio); // cambia el valor del atributo n  
    vector1.cargar(tamanio, v);
    vector1.mostrar(v);
}
