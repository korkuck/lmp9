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

