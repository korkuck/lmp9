#include "header.h"

void zamien(int a, int b, int n)
{
	int i;
	double temp;

	for(i = 0; i < n+1; i++)
	{
		temp = macierz[a][i];
		macierz[a][i] = macierz[b][i];
		macierz[b][i] = temp;
	}
}
