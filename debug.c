#include <stdlib.h>
#include <stdio.h>
#include "header.h"

void wypisz_macierz(int m, int n)
{
	int i,j;
	printf("\nTak wyglada nasza macierz:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n+1;j++)
			printf("%lf ",macierz[i][j]);
		printf("\n");
	}
}

void wypisz_wyniki(int n)
{
	int i;
	printf("\n Rozwiazaniem ukladu sa liczby: \n");
	for(i=0; i<n; i++)
	{
		printf(" x%d:%.2lf ",i+1,v_wynikow[i]);
	}
	printf("\n");
}

