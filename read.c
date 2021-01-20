#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void czytaj_macierz(int m, int n, char *nazwa_pliku)
{
	int i, j;
	FILE *in = fopen(nazwa_pliku, "r");
	if(in == NULL)
	{
		fprintf(stderr, "Blad czytania pliku %s!", nazwa_pliku);
		return;
	}
	for(i=0;i<m;i++)
		for(j=0;j<n+1;j++)
			fscanf(in,"%lf", &macierz[i][j]);

}
