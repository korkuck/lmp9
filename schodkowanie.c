#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void schodkuj(int m, int n)
{
	int i,j,k; //zmienne pomocnicze do petli
	double mnoznik; //zmienna ta przyda sie do "schodkowania" macierzy - bedzie wygladac estetyczniej

	for(i = 0; i < m; i++)
	{
		mnoznik = (macierz[i+1][i]/macierz[i][i]);
		for(k = i + 1; k < m; k++)
			for(j = i; j < n; j++)
				macierz[k][j] = macierz[k][j] - mnoznik * macierz[i][j];
	}
}

void zamien(int a, int b, int n)
{
	int i; //zmienna do petli
	double temp; //zmienna do przechowania wartosci macierzy

	for(i = 0; i < n; i++)
	{
		temp = macierz[a][i];
		macierz[a][i] = macierz[b][i];
		macierz[b][i] = temp;
	}
}
