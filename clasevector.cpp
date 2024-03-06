//KATHERINE VARGAS EGUEZ
#include "clasevector.h"
#include <iostream>
using namespace std;

clasevector::clasevector()
{

}
clasevector::~clasevector()
{

}
void clasevector::set_n(int _n)
{
	//da valor al atributo n o setea
	n = _n;
}
int clasevector::get_n()
{
	//devolver el valor del atribbuto n
	return n;
}
void clasevector::cargar(int _n, int _vec[])
{
	//equivale a setear el vector, dar valor al vector
	//los arreglos funcionan por referencia no ncecitaan &
	for (int i = 0; i < _n; i++)
	{
		cout << " Vec[ " << i << "]= ";
		cin >> _vec[i];
	}
}
int clasevector::mostrar(int _vec[])
{
	for (int i = 0; i < n; i++)
		cout << "_vector: [" << i << "]= " << _vec[i] << endl;
	return 0;
}
void clasevector::ordenar(int _vec[], int _vec2[])
{
	int aux; 
	for (int i = 0; i < n; i++)
	{
		_vec2[i] = _vec[i];
		for (int j = i; j < n; j++)
		{
			if (_vec[i] > _vec[j])
			{
				aux = _vec[i];
				_vec[i] = _vec[j];
				_vec[j] = aux;
			}
		}
	}
}
int clasevector::promedio(int _vec[], int _n)
{
	int prom, aux = 0; // aux es el acumulador de suma, prom es 
	for (int i = 0; i < _n; i++)
	{
		aux = aux + _vec[i];
		prom = aux / _n;
		return prom; 
	}
}
