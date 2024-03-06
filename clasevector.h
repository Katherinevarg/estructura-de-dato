//KATHERINE VARGAS EGUEZ
#pragma once
#define MAX 10
 class clasevector
{

     private:
         int vec[MAX];
         int n;
     public:
         clasevector();
         ~clasevector();
         void set_n(int _n);
         int get_n();
         void cargar(int _n, int _vec[]);
         int mostrar(int _vec[]);
         void ordenar(int _vec[], int _vec2[]);
         int promedio(int _vec[], int _n);

};
