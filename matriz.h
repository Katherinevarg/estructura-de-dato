//katherine vargas eguez 
#pragma once
#define MAX 20
class ejemplomatriz
{
private:
	int fil, col;
	int M[ MAX ][MAX];
public:
	ejemplomatriz();
	~ejemplomatriz();
	int get_fil();
	void set_fil(int fila);
	int get_col();
	void set_col(int columna);
	void mostrarmat(int MAT[MAX][MAX], int m, int n);
	void cargarmat(int MAT[MAX][MAX], int m, int n);
	float promedio(int MAT[MAX][MAX], int m, int n);
	int mayor(int MAT[MAX][MAX], int m, int n);
	void(int MAT[MAX][MAX], int MAT2[MAX][MAX], int MAT3[MAX][MAX]);
};
