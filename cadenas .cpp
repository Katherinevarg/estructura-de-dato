include "Cadenas.h"
#include <iostream>
#include <string>
Cadenas::Cadenas()
{
	//este metodo es el primero en ejecutarse cuando creo un objeto, inicializar valores
	longitud = 0;
}
Cadenas::~Cadenas()
{

}
string Cadenas::get_Cadenas()
{
	return cadenas;
}
void Cadenas:: set_cadenas(string car)
{
	cadenas = car;
	longitud = cadenas.length();
}
int Cadenas::tamanio()
{
	//metodo que devuelve el tamaño de la cadena 
}
int Cadenas::substring()
{

}
string Cadenas::caracter()
{

}
