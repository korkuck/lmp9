#include "header.h"

void zamien(int x, int y, int n)
{
	int k;
	double tmp;
	for(k = 0; k<=n; k++)
	{
		tmp=macierz[x][k];
		macierz[x][k]=macierz[y][k];
		macierz[y][k]=tmp;
	}
}
